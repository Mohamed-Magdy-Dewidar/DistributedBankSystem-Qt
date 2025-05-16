#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>
#include <QTcpServer>
#include <QMap>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QCryptographicHash>


class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    void incomingConnection(qintptr handle) override;
    void StartServer(qint32 port);
    void sendMessage(QString name,QString message);
    QByteArray decryptData(const QByteArray &data, const QByteArray &key);
    void showSocketsConnection();

public slots:

    void onReadyRead();
    void onDisconnect();

signals:
    void sendConsole(QString info);
    void sendReadyRead(QString data,QString clientName, QString command,QJsonArray argsArray);
    void sendDisconnect();

private:
    // Hashmap to map each client to his unique Socket
    QMap<QString,QTcpSocket*> clients;
    // QMutex m_clientsMutex;
    // qint32 counter;
};

#endif // SERVER_H
