#include "server.h"

Server::Server()
{
    if(this->listen(QHostAddress::Any, 8080))
    {
        qDebug() << "Server started";
    }
    else
    {
        qDebug() << "Error occured while starting the server";
    }
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket;

    socket->setSocketDescriptor(socketDescriptor);

    connect(socket, &QTcpSocket::readyRead, this, &Server::onReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &Server::deleteLater);

    Sockets.push_back(socket);
    qDebug() << "Client connected";
}

void Server::onReadyRead()
{
    socket = (QTcpSocket*)sender();

    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_6);

    if(in.status() == QDataStream::Ok)
    {
        qDebug() << "Reading...";
        QString inputStr;
        in >> inputStr;
        qDebug() << inputStr;
    }
    else
    {
        qDebug() << "Error while reading messages";
    }
}

void Server::SendToClient(QString message)
{
    Data.clear();

    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_6);

    out << message;
    socket->write(Data);
}
