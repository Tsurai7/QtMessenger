#ifndef USER_H
#define USER_H

#include <QString>
#include <QDateTime>

class User
{
private:
    qint64 Id;
    QString Name;
    QString Password;

    QDateTime CreatedAt;
    QDateTime UpdatedAt;

public:
    User(int id, const QString& name, const QString& password,
         const QDateTime& createdAt, const QDateTime& updatedAt);

    qint64 getId() const;
    QString getName() const;
    QString getPassword() const;
    QDateTime getRegistrationDate() const;
    QDateTime getModificationDate() const;


    void setName(const QString& name);
    void setPassword(const QString& password);
    void setRegistrationDate(const QDateTime& createdAt);
    void setModificationDate(const QDateTime& updatedAt);
};

#endif // USER_H
