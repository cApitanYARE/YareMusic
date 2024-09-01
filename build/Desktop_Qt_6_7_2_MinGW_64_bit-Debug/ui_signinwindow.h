/********************************************************************************
** Form generated from reading UI file 'signinwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINWINDOW_H
#define UI_SIGNINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signinwindow
{
public:
    QWidget *widget;
    QLabel *lbl_Login;
    QLineEdit *lbl_email;
    QLineEdit *lbl_password;
    QPushButton *butt_Confirm;
    QPushButton *switchToLogIn;
    QLabel *label;
    QPushButton *btn_close;
    QLineEdit *lbl_conf_password;

    void setupUi(QWidget *signinwindow)
    {
        if (signinwindow->objectName().isEmpty())
            signinwindow->setObjectName("signinwindow");
        signinwindow->resize(328, 455);
        signinwindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        signinwindow->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(signinwindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 300, 400));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"background-color: #353538;\n"
"border: none;\n"
"border-radius: 15px;\n"
"border: 1px solid white;\n"
"}"));
        lbl_Login = new QLabel(widget);
        lbl_Login->setObjectName("lbl_Login");
        lbl_Login->setGeometry(QRect(20, 60, 261, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cascadia Code SemiBold")});
        font.setPointSize(25);
        font.setBold(true);
        font.setHintingPreference(QFont::PreferDefaultHinting);
        lbl_Login->setFont(font);
        lbl_Login->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        lbl_Login->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: white;"));
        lbl_Login->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl_email = new QLineEdit(widget);
        lbl_email->setObjectName("lbl_email");
        lbl_email->setGeometry(QRect(50, 130, 201, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cascadia Mono SemiBold")});
        font1.setPointSize(10);
        font1.setHintingPreference(QFont::PreferDefaultHinting);
        lbl_email->setFont(font1);
        lbl_email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: white;\n"
" border: none;\n"
"border-left: 2px solid white;\n"
"border-radius: 2px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"border-left: 2px solid #747a80;\n"
"}"));
        lbl_email->setCursorPosition(0);
        lbl_email->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lbl_password = new QLineEdit(widget);
        lbl_password->setObjectName("lbl_password");
        lbl_password->setGeometry(QRect(50, 170, 201, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cascadia Mono SemiBold")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setHintingPreference(QFont::PreferDefaultHinting);
        lbl_password->setFont(font2);
        lbl_password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: white;\n"
" border: none;\n"
"border-left: 2px solid white;\n"
"border-radius: 2px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"border-left: 2px solid #747a80;\n"
"}"));
        butt_Confirm = new QPushButton(widget);
        butt_Confirm->setObjectName("butt_Confirm");
        butt_Confirm->setGeometry(QRect(100, 270, 91, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cascadia Mono SemiBold")});
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setHintingPreference(QFont::PreferDefaultHinting);
        butt_Confirm->setFont(font3);
        butt_Confirm->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        butt_Confirm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #747a80;\n"
" border: none;\n"
"border-bottom: 2px solid white;\n"
"border-radius: 2px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border-bottom: 2px solid #747a80;\n"
"margin: 3px 0 0 0;\n"
"color:white;\n"
"}"));
        switchToLogIn = new QPushButton(widget);
        switchToLogIn->setObjectName("switchToLogIn");
        switchToLogIn->setGeometry(QRect(230, 360, 51, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Cascadia Code SemiBold")});
        font4.setBold(true);
        switchToLogIn->setFont(font4);
        switchToLogIn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        switchToLogIn->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        switchToLogIn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border:none;\n"
"color:#c8c8cc;\n"
"}\n"
"QPushButton:hover{\n"
"border:none;\n"
"color:#ededf0;\n"
"padding: 0 0 2px 0;\n"
"}\n"
""));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 360, 171, 20));
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:white;"));
        btn_close = new QPushButton(widget);
        btn_close->setObjectName("btn_close");
        btn_close->setGeometry(QRect(250, 20, 31, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial Black")});
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setHintingPreference(QFont::PreferDefaultHinting);
        btn_close->setFont(font5);
        btn_close->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#e0162e;\n"
"color:white;\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#f24b4b;\n"
"\n"
"}\n"
"\n"
"\n"
""));
        lbl_conf_password = new QLineEdit(widget);
        lbl_conf_password->setObjectName("lbl_conf_password");
        lbl_conf_password->setGeometry(QRect(50, 210, 201, 31));
        lbl_conf_password->setFont(font2);
        lbl_conf_password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: white;\n"
" border: none;\n"
"border-left: 2px solid white;\n"
"border-radius: 2px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"border-left: 2px solid #747a80;\n"
"}"));

        retranslateUi(signinwindow);

        QMetaObject::connectSlotsByName(signinwindow);
    } // setupUi

    void retranslateUi(QWidget *signinwindow)
    {
        signinwindow->setWindowTitle(QCoreApplication::translate("signinwindow", "Form", nullptr));
        lbl_Login->setText(QCoreApplication::translate("signinwindow", "Sign in", nullptr));
        lbl_email->setText(QString());
        lbl_email->setPlaceholderText(QCoreApplication::translate("signinwindow", "User Email", nullptr));
        lbl_password->setPlaceholderText(QCoreApplication::translate("signinwindow", "Password", nullptr));
        butt_Confirm->setText(QCoreApplication::translate("signinwindow", "Confirm", nullptr));
        switchToLogIn->setText(QCoreApplication::translate("signinwindow", "Log in", nullptr));
        label->setText(QCoreApplication::translate("signinwindow", "already have an account?:", nullptr));
        btn_close->setText(QCoreApplication::translate("signinwindow", "X", nullptr));
        lbl_conf_password->setPlaceholderText(QCoreApplication::translate("signinwindow", "Confirm password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signinwindow: public Ui_signinwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINWINDOW_H
