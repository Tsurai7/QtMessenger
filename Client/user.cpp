#include "user.h"

User::User()
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

QDateTime User::getCreatedAt() const
{
    return CreatedAt;
}

QDateTime User::getUpdatedAt() const
{
    return UpdatedAt;
}


void User::setId(const qint64& id)
{
    Id = id;
}

void User::setName(const QString& name)
{
    Name = name;
}

void User::setPassword(const QString& password)
{
    Password = password;
}

void User::setCreatedAt(const QDateTime& createdAt)
{
    CreatedAt = createdAt;
}

void User::setUpdatedAt(const QDateTime& updatedAt)
{
    UpdatedAt = updatedAt;
}
