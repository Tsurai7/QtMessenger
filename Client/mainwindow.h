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

public slots:
    void handleUserRegistration(User user);

private:
    Ui::MainWindow *ui;
    AuthWindow *authWindow;
    QTcpSocket *socket;
    User *appUser;
    QByteArray Data;
};
#endif // MAINWINDOW_H
