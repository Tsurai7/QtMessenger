#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "authwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    authWindow = new AuthWindow(this);
    authWindow->show();
    authWindow->setModal(true);

    socket = new QTcpSocket(this);

    connect(authWindow, &AuthWindow::userRegistered, this, &MainWindow::handleUserRegistration);
    connect(socket, &QTcpSocket::readyRead, this, &MainWindow::OnReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OnReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_6);

    if(in.status() == QDataStream::Ok)
    {
        QString str;
        in >> str;
        ui->textBrowser->append(str);
    }
    else
    {
        ui->textBrowser->append("Error");
    }
}

void MainWindow::handleUserRegistration(const User& user)
{
    appUser = user;
    ui->label_Username->setText(appUser.getName());
}


void MainWindow::on_pushButton_Connect_clicked()
{
    socket->connectToHost("127.0.0.1", 8080);
}

void MainWindow::SendToServer(QString str)
{
    Data.clear();

    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_6);

    out << str;
    socket->write(Data);
}


void MainWindow::on_pushButton_Send_clicked()
{
    SendToServer(ui->lineEdit_Message->text());
}


void MainWindow::on_lineEdit_Message_returnPressed()
{
    SendToServer(ui->lineEdit_Message->text());
}

