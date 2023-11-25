// databasemanager.cpp
#include "databasemanager.h"

#include <QDateTime>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

DatabaseManager::DatabaseManager()
{
}

bool DatabaseManager::open()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("Users.sqlite");

    if (!database.open()) {
        qDebug() << "Error: Unable to open database." << database.lastError();
        return false;
    }

    QSqlQuery createTableQuery;
    createTableQuery.prepare("CREATE TABLE IF NOT EXISTS users "
                             "(id INTEGER PRIMARY KEY AUTOINCREMENT, "
                             "username TEXT, "
                             "password TEXT, "
                             "createdAt DATETIME, "
                             "updatedAt DATETIME)");

    if (!createTableQuery.exec()) {
        qDebug() << "Error: Unable to create table." << createTableQuery.lastError();
        return false;
    }

    return true;
}

void DatabaseManager::close()
{
    database.close();
}

bool DatabaseManager::addUser(const QString &username, const QString &password)
{
    if (!database.isOpen()) {
        qDebug() << "Error: Database is not open.";
        return false;
    }

    QDateTime currentDateTime = QDateTime::currentDateTime();

    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password, createdAt, updatedAt) "
                  "VALUES (:username, :password, :createdAt, :updatedAt)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":createdAt", currentDateTime);
    query.bindValue(":updatedAt", currentDateTime);

    if (!query.exec()) {
        qDebug() << "Error: Unable to add user." << query.lastError();
        return false;
    }

    return true;
}
