#ifndef REQUESTPROCESSOR_H
#define REQUESTPROCESSOR_H

#include <QObject>
#include <Server.h>
#include <BankDataBase.h>
#include <QScopedPointer>
class RequestProcessor : public QObject
{
    Q_OBJECT
public:
    explicit RequestProcessor(QObject *parent = nullptr);
    void initializeRegistry();
    void RequestHandler(QString &command , QString &arg1);
    void RequestHandler(QString &command , QString &arg1 , QString &arg2 );
    void RequestHandler(QString &command , QString &arg1 , QString &arg2 , QString &arg3);



public slots:
    void receiveConsole(QString info);
    void receiveReadyRead(QString data,QString clientName ,  QString command , QJsonArray argsArray);
    void receiveDisconnect();



private:
    // Server server;
    QScopedPointer<Server> server;
    QScopedPointer<BankDataBase> dataBase;
    QString currentReciever;


    // Registry for function pointers
    // the registery will hold keys which is predefined commands and execute the function based on the commands
    // QMap<QString, std::function<BankDataBase*()>> registery; // Changed the return type for flexibility

    QMap<QString, std::function<void(QVariantList)>> registry;

};

#endif // REQUESTPROCESSOR_H
