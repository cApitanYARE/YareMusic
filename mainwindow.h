#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QtMultimedia>
#include <QtCore>
#include <QtWidgets>

#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setUserEmail(const QString &email); // Метод для встановлення email
    QString userEmail() const; // Метод для отримання email

private slots:
    void on_btn_play_pause_clicked();
    void on_btn_next_clicked();
    void on_btn_preview_clicked();
    void on_btn_close_clicked();
    void on_btn_addFav_clicked();
    void on_btn_volume_clicked();
    void on_butt_InfoUser_clicked();
    void on_btn_thame_clicked(bool checked);


    void on_sliderVolume_valueChanged(int value);
    void on_sliderMusic_valueChanged(int value);

    void durationChanged(qint64 duration);
    void positionChanged(qint64 progress);

private:
    Ui::MainWindow *ui;
    QString m_userEmail;

    QMediaPlayer* mediaPlayer;
    QAudioOutput* audioOutput;

    bool is_muted = false;
    bool darkThame = true;
    bool isPlaying = false;

    void updateduration(qint64 duration);
    qint64 Mduration;

    void loadSongsIntoGroupBox();


    QVector<QString> songList;
    int currentSongIndex;


};
#endif // MAINWINDOW_H
