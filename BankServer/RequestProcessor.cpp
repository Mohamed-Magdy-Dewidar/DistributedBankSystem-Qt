#include "RequestProcessor.h"
#include "BankDataBase.h"
#define portNumber 1234

RequestProcessor::RequestProcessor(QObject *parent)
    : QObject{parent},server(new Server()) , dataBase(new BankDataBase()) ,currentReciever("")
{

   // qDebug() << "calling the Constructor of the Request handler..."<<Qt::endl; 
    server->StartServer(portNumber);
    // In this example, server.get() returns a raw pointer to the Server instance managed by QScopedPointer.
    // same as using &server however i am Using unique pionter now
    connect(server.get(),&Server::sendDisconnect,this,&RequestProcessor::receiveDisconnect);
    connect(server.get(),&Server::sendReadyRead,this,&RequestProcessor::receiveReadyRead);
    connect(server.get(),&Server::sendConsole,this,&RequestProcessor::receiveConsole);
    initializeRegistry();
}


/**
 *  Registry commands
 *  bool Login(QString userName,QString passWord);
    void ViewBankDataBase(QString userName);
    void GetAccountnumber(QString username);
    QString GetAccountnumberByAdmin(QString adminUserName , QString username);
    double ViewAccountbalance(QString account_number);
    QString Viewtransactionhistory(QString account_number,qint32 count);
    bool MakeTransaction(QString account_number,double transactionamount);
    bool TransferAmount(QString from_Account,QString to_Account,double Transfer_amount);
    bool CreateNewUser(QString adminUserName , QString userData);
    bool DeleteUser(QString adminUserName , QString account_Number);
    bool UpdateUser(QString adminUserName, QString accountNumber, QString newData);
 */





/**
 * @brief RequestProcessor::initializeRegistry
 *
 * this Function is responsible for initializing the registry with commands and their corresponding functions using hashmap and executing them through
 * lamda experssion
 */
void RequestProcessor::initializeRegistry()
{
    // using variant list and argument for handling function parameters
    registry["Login"] = [this](QVariantList args) {
        QString username = args[0].toString();
        QString password = args[1].toString();
        // Call Login function
        LoginResult result = dataBase->Login(username, password);

        qDebug() << "The struct ->  " << result.toJson() <<Qt::endl;

        // Convert result to JSON
        QJsonObject resultJson = result.toJson();
        QJsonDocument doc(resultJson);
        QByteArray resultData = doc.toJson();

        // Send the JSON result to the client
        server->sendMessage(currentReciever, QString(resultData));

        return result;
    };


    // Register "ViewBankDataBase" function
    registry["ViewBankDataBase"] = [this](QVariantList args) {
        QString userName = args[0].toString();
        QString result = dataBase->ViewBankDataBase(userName);
        // how to know which client needs the data(which client to send data to)
        server->sendMessage(currentReciever,result);
        return result;
    };

    // Register "GetAccountnumber" function
    registry["GetAccountnumber"] = [this](QVariantList args) {
        QString userName = args[0].toString();
        QString account_number = dataBase->GetAccountnumber(userName);
        server->sendMessage(currentReciever,account_number);
        return account_number;
    };

    // Register "GetAccountnumberByAdmin" function
    registry["GetAccountnumberByAdmin"] = [this](QVariantList args) {
        QString adminUserName = args[0].toString();
        QString username = args[1].toString();
        QString res = dataBase->GetAccountnumberByAdmin(adminUserName, username);
        server->sendMessage(currentReciever,res);
        return res;
    };

    // Register "ViewAccountbalance" function


    registry["ViewAccountbalance"] = [this](QVariantList args) {
        QString account_number = args[0].toString();

        double balance = dataBase->ViewAccountbalance(account_number);
        // Convert the double to a QString
        //QString res = QString::number(balance);
        QString result  = QString("user Account : %1  - user Balance : %2").arg(account_number).arg(QString::number(balance));
        server->sendMessage(currentReciever,result);
        return balance;
    };

    // Register "Viewtransactionhistory" function
    registry["Viewtransactionhistory"] = [this](QVariantList args) {
        QString account_number = args[0].toString();
        qint32 count = args[1].toInt();
        QString res = dataBase->Viewtransactionhistory(account_number, count);
        server->sendMessage(currentReciever,res);
        return res;
    };

    // Register "MakeTransaction" function
    registry["MakeTransaction"] = [this](QVariantList args) {
        QString account_number = args[0].toString();
        double transactionamount = args[1].toDouble();
        QString transaction_status  = (dataBase->MakeTransaction(account_number, transactionamount));
        server->sendMessage(currentReciever,transaction_status);
        return transaction_status;
    };

    // Register "TransferAmount" function
    registry["TransferAmount"] = [this](QVariantList args) {
        QString from_Account = args[0].toString();
        QString to_Account = args[1].toString();
        double Transfer_amount = args[2].toDouble();
        qDebug() << "the transfered amount -> " << Transfer_amount<<Qt::endl;
        QString result = dataBase->TransferAmount(from_Account, to_Account, Transfer_amount);
        server->sendMessage(currentReciever,result);
        return result;
    };

    // Register "CreateNewUser" function
    registry["CreateNewUser"] = [this](QVariantList args) {
        QString adminUserName = args[0].toString();
        QString userData = args[1].toString();
        QString result = dataBase->CreateNewUser(adminUserName, userData);
        server->sendMessage(currentReciever,result);
        return result;
    };

    // Register "DeleteUser" function
    registry["DeleteUser"] = [this](QVariantList args) {
        QString adminUserName = args[0].toString();
        QString account_Number = args[1].toString();
        QString res =  dataBase->DeleteUser(adminUserName, account_Number);
        server->sendMessage(currentReciever,res);
        return res;
    };

    // Register "UpdateUser" function
    registry["UpdateUser"] = [this](QVariantList args) {
        QString adminUserName = args[0].toString();
        QString accountNumber = args[1].toString();
        QString newData = args[2].toString();
        QString res =  dataBase->UpdateUser(adminUserName, accountNumber, newData);
        server->sendMessage(currentReciever,res);
        return res;
    };

}



/**
 * @brief RequestProcessor::RequestHandler handles the request from the user
 * @param command
 * @param arg1
 */
void RequestProcessor::RequestHandler(QString &command, QString &arg1)
{
    qDebug() << "Request Handler => 1 arg" <<Qt::endl;
    // meaning that command exists
    if(registry.find(command) != registry.end())
    {
        registry[command]({arg1});
    }
    else
    {
        server->sendMessage(currentReciever,"can't execute a command that does not exist in the registry.....");
    }

}

void RequestProcessor::RequestHandler(QString &command, QString &arg1, QString &arg2)
{
    qDebug() << "Request Handler => 2 arg" <<Qt::endl;
    if(registry.contains(command))
    {
        registry[command]({arg1,arg2});
    }
    else
    {
        server->sendMessage(currentReciever,"can't execute a command that does not exist in the registry.....");
    }

}

void RequestProcessor::RequestHandler(QString &command, QString &arg1, QString &arg2, QString &arg3)
{
    qDebug() << "Request Handler => 3 arg" <<Qt::endl;
    if(registry.contains(command))
    {
        registry[command]({arg1,arg2,arg3});
    }
    else
    {
        server->sendMessage(currentReciever,"can't execute a command that does not exist in the registry.....");
    }
}












void RequestProcessor::receiveConsole(QString info)
{
    qDebug() << "Server Info => " <<info <<Qt::endl;
}



void RequestProcessor::receiveDisconnect()
{
    qDebug() << "Server disconnected from client...."<<Qt::endl;
}




void RequestProcessor::receiveReadyRead(QString data ,QString clientName,QString command , QJsonArray argsArray)
{
    // recieved Data from the client will be handled here

    currentReciever = clientName;

    qDebug() << "The current Reciever -> " << currentReciever << Qt::endl;


    qint32 size = argsArray.size();
    qDebug() << "the size of the args List sent from the user -> " << size << Qt::endl;
    QMap<QString,QString> argsHashMap;

    qDebug() << "Data sent from the client => " <<data<<Qt::endl;
    qDebug() << "The command -> " << command << Qt::endl;


/*
 Hashmap =
    {
        "arg1":"userName",
        "arg2":"Pssword"
    }

    // QString arg2 = argsHashMap.value("arg2", "");
    // QString arg3 = argsHashMap.value("arg3", "");


*/

    for(qint32 i =0; i < size; i++)
    {
        QString argumentValue = argsArray[i].toString();
        qDebug() << "Argument value  -> " << argumentValue << Qt::endl;
        argsHashMap[QString("arg%1").arg(i+1)] = argumentValue;
    }






    qDebug() << "HashMap elements"<< Qt::endl;
    qDebug() << "HashMap Size -> "<<argsHashMap.size()<<Qt::endl;
    for (auto it = argsHashMap.begin(); it != argsHashMap.end(); ++it) {
        qDebug() << it.key() << ":" << it.value();
    }


    if(argsHashMap.size() > 3 || argsHashMap.size() < 1)
    {
        server->sendMessage(clientName,"in Valid number of arguments");
        return;
    }

    if(argsHashMap.size() == 2)
    {
        // enforce the hashmap to piont to the beggining
        auto ptr_firstElement  = argsHashMap.begin();
        QString arg1 = ptr_firstElement.value();
        auto ptr_secondElement = std::next(ptr_firstElement);
        QString arg2 = ptr_secondElement.value();
        RequestHandler(command,arg1,arg2);
    }


    if(argsHashMap.size() == 1)
    {
        // enforce the hashmap to piont to the beggining
        auto ptr_firstElement  = argsHashMap.begin();
        QString arg1 = ptr_firstElement.value();
        RequestHandler(command,arg1);
    }


    if(argsHashMap.size() == 3)
    {
        // enforce the hashmap to piont to the beggining
        QString arg1 = argsHashMap.value("arg1");
        QString arg2 = argsHashMap.value("arg2");
        QString arg3 = argsHashMap.value("arg3");
        qDebug() << "value of arg1 -> " << arg1<<Qt::endl;
        qDebug() << "value of arg2 -> " << arg2<<Qt::endl;
        qDebug() << "value of arg3 -> " << arg3<<Qt::endl;
        RequestHandler(command,arg1,arg2,arg3);
    }



}




