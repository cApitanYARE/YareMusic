#include <QApplication>
#include "mainwindow.h"
#include "loginwindow.h"
#include "signinwindow.h"
#include "adminwindow.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={ODBC Driver 17 for SQL Server};SERVER=localhost\\SQLEXPRESS;DATABASE=YareMusic;Trusted_Connection=yes;");

    if (!db.open()) {
        qDebug() << "Помилка з'єднання:" << db.lastError().text();
        return -1;
    }

    signinwindow signin;
    signin.setWindowFlags(Qt::FramelessWindowHint);
    signin.setAttribute(Qt::WA_TranslucentBackground);
    signin.show();

    return a.exec();
}

