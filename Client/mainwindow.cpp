#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "authwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(authWindow, &AuthWindow::userRegistered, this, &MainWindow::handleUserRegistration);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleUserRegistration(User user)
{
    appUser = &user;
    ui->label_Username->setText(appUser->getName());
    ui->label_Username->setText("sdfsfs");
}

