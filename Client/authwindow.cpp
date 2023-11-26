#include "authwindow.h"
#include "ui_authwindow.h"

#include <QMessageBox>

AuthWindow::AuthWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AuthWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_SignUp, &QPushButton::clicked, this, &AuthWindow::onSignUpButtonClicked);
    dbManager->CreateTable();
}

AuthWindow::~AuthWindow()
{
    delete ui;
    dbManager->close();
}

void AuthWindow::onSignUpButtonClicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();


    if (username.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, заполните все поля.");
        return;
    }


    if (password.length() < 6)
    {
        QMessageBox::warning(this, "Ошибка", "Пароль должен содержать не менее 6 символов.");
        return;
    }

    if (dbManager->addUser(username, password))
    {
        User user = User();
        dbManager->getUserByUsername(username, user);
        emit userRegistered(user);
        qDebug() << "Emitting userRegistered signal with user:" << user.getName();
        this->accept();
    }

    else
    {
        QMessageBox::critical(this, "Ошибка", "Не удалось добавить пользователя. Пожалуйста, попробуйте еще раз.");
    }
}


