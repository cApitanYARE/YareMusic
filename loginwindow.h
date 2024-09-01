#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include <signinwindow.h>
#include <QDebug>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();


private slots:
    void on_btn_close_clicked();
    void on_switchToSignIn_clicked();
    void on_butt_Confirm_clicked();

private:
    Ui::LoginWindow *ui;

};

#endif // LOGINWINDOW_H
