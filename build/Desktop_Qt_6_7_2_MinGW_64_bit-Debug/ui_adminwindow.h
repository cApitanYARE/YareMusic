/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminWindow
{
public:
    QWidget *widget;
    QLabel *label;
    QTextEdit *lineEditFilePath;
    QPushButton *buttonClear;
    QPushButton *buttonBrowse;
    QPushButton *buttonSave;
    QPushButton *pushButton;

    void setupUi(QWidget *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName("adminWindow");
        adminWindow->resize(593, 271);
        widget = new QWidget(adminWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 40, 481, 200));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: #353538;\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 71, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        lineEditFilePath = new QTextEdit(widget);
        lineEditFilePath->setObjectName("lineEditFilePath");
        lineEditFilePath->setGeometry(QRect(110, 70, 341, 31));
        lineEditFilePath->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background:white;\n"
"}"));
        buttonClear = new QPushButton(widget);
        buttonClear->setObjectName("buttonClear");
        buttonClear->setGeometry(QRect(110, 110, 80, 24));
        buttonClear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:black;\n"
"background:white;\n"
"}"));
        buttonBrowse = new QPushButton(widget);
        buttonBrowse->setObjectName("buttonBrowse");
        buttonBrowse->setGeometry(QRect(200, 110, 80, 24));
        buttonBrowse->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:black;\n"
"background:white;\n"
"}"));
        buttonSave = new QPushButton(widget);
        buttonSave->setObjectName("buttonSave");
        buttonSave->setGeometry(QRect(370, 110, 80, 24));
        buttonSave->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:black;\n"
"background:white;\n"
"}"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 10, 25, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#e0162e;\n"
"color:white;\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#f24b4b;\n"
"}\n"
""));

        retranslateUi(adminWindow);

        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QWidget *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("adminWindow", "File Location:", nullptr));
        buttonClear->setText(QCoreApplication::translate("adminWindow", "Cancel", nullptr));
        buttonBrowse->setText(QCoreApplication::translate("adminWindow", "Open", nullptr));
        buttonSave->setText(QCoreApplication::translate("adminWindow", "Save", nullptr));
        pushButton->setText(QCoreApplication::translate("adminWindow", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
