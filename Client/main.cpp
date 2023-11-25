#include "mainwindow.h"
#include "authwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow mainWindow;
    mainWindow.show();

    AuthWindow authWindow;
    authWindow.show();
    authWindow.setModal(true);

    return a.exec();
}
