#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QFile>
#include <QFileInfo>


adminWindow::adminWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminWindow)
{
    ui->setupUi(this);
}

adminWindow::~adminWindow()
{
    delete ui;
}


void adminWindow::on_buttonBrowse_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFiles);
    dialog.setViewMode(QFileDialog::List);
    if (dialog.exec()) {
        QStringList files = dialog.selectedFiles();
        if (!files.isEmpty()) {
            filePath = files.first();
            ui->lineEditFilePath->setText(filePath);
        }
    }
}

void adminWindow::on_buttonClear_clicked()
{
    filePath.clear();
    ui->lineEditFilePath->clear();
}


void adminWindow::on_buttonSave_clicked()
{
    if (filePath.isEmpty()) {
        QMessageBox::warning(this, "Попередження", "Файл не вибрано.");
        return;
    }

    QFile file(filePath);
    if (!file.exists() || !file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Попередження", "Не вдалося відкрити файл.");
        return;
    }

    QByteArray fileData = file.readAll();
    file.close();

    QFileInfo fileInfo(filePath);
    QString filename = fileInfo.fileName();

    // Видалити попереднє з'єднання, якщо воно існує
    QSqlDatabase db = QSqlDatabase::database("qt_sql_default_connection", false);
    if (db.isOpen()) {
        db.close();
    }
    QSqlDatabase::removeDatabase("qt_sql_default_connection");

    // Створити нове з'єднання
    db = QSqlDatabase::addDatabase("QODBC", "qt_sql_default_connection");
    db.setDatabaseName("DRIVER={ODBC Driver 17 for SQL Server};SERVER=localhost\\SQLEXPRESS;DATABASE=YareMusic;Trusted_Connection=yes;");

    if (!db.open()) {
        QMessageBox::critical(this, "Помилка", "Не вдалося підключитися до бази даних.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO tableMusic (music_name, [content]) VALUES (:file_name, :file)");
    query.bindValue(":file_name", filename);
    query.bindValue(":file", fileData);

    if (!query.exec()) {
        QMessageBox::critical(this, "Помилка", "Не вдалося зберегти файл у базі даних:\n" + query.lastError().text());
        return;
    }

    QMessageBox::information(this, "Успіх", "Файл успішно збережено.");
    ui->lineEditFilePath->clear();
    filePath.clear();
    db.close();
}




void adminWindow::on_pushButton_clicked()
{
    this->close();
}

