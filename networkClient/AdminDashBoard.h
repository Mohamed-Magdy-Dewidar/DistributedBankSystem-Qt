#ifndef ADMINDASHBOARD_H
#define ADMINDASHBOARD_H

#include <QMainWindow>
#include <QMessageBox>
#include <Client.h>


namespace Ui {
class AdminDashBoard;
}

class AdminDashBoard : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminDashBoard(QWidget *parent = nullptr);
    ~AdminDashBoard();



    // Struct for commands
    struct Commands {
        static inline const QString GetAccountNumberByUserName = "GetAccountnumber";
        static inline const QString LoginUser = "Login";
        static inline const QString ViewBankDB = "ViewBankDataBase";
        static inline const QString GetAccountNumberByAdmin = "GetAccountnumberByAdmin";
        static inline const QString ViewPreviousTransactions = "Viewtransactionhistory";
        static inline const QString ViewBalance = "ViewAccountbalance";
        static inline const QString MakeTransaction = "MakeTransaction";
        static inline const QString WireTransfer = "TransferAmount";
        static inline const QString DeleteUserFromDB = "DeleteUser";
        static inline const QString RegisterNewUserInDB = "CreateNewUser";
        static inline const QString UpdateUser = "UpdateUser";
    };



public slots:
    void recieveConnected();
    void recieveDisconnected();
    void recieveReadyRead(QString data);
    void recieveErrorOccurred(QAbstractSocket::SocketError error);
    void recieveStateChanged(QAbstractSocket::SocketState state);


private slots:
    void on_Connect_pushButton_2_clicked();

    void on_Disconnect_pushButton_2_clicked();

    void on_pb_getAccountNumber_byADMIN_2_clicked();

    void on_pb_View_bank_database_2_clicked();

    void on_pb_Make_a_Transaction_2_clicked();

    void on_pb_view_transactions_history_2_clicked();

    void on_pb_view_account_balance_2_clicked();

    void on_pb_DeleteUser_2_clicked();

    void on_pb_CreateNewUser_2_clicked();

    void on_pb_UpdateUserData_2_clicked();

    void on_pb_Edit_user_Balance_clicked();

    void on_pbSend_2_clicked();

    void on_pbExist_2_clicked();

private:
    Ui::AdminDashBoard *ui;
    Client client;
};

#endif // ADMINDASHBOARD_H
