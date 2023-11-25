// user.cpp
#include "user.h"

User::User(int id, const QString& name, const QString& password,
           const QDateTime& createdAt, const QDateTime& updatedAt)
    : Id(id), Name(name), Password(password),
    CreatedAt(createdAt), UpdatedAt(updatedAt)
{
}

qint64 User::getId() const
{
    return Id;
}

QString User::getName() const
{
    return Name;
}

QString User::getPassword() const
{
    return Password;
}

QDateTime User::getRegistrationDate() const
{
    return CreatedAt;
}

QDateTime User::getModificationDate() const
{
    return UpdatedAt;
}


void User::setName(const QString& name)
{
    Name = name;
}

void User::setPassword(const QString& password)
{
    Password = password;
}

void User::setRegistrationDate(const QDateTime& createdAt)
{
    CreatedAt = createdAt;
}

void User::setModificationDate(const QDateTime& updatedAt)
{
    UpdatedAt = updatedAt;
}
