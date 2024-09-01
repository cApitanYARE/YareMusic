/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *widget;
    QLabel *lbl_Login;
    QLineEdit *lbl_email;
    QLineEdit *lbl_password;
    QPushButton *butt_Confirm;
    QPushButton *switchToSignIn;
    QLabel *label;
    QPushButton *btn_close;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(367, 472);
        LoginWindow->setBaseSize(QSize(0, 0));
        QFont font;
        font.setHintingPreference(QFont::PreferDefaultHinting);
        LoginWindow->setFont(font);
        LoginWindow->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        LoginWindow->setWindowOpacity(0.950000000000000);
        LoginWindow->setAutoFillBackground(false);
        LoginWindow->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(LoginWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 40, 300, 400));
        widget->setStyleSheet(QString::fromUtf8("\n"
"background-color: #353538;\n"
"border: none;\n"
"border-radius: 15px;\n"
"border: 1px solid white;\n"
""));
        lbl_Login = new QLabel(widget);
        lbl_Login->setObjectName("lbl_Login");
        lbl_Login->setGeometry(QRect(20, 60, 261, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cascadia Code SemiBold")});
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setHintingPreference(QFont::PreferDefaultHinting);
        lbl_Login->setFont(font1);
        lbl_Login->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        lbl_Login->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: white;"));
        lbl_Login->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl_email = new QLineEdit(widget);
        lbl_email->setObjectName("lbl_email");
        lbl_email->setGeometry(QRect(50, 130, 201, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cascadia Mono SemiBold")});
        font2.setPointSize(10);
        font2.setHintingPreference(QFont::PreferDefaultHinting);
        lbl_email->setFont(font2);
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
        lbl_password->setGeometry(QRect(50, 180, 201, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cascadia Mono SemiBold")});
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setHintingPreference(QFont::PreferDefaultHinting);
        lbl_password->setFont(font3);
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
        butt_Confirm->setGeometry(QRect(100, 240, 91, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Cascadia Mono SemiBold")});
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setHintingPreference(QFont::PreferDefaultHinting);
        butt_Confirm->setFont(font4);
        butt_Confirm->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        butt_Confirm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #747a80;\n"
"border: none;\n"
"border-bottom: 2px solid white;\n"
"border-radius: 2px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border-bottom-color: #747a80;\n"
"margin: 3px 0 0 0;\n"
"color: white;\n"
" \n"
"}"));
        switchToSignIn = new QPushButton(widget);
        switchToSignIn->setObjectName("switchToSignIn");
        switchToSignIn->setGeometry(QRect(230, 360, 51, 20));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Cascadia Code SemiBold")});
        font5.setBold(true);
        font5.setHintingPreference(QFont::PreferDefaultHinting);
        switchToSignIn->setFont(font5);
        switchToSignIn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        switchToSignIn->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        switchToSignIn->setAutoFillBackground(false);
        switchToSignIn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border:none;\n"
"color:#c8c8cc;\n"
"}\n"
"QPushButton:hover{\n"
"border:none;\n"
"color:#ededf0;\n"
"padding: 0 0 2px 0;\n"
"}\n"
"\n"
""));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 360, 161, 20));
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:white;"));
        btn_close = new QPushButton(widget);
        btn_close->setObjectName("btn_close");
        btn_close->setGeometry(QRect(250, 20, 31, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial Black")});
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setHintingPreference(QFont::PreferDefaultHinting);
        btn_close->setFont(font6);
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

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Log in", nullptr));
        lbl_Login->setText(QCoreApplication::translate("LoginWindow", "Log in", nullptr));
        lbl_email->setText(QString());
        lbl_email->setPlaceholderText(QCoreApplication::translate("LoginWindow", "User Email", nullptr));
        lbl_password->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        butt_Confirm->setText(QCoreApplication::translate("LoginWindow", "Confirm", nullptr));
        switchToSignIn->setText(QCoreApplication::translate("LoginWindow", "Sign in", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "don't have an account?:", nullptr));
        btn_close->setText(QCoreApplication::translate("LoginWindow", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
