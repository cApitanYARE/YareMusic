
#include <QMessageBox>
#include "mainwindow.h"
#include "signinwindow.h"
#include "loginwindow.h"
#include "ui_signinwindow.h"
#include <QSqlQuery>
#include <QSqlError>

signinwindow::signinwindow(QWidget *parent):
    QWidget(parent),
    ui(new Ui::signinwindow)
{
    ui->setupUi(this);

}

signinwindow::~signinwindow()
{
    delete ui;
}

void signinwindow::on_btn_close_clicked()
{
    this->close();
}


void signinwindow::on_switchToLogIn_clicked()
{

    this->close();    // Сховати вікно входу

    LoginWindow *LogIn = new LoginWindow(this);  // Створити нове вікно входу
    LogIn->setWindowFlags(Qt::FramelessWindowHint | Qt::Window);
    LogIn->setAttribute(Qt::WA_TranslucentBackground);

    LogIn->show();  // Показати нове вікно входу

}


void signinwindow::on_butt_Confirm_clicked()
{
    std::string Email = ui->lbl_email->text().toStdString();
    std::string Password = ui->lbl_password->text().toStdString();
    std::string confirm_Password = ui->lbl_conf_password->text().toStdString();

     if(Password != confirm_Password){
          QMessageBox::warning(this, "Error", "The password isn't same.");
         return;
     }

    QSqlQuery query;

     if(Email.length() == 0){
         QMessageBox::warning(this, "Error", "Email field can't be empty");
         return;
     }

     // Перевірка, чи вже існує користувач з таким email
     query.prepare("SELECT COUNT(*) FROM Users WHERE email = :email");
     query.bindValue(":email", QString::fromStdString(Email));

     if (!query.exec()) {
         qDebug() << "Select failed:" << query.lastError();
         return;
     }

     query.next();


    int userCount = query.value(0).toInt();

     if (userCount > 0) {
         QMessageBox::warning(this, "Error", "Користувач з такою електронною адресою вже існує.");
         return;
     }

     query.prepare("INSERT INTO Users (email, password) VALUES (:email, :password)");
     query.bindValue(":email", QString::fromStdString(Email));
     query.bindValue(":password", QString::fromStdString(Password));


     if (!query.exec()) {
         qDebug() << "Insert failed:" << query.lastError();
     } else {
         qDebug() << "Insert successful";
         QMessageBox::information(this,"Успіх","Користувача зареєстровано.");

        this->close();

        MainWindow *MainW =  new MainWindow(this);
         MainW->setUserEmail(QString::fromStdString(Email)); //
        MainW->setWindowFlags(Qt::FramelessWindowHint | Qt::Window);
        MainW->setAttribute(Qt::WA_TranslucentBackground);

        MainW->show();  // Показати нове вікно входу
     }

}

