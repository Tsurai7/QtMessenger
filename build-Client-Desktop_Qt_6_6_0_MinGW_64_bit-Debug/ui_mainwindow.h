/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListView *listView_Chat;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_Message;
    QPushButton *pushButton_Send;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_Address;
    QPushButton *pushButton_Connect;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 587);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(320, 21, 561, 521));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listView_Chat = new QListView(widget);
        listView_Chat->setObjectName("listView_Chat");

        verticalLayout->addWidget(listView_Chat);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_Message = new QLineEdit(widget);
        lineEdit_Message->setObjectName("lineEdit_Message");

        horizontalLayout->addWidget(lineEdit_Message);

        pushButton_Send = new QPushButton(widget);
        pushButton_Send->setObjectName("pushButton_Send");

        horizontalLayout->addWidget(pushButton_Send);


        verticalLayout->addLayout(horizontalLayout);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 0, 301, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_Address = new QLineEdit(widget1);
        lineEdit_Address->setObjectName("lineEdit_Address");

        horizontalLayout_2->addWidget(lineEdit_Address);

        pushButton_Connect = new QPushButton(widget1);
        pushButton_Connect->setObjectName("pushButton_Connect");

        horizontalLayout_2->addWidget(pushButton_Connect);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 21));
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
        pushButton_Send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
