#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QCryptographicHash>
#include <QFile>
#include <QMetaEnum>



class Client : public QObject
{
    Q_OBJECT
public:
    // Default Constrcutor
    // Client();
    // paramterized Constructor
    Client(QString Ip, qint32 portNumber,QObject *parent = nullptr);
    // function responsilbe for establishing the connection between the client and host
    void ConnectToHost(QString ip , qint32 port);
    void DisconnectFromHost();
    void sendData(QString data);
    void sendRequest(QString data , QString command);
    void sendRequest(QString arg1  , QString arg2 , QString command);
    void sendRequest(QString arg1  , QString arg2 ,QString arg3,QString command);
    QByteArray encryptData(const QByteArray &data, const QByteArray &key);




public slots:
    void onConnected();
    void onDisconnected();
    void onReadyRead();
    void onErrorOccurred(QAbstractSocket::SocketError error);
    void onStateChanged(QAbstractSocket::SocketState state);
signals:
    // signals to connect with Slot
    // signal with connect client class to (Mainwindow) to display it on a widget
    void sendConnected();
    void sendDisconnected();
    void sendReadyRead(QString data);
    void sendErrorOccurred(QAbstractSocket::SocketError error);
    void sendStateChanged(QAbstractSocket::SocketState state);

private:
    QTcpSocket *socket;
    QString ip;
    qint32 port;


};

#endif // CLIENT_H
