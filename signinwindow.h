#ifndef SIGNINWINDOW_H
#define SIGNINWINDOW_H

#include <QWidget>

namespace Ui {
class signinwindow;
}

class signinwindow : public QWidget
{
    Q_OBJECT

public:
    explicit signinwindow(QWidget *parent = nullptr);
    ~signinwindow();

private slots:
    void on_btn_close_clicked();

    void on_switchToLogIn_clicked();

    void on_butt_Confirm_clicked();

private:
    Ui::signinwindow *ui;
};

#endif // SIGNINWINDOW_H
