#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QPixmap>
#include <QDir>
#include <QToolTip>
#include <QUrl>
#include <QFile>

#include <QTemporaryFile>
#include <QFileInfo>

#include <QApplication>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mediaPlayer = new QMediaPlayer();
    audioOutput = new QAudioOutput();

    mediaPlayer->setAudioOutput(audioOutput);


    QString imagePath = QDir::currentPath() + "/image/music.png";
    QPixmap pixmap(imagePath); // Вказати шлях до вашого зображення
    // Перевірка чи зображення успішно завантажено
    if (pixmap.isNull()) {
        qWarning("Failed to load image: %s", qPrintable(imagePath));
    } else {
        ui->img_lbl->setPixmap(pixmap); // Встановити зображення в QLabel
        ui->img_lbl->setScaledContents(true); // Дозволити масштабування зображення
    }
    ui->btn_preview->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->btn_next->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->btn_play_pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    ui->btn_volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));

    ui->sliderVolume->setMinimum(0);
    ui->sliderVolume->setMaximum(100);
    ui->sliderVolume->setValue(14);

    audioOutput->setVolume(0.14);

    audioOutput->setVolume(ui->sliderVolume->value());

    connect(mediaPlayer,&QMediaPlayer::durationChanged,this, &MainWindow::durationChanged);
    connect(mediaPlayer,&QMediaPlayer::positionChanged,this, &MainWindow::positionChanged);



    ui->sliderMusic->setRange(0,mediaPlayer->duration() / 1000);

    loadSongsIntoGroupBox();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sliderVolume_valueChanged(int value)
{
    qDebug() << "Volume Slider Value:" << value;
    audioOutput->setVolume(value / 100.0);
}


void MainWindow::on_sliderMusic_valueChanged(int value)
{
    mediaPlayer->setPosition(value * 1000);
}



void MainWindow::updateduration(qint64 duration)
{
    QString timestr;
    if(duration || Mduration){
        QTime CurrentTime((duration / 3600) % 60,(duration / 60) % 60,duration % 60,(duration * 1000) % 1000);
        QTime totalTime((Mduration/ 3600) % 60,(Mduration / 60) % 60,Mduration % 60,(Mduration * 1000) % 1000);

        QString format = "mm:ss";
        if(Mduration>3000)
            format = "hh:mm:ss";
        ui->time_curr->setText(CurrentTime.toString(format));
        ui->time_full->setText(totalTime.toString(format));
    }
}


void MainWindow::durationChanged(qint64 duration)
{
    Mduration = duration / 1000;
    ui->sliderMusic->setMaximum(Mduration);
}

void MainWindow::positionChanged(qint64 progress)
{
    if(!ui->sliderMusic->isSliderDown())
    {
        ui->sliderMusic->setValue(progress / 1000);
    }
    updateduration(progress / 1000);
}

void MainWindow::setUserEmail(const QString &email)
{
    m_userEmail = email;
}

QString MainWindow::userEmail() const
{
    return m_userEmail;
}

void MainWindow::on_btn_play_pause_clicked()
{
    if (isPlaying) {
        mediaPlayer->pause();
        ui->btn_play_pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    } else {
        mediaPlayer->play();
        ui->btn_play_pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    }
    isPlaying = !isPlaying;
}


void MainWindow::on_btn_next_clicked()
{
    if (songList.isEmpty()) return;

    // Обчислити індекс наступної пісні
    currentSongIndex = (currentSongIndex + 1) % songList.size();
    QString nextSongTitle = songList[currentSongIndex];

    // Знайти пісню за заголовком
    QString filePath = QDir::tempPath() + "/YareMusic/" + nextSongTitle + ".mp3";
    QFile file(filePath);

    if (file.exists()) {
        mediaPlayer->setSource(QUrl::fromLocalFile(filePath));
        mediaPlayer->play();
        ui->lbl_nameSound->setText(nextSongTitle);
        ui->lbl_nameSound->setStyleSheet("color: white;");
    } else {
        qWarning() << "File not found:" << filePath;
    }
}


void MainWindow::on_btn_preview_clicked()
{
    if (songList.isEmpty()) return;

    // Обчислити індекс попередньої пісні
    currentSongIndex = (currentSongIndex - 1 + songList.size()) % songList.size();
    QString prevSongTitle = songList[currentSongIndex];

    // Знайти пісню за заголовком
    QString filePath = QDir::tempPath() + "/YareMusic/" + prevSongTitle + ".mp3";
    QFile file(filePath);

    if (file.exists()) {
        mediaPlayer->setSource(QUrl::fromLocalFile(filePath));
        mediaPlayer->play();
        ui->lbl_nameSound->setText(prevSongTitle);
        ui->lbl_nameSound->setStyleSheet("color: white;");
    } else {
        qWarning() << "File not found:" << filePath;
    }
}


void MainWindow::on_btn_close_clicked()
{
    mediaPlayer->stop();
    this->close();
}


void MainWindow::on_btn_addFav_clicked()
{

}


void MainWindow::on_btn_volume_clicked()
{
    if(!is_muted){
         ui->btn_volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
        is_muted = true;
        audioOutput->setMuted(true);
    }
    else{
        ui->btn_volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
        is_muted = false;
        audioOutput->setMuted(false);
    }
}


void MainWindow::on_butt_InfoUser_clicked()
{
    QString userName = userEmail(); // Отримати ім'я користувача
    QString toolTipText = QString("<font color='white'>Hello, %1!</font>").arg(userName);
    QToolTip::showText(QCursor::pos(), toolTipText, ui->butt_InfoUser);
}


void MainWindow::on_btn_thame_clicked(bool checked)
{
    if(!checked){
        //black
        ui->time_curr->setStyleSheet("color:white; border:none");
        ui->time_full->setStyleSheet("color:white; border:none");
        ui->widget->setStyleSheet("background-color: #353538; border: 1px solid white; border-radius: 15px;");
        ui->btn_thame->setStyleSheet("color: white; border-radius: 10px; border: 1px solid white;");
        ui->butt_InfoUser->setStyleSheet("background-color: black;");

        ui->sliderMusic->setStyleSheet(
            "QSlider::handle:horizontal {"
            "background: #777778;"
            "width: 3px;"
            "height: 3px;"
            "border-radius: 15px;"
            "}"
            "QSlider{"
            "border:none;"
            "}"
            "QSlider::groove:horizontal{"
            "height: 5px;"
            "background: white;"
            "border-radius:20px;"
            "}"
            );
        ui->sliderVolume->setStyleSheet(
            "QSlider{"
            "border:none;"
            "}"
            "QSlider::groove:horizontal{"
            "height: 5px;"
            "background: white;"
            "border-radius:15px;"
            "}"
            "QSlider::handle:horizontal{"
            "background:#777778;"
            "width:9px;"
            "height: 5px;"
            "border-radius:15px;"
            "}");
        ui->btn_play_pause->setStyleSheet(
            "QPushButton:hover{"
            "background:white;"
            "color:white;"
            "}"
            );
        ui->btn_next->setStyleSheet(
            "QPushButton:hover{"
            "background:white;"
            "color:white;"
            "}"
            );

        ui->btn_preview->setStyleSheet(
            "QPushButton:hover{"
            "background:white;"
            "color:white;"
            "}"
            );
        ui->lbl_nameSound->setStyleSheet(
       "QLabel{"
        "border:none;"
        "border:1px solid white;"
        "border-radius:5px;"
            "color:white;"
        "}"
        );
    }else{
        //white
        ui->time_curr->setStyleSheet("color:black; border:none");
        ui->time_full->setStyleSheet("color:black; border:none");
        ui->widget->setStyleSheet("background-color: white; border-radius: 15px; border: 1px solid #353538;");
        ui->btn_thame->setStyleSheet("color: black; border-radius: 10px; border: 1px solid #353538;");
        ui->butt_InfoUser->setStyleSheet("background-color: black;");
        ui->sliderMusic->setStyleSheet(
            "QSlider::handle:horizontal {"
            "background: red;"
            "width: 3px;"
            "height: 3px;"
            "border-radius: 15px;"
            "}"
            "QSlider{"
            "border:none;"
            "}"
            "QSlider::groove:horizontal{"
            "height: 5px;"
            "background: black;"
            "border-radius:20px;"
            "}"
            );
        ui->sliderVolume->setStyleSheet(
            "QSlider{"
            "border:none;"
            "}"
            "QSlider::groove:horizontal{"
            "height: 5px;"
            "background: black;"
            "border-radius:15px;"
            "}"
            "QSlider::handle:horizontal{"
            "background:red;"
            "width:9px;"
            "height: 5px;"
            "border-radius:15px;"
            "}");
        ui->btn_play_pause->setStyleSheet(
            "QPushButton:hover{"
            "background:red;"
            "}"
            );
        ui->btn_next->setStyleSheet(
            "QPushButton:hover{"
            "background:red;"
            "}"
            );

        ui->btn_preview->setStyleSheet(
            "QPushButton:hover{"
            "background:red;"
            "}"
            );
        ui->lbl_nameSound->setStyleSheet(
            "QLabel{"
            "border:none;"
            "border:1px solid black;"
            "border-radius:5px;"
            "}"
            );
        //darkThame = true;
    }
}



void MainWindow::loadSongsIntoGroupBox()
{
    // Перевірка та отримання з'єднання
    QSqlDatabase db = QSqlDatabase::database("qt_sql_connection", false);
    if (!db.isValid()) {
        db = QSqlDatabase::addDatabase("QODBC", "qt_sql_connection");
        db.setDatabaseName("DRIVER={ODBC Driver 17 for SQL Server};SERVER=localhost\\SQLEXPRESS;DATABASE=YareMusic;Trusted_Connection=yes;");
        if (!db.open()) {
            qWarning() << "Cannot open database:" << db.lastError().text();
            return;
        }
    }

    // Створення запиту
    QSqlQuery query(db);
    if (!query.exec("SELECT music_name, content FROM tableMusic")) {
        qWarning() << "Failed to execute query:" << query.lastError().text();
        return;
    }

    // Очистка старих віджетів
    QVBoxLayout* oldLayout = qobject_cast<QVBoxLayout*>(ui->groupBox->layout());
    if (oldLayout) {
        QLayoutItem* item;
        while ((item = oldLayout->takeAt(0))) {
            delete item->widget();
            delete item;
        }
        delete oldLayout;
    }

    // Створення нового макету
    QVBoxLayout* layout = new QVBoxLayout();
    layout->setSpacing(15);

    // Директорія для зберігання тимчасових файлів
    QString tempDir = QDir::tempPath() + "/YareMusic/";
    QDir().mkpath(tempDir); // Створення директорії, якщо її немає

    songList.clear(); // Очистити попередні пісні
    currentSongIndex = -1; // Ініціалізувати індекс

    while (query.next()) {
        QString title = query.value(0).toString();
        QByteArray content = query.value(1).toByteArray();

        // Додавання пісні у вектор
        songList.append(title);

        // Додавання нових віджетів
        QString filePath = tempDir + title + ".mp3"; // Можна використовувати розширення файлу відповідно до формату
        QFile file(filePath);
        if (file.open(QIODevice::WriteOnly)) {
            file.write(content);
            file.close();
        } else {
            qWarning() << "Failed to write temporary file:" << file.errorString();
            continue;
        }

        QTextEdit* textEdit = new QTextEdit();
        textEdit->setText(title);
        textEdit->setReadOnly(true);
        textEdit->setStyleSheet("QTextEdit { color: white; background-color: #c0c0c2; border: none; padding: 3px; max-height: 30px; border-radius:5px;}" );


        textEdit->setAlignment(Qt::AlignLeft | Qt::AlignTop);

        // Налаштування сигналу натискання на текстовий блок
        connect(textEdit, &QTextEdit::cursorPositionChanged, [=]() {
            QTemporaryFile* tempFile = new QTemporaryFile(this);
            if (!tempFile->open()) {
                qWarning() << "Failed to create temporary file:" << tempFile->errorString();
                return;
            }

            tempFile->write(content);
            tempFile->flush();
            QString filePath = tempFile->fileName();

            mediaPlayer->setSource(QUrl::fromLocalFile(filePath));
            mediaPlayer->play();
            ui->btn_play_pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));

            ui->lbl_nameSound->setText(title);
            ui->lbl_nameSound->setStyleSheet("color: white;");

            connect(tempFile, &QTemporaryFile::destroyed, [=]() {
                mediaPlayer->stop();
            });
        });

        layout->addWidget(textEdit);
    }

    ui->groupBox->setLayout(layout);
}

