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
    User();

    qint64 getId() const;
    QString getName() const;
    QString getPassword() const;
    QDateTime getCreatedAt() const;
    QDateTime getUpdatedAt() const;


    void setId(const qint64& id);
    void setName(const QString& name);
    void setPassword(const QString& password);
    void setCreatedAt(const QDateTime& createdAt);
    void setUpdatedAt(const QDateTime& updatedAt);
};

#endif // USER_H
