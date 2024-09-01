#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QWidget>
#include <QFileDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

namespace Ui {
class adminWindow;
}

class adminWindow : public QWidget
{
    Q_OBJECT

public:
    explicit adminWindow(QWidget *parent = nullptr);
    ~adminWindow();

private slots:


    void on_buttonBrowse_clicked();

    void on_buttonClear_clicked();

    void on_buttonSave_clicked();

    void on_pushButton_clicked();

private:
    Ui::adminWindow *ui;
    QString filePath;  // Шлях до вибраного файлу
};

#endif // ADMINWINDOW_H
