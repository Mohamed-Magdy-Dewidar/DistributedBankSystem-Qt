#include "Server.h"


Server::Server(QObject *parent)
    : QTcpServer{parent}
{}

static qint32 counter = 0;


// every time a new client enter the system
// incoming connection will get executed

void Server::incomingConnection(qintptr handle)
{
    QTcpSocket *newSocket = new QTcpSocket();

    newSocket->open(QIODevice::ReadWrite);
    newSocket->setSocketDescriptor(handle);

    connect(newSocket,&QTcpSocket::disconnected,this,&Server::onDisconnect);
    connect(newSocket,&QTcpSocket::readyRead,this,&Server::onReadyRead);


    counter++;
    // Client_counter agreed Upon Format to send Data
    QString name = QString("Client_%1").arg(counter);
    clients[name] = newSocket;
    qDebug() << "Welcome from server dear "<< name <<Qt::endl;
    sendMessage(name,QString("Welcome from server dear %1").arg(name));


    showSocketsConnection();






}



/**
 * @brief Server::showSocketsConnection
 * to list the Clients and thier Unique socket descriptors
 */
void Server::showSocketsConnection()
{
    for(auto it = clients.begin(); it!=clients.end(); it++)
    {
        qDebug() << it.key() << " Unique Socket Descriptor => " << it.value() << Qt::endl;
    }
}


void Server::StartServer(qint32 port)
{
    if(this->listen(QHostAddress::Any,port))
    {
        qDebug() <<QString("Server is up and listening to port => %1").arg(port)<<Qt::endl;
        emit sendConsole(QString("Server is up and listening to port => %1").arg(port));
    }
    else
    {
        qDebug() << QString("Server can't listen to port => %1").arg(port)<<Qt::endl;
        emit sendConsole(QString("Server can't listen to port => %1").arg(port));
    }

}



void Server::sendMessage(QString name, QString message)
{
    if(clients[name]->isOpen())
    {
       clients[name]->write(message.toUtf8());
        clients[name]->flush();
    }

}





QByteArray Server::decryptData(const QByteArray &data, const QByteArray &key)
{
    QByteArray decryptedData;
    for (int i = 0; i < data.size(); ++i) {
        decryptedData.append(data.at(i) ^ key.at(i % key.size())); // XOR decryption
    }
    return decryptedData;
}





// encrypted data from the client will be handled here
void Server::onReadyRead()
{
    qDebug() << "From the on Ready Read Signal "<<Qt::endl;
    QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());
    // extract the name of sender Through is his unique socket descriptor...
    QString ClientName  = clients.key(socket);

    qDebug() << "The socket Address of the sender -> " << socket <<" His name -> " << ClientName << Qt::endl;







    // the data recived is encrypted in the client side
    QByteArray encryptedDatabyteArray = socket->readAll();
    // Decryption Key (shared with the client securely beforehand)

    QByteArray encryptionKey = "secureKey12345678"; // Same key as client
    QByteArray deCryptedData = decryptData(encryptedDatabyteArray,encryptionKey);


    QJsonDocument jsonDoc = QJsonDocument::fromJson(deCryptedData);
    QJsonObject jsonObject = jsonDoc.object();
    QString type = jsonObject["Type"].toString();
    qint32 size = jsonObject["Size"].toInt();
    QString data = jsonObject["data"].toString();
    QString command  = jsonObject["command"].toString();
    QJsonArray argsArray = jsonObject["args"].toArray();



    qDebug() << "Coming from Server Side.... " << Qt::endl;
    qDebug() << "the size of the args List sent from the user -> " << argsArray.size()<< Qt::endl;





    // qDebug() << "Encrypted  Data Byte Array => " << encryptedDatabyteArray <<Qt::endl;
    qDebug() << "Size of the data from the client -> " << data.size();

    qDebug() << "Size of the data from the client at the server -> " << size;



    if(size == data.size())
    {

        emit sendReadyRead(data,ClientName, command,argsArray);
        qDebug() << "Recieved Message -> "<< deCryptedData <<Qt::endl;

    }
    else
    {
        qWarning() <<"Data integrity Issue Concering the size of the Data......"<<Qt::endl;
    }


}





void Server::onDisconnect()
{
    QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());
    if(socket->isOpen())
    {
        socket->close();
    }
    emit sendDisconnect();
}








