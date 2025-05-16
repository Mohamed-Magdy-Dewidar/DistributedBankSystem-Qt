#include "Client.h"

Client::Client(QString Ip, qint32 portNumber,QObject *parent):QObject{parent}
{
    this->ip = Ip;
    this->port = portNumber;

    // this keyword so it would get destroyed
    socket = new QTcpSocket(this);


    connect(socket,&QTcpSocket::connected,this,&Client::onConnected);
    connect(socket,&QTcpSocket::disconnected,this,&Client::onDisconnected);
    connect(socket,&QTcpSocket::errorOccurred,this,&Client::onErrorOccurred);
    connect(socket,&QTcpSocket::readyRead,this,&Client::onReadyRead);
    connect(socket,&QTcpSocket::stateChanged,this,&Client::onStateChanged);

}


void Client::ConnectToHost(QString ip, qint32 port)
{
    if(socket->isOpen() && this->ip == ip && this->port == port)
    {
        return;

    }
    else
    {
        this->ip = ip;
        this->port = port;
        socket->open(QIODevice::ReadWrite);
        socket->connectToHost(ip,port);
    }

}


// exiting the app
void Client::DisconnectFromHost()
{
    if(socket->isOpen())
    {
        socket->close();
    }

}


QByteArray Client::encryptData(const QByteArray &data, const QByteArray &key)
{
    QByteArray encryptedData;
    for (int i = 0; i < data.size(); ++i) {
        encryptedData.append(data.at(i) ^ key.at(i % key.size())); // XOR encryption
    }
    return encryptedData;

}


void Client::sendData(QString data)
{
    if(socket->isOpen())
    {
        // Reading Data from Socket will Be in QbyteArray
        // To write Data to socket it should be in QbyteArray
        // to Utf8 will convert string to QbyteArray

        QJsonObject jsonObj;
        jsonObj["Size"] = data.size();
        jsonObj["Type"] = "Request Message";
        jsonObj["data"] = data;
        jsonObj["command"] = "";
        QJsonArray argsArray;
        QJsonObject argObj;

        jsonObj["args"] = argsArray;



        QByteArray byteArray  = QJsonDocument(jsonObj).toJson();
        // Encryption Key (shared with the server securely beforehand)
        QByteArray encryptionKey = "secureKey12345678"; // Example 16-byte key       
        QByteArray encryptedData  = encryptData(byteArray,encryptionKey);

        // Generate hash of the encrypted data
        QByteArray dataHash = QCryptographicHash::hash(encryptedData, QCryptographicHash::Sha256);

        // Concatenate encrypted data and its hash
        QByteArray packet = encryptedData + dataHash;




        // socket->write(byteArray);
        socket->write(packet);
        socket->flush();


        // to send ordinary DATA
        // socket->write(data.toUtf8());
        // socket->flush();
    }
}




/**
 * @brief Client::sendRequest sending a request for the server to execute and get
 * a response and
 * the data being send this time is nothing but an argument
 * @param data is the argument for the request could be one or more
 * @param command
 */
void Client::sendRequest(QString arg1, QString command)
{
    if(socket->isOpen())
    {

        QJsonObject jsonObj;
        jsonObj["Size"] = arg1.size();
        jsonObj["Type"] = "Request Message";
        jsonObj["data"] = arg1;
        jsonObj["command"] = command;
        QJsonArray argsArray;
        QJsonObject argObj;
        argsArray.append(arg1);
        jsonObj["args"] = argsArray;

        QByteArray byteArray  = QJsonDocument(jsonObj).toJson();
        // Encryption Key (shared with the server securely beforehand)
        QByteArray encryptionKey = "secureKey12345678"; // Example 16-byte key
        QByteArray encryptedData  = encryptData(byteArray,encryptionKey);

        socket->write(encryptedData);
        socket->flush();

    }

}

void Client::sendRequest(QString arg1  , QString arg2 , QString command)
{
    if(socket->isOpen())
    {
        QJsonObject jsonObj;
        // 1 is for the additional space
        QString Empty_space = " ";
        jsonObj["Size"] = arg1.size() +Empty_space.size()+ arg2.size();
        jsonObj["Type"] = "Request Message";
        jsonObj["data"] = arg1 + Empty_space +arg2;
        jsonObj["command"] = command;
        QJsonArray argsArray;
        QJsonObject argObj;
        argsArray.append(arg1);
        argsArray.append(arg2);
        jsonObj["args"] = argsArray;

        QByteArray byteArray  = QJsonDocument(jsonObj).toJson();
        // Encryption Key (shared with the server securely beforehand)
        QByteArray encryptionKey = "secureKey12345678"; // Example 16-byte key
        QByteArray encryptedData  = encryptData(byteArray,encryptionKey);

        socket->write(encryptedData);
        socket->flush();
    }
}





void Client::sendRequest(QString arg1  , QString arg2 , QString arg3 , QString command)
{
    if(socket->isOpen())
    {
        QJsonObject jsonObj;
        QString Empty_space = " ";
        jsonObj["Size"] = arg1.size() + arg2.size() + arg3.size() + (2*Empty_space.size());
        jsonObj["Type"] = "Request Message";
        jsonObj["data"] = arg1 + Empty_space + arg2 + Empty_space + arg3;
        jsonObj["command"] = command;
        QJsonArray argsArray;
        QJsonObject argObj;
        argsArray.append(arg1);
        argsArray.append(arg2);
        argsArray.append(arg3);
        jsonObj["args"] = argsArray;

        QByteArray byteArray  = QJsonDocument(jsonObj).toJson();
        // Encryption Key (shared with the server securely beforehand)
        QByteArray encryptionKey = "secureKey12345678"; // Example 16-byte key
        QByteArray encryptedData  = encryptData(byteArray,encryptionKey);

        socket->write(encryptedData);
        socket->flush();
    }
}




void Client::onConnected()
{
    emit sendConnected();
}

void Client::onDisconnected()
{
    if(socket->isOpen())
        socket->close();
    emit sendDisconnected();
}

void Client::onReadyRead()
{
    if(socket->isOpen() && socket->isReadable())
    {
        QByteArray data = socket->readAll();
        emit sendReadyRead(QString(data));
    }
    else
    {
        qDebug() << "Issue Opening the socket and reading Its data"<<Qt::endl;
    }

}

void Client::onErrorOccurred(QAbstractSocket::SocketError error)
{
    emit sendErrorOccurred(error);
}

void Client::onStateChanged(QAbstractSocket::SocketState state)
{
    emit sendStateChanged(state);
}
