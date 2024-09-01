

#include "mainwindow.h"
#include "signinwindow.h"
#include "loginwindow.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

#include "ui_loginwindow.h"



LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_btn_close_clicked()
{
    this->close();
}

void LoginWindow::on_switchToSignIn_clicked()
{
    this->close();    // Сховати вікно входу

    signinwindow *signin = new signinwindow(this);  // Створити нове вікно входу
    signin->setWindowFlags(Qt::FramelessWindowHint | Qt::Window);
    signin->setAttribute(Qt::WA_TranslucentBackground);
    signin->show();  // Показати нове вікно входу
}

void LoginWindow::on_butt_Confirm_clicked()
{
    QString  email = ui->lbl_email->text();
    QString  password = ui->lbl_password->text();

    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE email = :email AND password = :password");
    query.bindValue(":email", email);
    query.bindValue(":password", password);



    if (!query.exec()) {
        qDebug() << "Query failed:" << query.lastError().text();
        return;
    }

    if(query.next()){
        this->close();

        MainWindow *MainW =  new MainWindow(this);
        MainW->setUserEmail(email); // Передати email
        MainW->setWindowFlags(Qt::FramelessWindowHint | Qt::Window);
        MainW->setAttribute(Qt::WA_TranslucentBackground);

        MainW->show();  // Показати нове вікно входу
    }else{
          QMessageBox::warning(this, "Login Error", "Incorrect email or password.");
    }



}

