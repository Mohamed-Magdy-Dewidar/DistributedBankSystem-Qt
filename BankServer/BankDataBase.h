#ifndef BANKDATABASE_H
#define BANKDATABASE_H
#include <Server.h>

#include <QObject>
#include <QTextStream>
#include <QJsonDocument>
#include <QDebug>
#include <QJsonArray>
#include <QFile>
#include <QJsonObject>
#include <QVector>
#include <QJsonValue>
#include <QRandomGenerator>



struct LoginResult {
    QString message;
    bool pass;
    bool isAdmin; // true for admin, false for regular user
    QJsonObject toJson() const {
        QJsonObject obj;
        obj["isAdmin"] = isAdmin;
        obj["pass"] = pass;
        obj["message"] = message;
        return obj;
    }
};





// Singletion Design Pattern
class BankDataBase : public QObject
{
    Q_OBJECT

public:
    explicit BankDataBase(QObject *parent = nullptr);
    LoginResult Login(QString userName,QString passWord);
    QString ViewBankDataBase(QString userName);
    QString GetAccountnumber(QString username);
    QString GetAccountnumberByAdmin(QString adminUserName , QString username);
    double ViewAccountbalance(QString account_number);
    QString Viewtransactionhistory(QString account_number,qint32 count);
    QString MakeTransaction(QString account_number,double transactionamount);
    QString TransferAmount(QString from_Account,QString to_Account,double Transfer_amount);
    QString CreateNewUser(QString adminUserName , QString userData);
    QString DeleteUser(QString adminUserName , QString account_Number);
    QString UpdateUser(QString adminUserName, QString accountNumber, QString newData);





private:
    void Refresh();
    void Apply();
    bool doesUserorAdminExist(QString username);
    bool doesAccountExists(QString account_number);
    bool isAdmin(QString userName);
    bool isLoggedIn(QString userName);
    QString generateRandomBarCode();
    QJsonArray returnUpdatedTransactions(QJsonArray& transaction_array , double transactionamount);
    QString Path;
    QVector <QJsonObject> _DataBase;

};

#endif // BANKDATABASE_H
