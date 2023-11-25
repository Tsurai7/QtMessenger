// databaseManager.h
#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include "user.h"

class DatabaseManager
{
public:
    DatabaseManager();
    ~DatabaseManager();

    bool CreateTable();
    void close();

    bool addUser(const QString& username, const QString& password);
    bool getUserByUsername(const QString &username, User &user);

private:
    QSqlDatabase database;
};

#endif // DATABASEMANAGER_H
