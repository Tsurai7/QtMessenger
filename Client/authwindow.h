#ifndef AUTHWINDOW_H
#define AUTHWINDOW_H

#include <QDialog>
#include "databasemanager.h"
#include "user.h"


namespace Ui {
class AuthWindow;
}

class AuthWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AuthWindow(QWidget *parent = nullptr);
    ~AuthWindow();

signals:
    void userRegistered(const User &user);

private slots:
    void onSignUpButtonClicked();

private:
    Ui::AuthWindow *ui;
    DatabaseManager *dbManager = new DatabaseManager();
};

#endif // AUTHWINDOW_H
