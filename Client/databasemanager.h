// databaseManager.h
#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>

class DatabaseManager
{
public:
    DatabaseManager();
    ~DatabaseManager();

    bool open();
    void close();

    bool addUser(const QString& username, const QString& password);

private:
    QSqlDatabase database;
};

#endif // DATABASEMANAGER_H
