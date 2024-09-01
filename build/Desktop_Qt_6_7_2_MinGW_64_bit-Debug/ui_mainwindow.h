/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *btn_close;
    QPushButton *btn_preview;
    QPushButton *btn_play_pause;
    QPushButton *btn_next;
    QGroupBox *groupBox;
    QLabel *img_lbl;
    QLabel *time_curr;
    QLabel *time_full;
    QLabel *lbl_nameSound;
    QSlider *sliderMusic;
    QPushButton *btn_volume;
    QSlider *sliderVolume;
    QPushButton *btn_thame;
    QPushButton *butt_InfoUser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 50, 730, 500));
        QFont font;
        font.setPointSize(15);
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: #353538;\n"
"border: none;\n"
"border-radius: 15px;\n"
"border: 1px solid white;\n"
"}"));
        btn_close = new QPushButton(widget);
        btn_close->setObjectName("btn_close");
        btn_close->setGeometry(QRect(680, 20, 31, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setHintingPreference(QFont::PreferDefaultHinting);
        btn_close->setFont(font1);
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
        btn_preview = new QPushButton(widget);
        btn_preview->setObjectName("btn_preview");
        btn_preview->setGeometry(QRect(290, 430, 41, 41));
        btn_preview->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_preview->setStyleSheet(QString::fromUtf8("  QPushButton:hover{\n"
"           background:white;\n"
"            }"));
        btn_preview->setIconSize(QSize(24, 24));
        btn_play_pause = new QPushButton(widget);
        btn_play_pause->setObjectName("btn_play_pause");
        btn_play_pause->setGeometry(QRect(340, 430, 41, 41));
        QFont font2;
        font2.setPointSize(30);
        btn_play_pause->setFont(font2);
        btn_play_pause->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_play_pause->setStyleSheet(QString::fromUtf8("  QPushButton:hover{\n"
"           background:white;\n"
"            }"));
        btn_play_pause->setIconSize(QSize(24, 24));
        btn_next = new QPushButton(widget);
        btn_next->setObjectName("btn_next");
        btn_next->setGeometry(QRect(390, 430, 41, 41));
        btn_next->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_next->setStyleSheet(QString::fromUtf8("  QPushButton:hover{\n"
"           background:white;\n"
"            }"));
        btn_next->setIconSize(QSize(24, 24));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 30, 261, 381));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        img_lbl = new QLabel(widget);
        img_lbl->setObjectName("img_lbl");
        img_lbl->setGeometry(QRect(440, 80, 180, 180));
        time_curr = new QLabel(widget);
        time_curr->setObjectName("time_curr");
        time_curr->setGeometry(QRect(360, 370, 31, 16));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        time_curr->setFont(font3);
        time_curr->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border:none;\n"
"color:white;\n"
"}"));
        time_full = new QLabel(widget);
        time_full->setObjectName("time_full");
        time_full->setGeometry(QRect(670, 370, 31, 16));
        time_full->setFont(font3);
        time_full->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border:none;\n"
"color:white;\n"
"}"));
        lbl_nameSound = new QLabel(widget);
        lbl_nameSound->setObjectName("lbl_nameSound");
        lbl_nameSound->setGeometry(QRect(360, 280, 341, 20));
        lbl_nameSound->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    border:none;\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"	color:white;\n"
"}"));
        sliderMusic = new QSlider(widget);
        sliderMusic->setObjectName("sliderMusic");
        sliderMusic->setGeometry(QRect(400, 370, 261, 21));
        sliderMusic->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sliderMusic->setStyleSheet(QString::fromUtf8("QSlider{\n"
"border:none;\n"
"}\n"
"QSlider::groove:horizontal{\n"
"height: 5px;\n"
"background: white;\n"
"border-radius:20px;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"background:#777778;\n"
"width:3px;\n"
"height: 3px;\n"
"border-radius:15px;\n"
"}"));
        sliderMusic->setOrientation(Qt::Orientation::Horizontal);
        btn_volume = new QPushButton(widget);
        btn_volume->setObjectName("btn_volume");
        btn_volume->setGeometry(QRect(550, 435, 35, 35));
        btn_volume->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_volume->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"color: #b8b8ba;\n"
"border-color:#b8b8ba;\n"
"}"));
        btn_volume->setIconSize(QSize(24, 24));
        sliderVolume = new QSlider(widget);
        sliderVolume->setObjectName("sliderVolume");
        sliderVolume->setGeometry(QRect(590, 445, 111, 16));
        sliderVolume->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sliderVolume->setStyleSheet(QString::fromUtf8("QSlider{\n"
"border:none;\n"
"}\n"
"QSlider::groove:horizontal{\n"
"height: 5px;\n"
"background: white;\n"
"border-radius:15px;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"background:#777778;\n"
"width:9px;\n"
"height: 5px;\n"
"border-radius:15px;\n"
"}"));
        sliderVolume->setOrientation(Qt::Orientation::Horizontal);
        btn_thame = new QPushButton(widget);
        btn_thame->setObjectName("btn_thame");
        btn_thame->setGeometry(QRect(20, 80, 31, 31));
        QFont font4;
        font4.setPointSize(12);
        btn_thame->setFont(font4);
        btn_thame->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_thame->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"border: 1px solid white;\n"
"border-radius:10px;\n"
"color:white;\n"
"background:black;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #353538;\n"
"}"));
        btn_thame->setCheckable(true);
        btn_thame->setChecked(false);
        butt_InfoUser = new QPushButton(widget);
        butt_InfoUser->setObjectName("butt_InfoUser");
        butt_InfoUser->setGeometry(QRect(20, 30, 31, 31));
        butt_InfoUser->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        butt_InfoUser->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"border: 1px solid white;\n"
"border-radius:10px;\n"
"background:white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #c2c4c0;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("build/Desktop_Qt_6_7_2_MinGW_64_bit-Debug/image/iconUser.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        butt_InfoUser->setIcon(icon);
        butt_InfoUser->setIconSize(QSize(20, 20));
        butt_InfoUser->setCheckable(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_close->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btn_preview->setText(QString());
        btn_play_pause->setText(QString());
        btn_next->setText(QString());
        groupBox->setTitle(QString());
        img_lbl->setText(QString());
        time_curr->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        time_full->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        lbl_nameSound->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_volume->setText(QString());
        btn_thame->setText(QCoreApplication::translate("MainWindow", "\342\230\200", nullptr));
        butt_InfoUser->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
