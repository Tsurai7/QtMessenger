#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include "authwindow.h"
#include <user.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void OnReadyRead();
    void handleUserRegistration(const User& user);
    void on_pushButton_Connect_clicked();


    void on_pushButton_Send_clicked();

    void on_lineEdit_Message_returnPressed();

private:
    Ui::MainWindow *ui;
    AuthWindow *authWindow;
    QTcpSocket *socket;
    User appUser;
    QByteArray Data;

    void SendToServer(QString str);
};
#endif // MAINWINDOW_H
