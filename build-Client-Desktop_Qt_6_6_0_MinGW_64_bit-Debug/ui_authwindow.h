/********************************************************************************
** Form generated from reading UI file 'authwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHWINDOW_H
#define UI_AUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthWindow
{
public:
    QPushButton *pushButton_SignUp;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Username;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Password;
    QLineEdit *lineEdit_Password;

    void setupUi(QDialog *AuthWindow)
    {
        if (AuthWindow->objectName().isEmpty())
            AuthWindow->setObjectName("AuthWindow");
        AuthWindow->resize(400, 300);
        pushButton_SignUp = new QPushButton(AuthWindow);
        pushButton_SignUp->setObjectName("pushButton_SignUp");
        pushButton_SignUp->setGeometry(QRect(150, 200, 101, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Lucida Fax")});
        font.setPointSize(16);
        pushButton_SignUp->setFont(font);
        widget = new QWidget(AuthWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 40, 281, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_Username = new QLabel(widget);
        label_Username->setObjectName("label_Username");
        label_Username->setFont(font);

        horizontalLayout->addWidget(label_Username);

        lineEdit_Username = new QLineEdit(widget);
        lineEdit_Username->setObjectName("lineEdit_Username");

        horizontalLayout->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_Password = new QLabel(widget);
        label_Password->setObjectName("label_Password");
        label_Password->setFont(font);

        horizontalLayout_2->addWidget(label_Password);

        lineEdit_Password = new QLineEdit(widget);
        lineEdit_Password->setObjectName("lineEdit_Password");

        horizontalLayout_2->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(AuthWindow);

        QMetaObject::connectSlotsByName(AuthWindow);
    } // setupUi

    void retranslateUi(QDialog *AuthWindow)
    {
        AuthWindow->setWindowTitle(QCoreApplication::translate("AuthWindow", "Dialog", nullptr));
        pushButton_SignUp->setText(QCoreApplication::translate("AuthWindow", "Sign Up", nullptr));
        label_Username->setText(QCoreApplication::translate("AuthWindow", "Username", nullptr));
        label_Password->setText(QCoreApplication::translate("AuthWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthWindow: public Ui_AuthWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
