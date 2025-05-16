#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow),client("0.0.0.0",0)// Initialize client here
{
    ui->setupUi(this);
    connect(&client,&Client::sendConnected,this,&MainWindow::recieveConnected);
    connect(&client,&Client::sendDisconnected,this,&MainWindow::recieveDisconnected);
    connect(&client,&Client::sendErrorOccurred,this,&MainWindow::recieveErrorOccurred);
    connect(&client,&Client::sendStateChanged,this,&MainWindow::recieveStateChanged);
    connect(&client,&Client::sendReadyRead,this,&MainWindow::recieveReadyRead);
    intializeCommands();
}




void MainWindow::intializeCommands()
{
    CommandsHashmap["get_account_number_by_userName"] = "GetAccountnumber";
    // CommandsHashmap["Login_User"] = "Login";
    // CommandsHashmap["view_bankDB"] = "ViewBankDataBase";
    // CommandsHashmap["get_account_number_by_admin"] = "GetAccountnumberByAdmin";
    CommandsHashmap["view_previous_transactions"] = "Viewtransactionhistory";
    CommandsHashmap["view_balance"] = "ViewAccountbalance";
    CommandsHashmap["make_a_transaction"] = "MakeTransaction";
    CommandsHashmap["Wire_Transfer"] = "TransferAmount";
    // CommandsHashmap["delete_a_user_from_DB"]= "DeleteUser";
    // CommandsHashmap["register_a_newUser_inDB"]= "CreateNewUser";
    // CommandsHashmap["update_a_user"] = "UpdateUser";
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Connect_pushButton_clicked()
{

    QString ip  = ui->IP_lineEdit->text();
    qint32  port = ui->Port_lineEdit->text().toInt();
    client.ConnectToHost(ip , port);
}



void MainWindow::on_Disconnect_pushButton_clicked()
{
    client.DisconnectFromHost();
}


void MainWindow::on_pbSend_clicked()
{

    QString Message =  ui->MessageLE->text();
    client.sendData(Message);
    ui->MessageLE->clear();


}




/**
 * @brief MainWindow::on_pb_getAccountNumber_clicked recives an user name  and Request the server to get account number
 *
 *
 */

void MainWindow::on_pb_getAccountNumber_clicked()
{
    // recived account Number
    QString userName  = ui->userName_getAccount_Number_LE->text();
    // command is get Account Number
    QString  command  = CommandsHashmap.value("get_account_number_by_userName", "");
    //expected value of key get_account_number_by_userName -> GetAccountnumber

    if (userName.isEmpty()) {
        QMessageBox::warning(this, "Get Account Number", "User name is required to get account Number.");
        return;
    }

    client.sendRequest(userName,command);
    ui->userName_getAccount_Number_LE->clear();

}




/**
 * @brief MainWindow::on_pb_view_transactions_history_clicked
 * recieves account number and count of transactions to be shown
 */
void MainWindow::on_pb_view_transactions_history_clicked()
{
    QString account_number = ui->accNumber_transaction_history_LE->text();
    QString MaxCount = ui->maxCount_transaction_history_LE->text();
    QString command = CommandsHashmap.value("view_previous_transactions");

    if (account_number.isEmpty()) {
        QMessageBox::warning(this, "View Transactoions", "Account Number is required to Successfully Login.");
        return;
    }

    if (MaxCount.isEmpty()) {
        QMessageBox::warning(this, "View Transactoions", "Count is nessccary to identify the Number of transactions to fetch.");
        return;
    }

    client.sendRequest(account_number,MaxCount,command);
    ui->accNumber_transaction_history_LE->clear();
    ui->maxCount_transaction_history_LE->clear();
}


/**
 * @brief MainWindow::on_pb_view_account_balance_clicked
 * recieves account number and Request the balance of that account
 */
void MainWindow::on_pb_view_account_balance_clicked()
{
    QString acc_number  = ui->accNumber_view_balance_LE->text();
    QString command = CommandsHashmap.value("view_balance");

    if (acc_number.isEmpty()) {
        QMessageBox::warning(this, "View Account Balance", "Account Number is required to View Balance.");
        return;
    }
    client.sendRequest(acc_number , command);
    ui->accNumber_view_balance_LE->clear();
}



/**
 * @brief MainWindow::on_pb_Make_a_Transaction_clicked
 * recieves an amount and request the bank server to place the amount in the user balance or withdraw the amount if the amount is depited(negative value)
 */
void MainWindow::on_pb_Make_a_Transaction_clicked()
{
    QString acc_number = ui->accNumber_make_transaction_LE->text();
    QString amount  = ui->amount_of_transaction_LE->text();
    QString command = CommandsHashmap.value("make_a_transaction");

    if (acc_number.isEmpty()) {
        QMessageBox::warning(this, "Make a Transaction", "Account Number is required to Successfully Place a transaction.");
        return;
    }

    if (amount.isEmpty()) {
        QMessageBox::warning(this, "Make a Transaction", "Amount is required to Successfully Place a transaction.");
        return;
    }

    client.sendRequest(acc_number,amount,command);
    ui->accNumber_make_transaction_LE->clear();
    ui->amount_of_transaction_LE->clear();
}


/**
 * @brief MainWindow::on_pb_WireTrasnfer_clicked
 * Transfers Money Between two accounts upon Clicking the wire transfer butoon and entering the Required Paramteres
 */
void MainWindow::on_pb_WireTrasnfer_clicked()
{
    QString from_account = ui->Transferor_Account_transferMoney_LE->text();
    QString to_account_number = ui->Transferee_Account_transferMoney_LE->text();
    QString transferedAmount = ui->amount_of_transfer_betweenAccounts_LE->text();
    QString command =  CommandsHashmap.value("Wire_Transfer");
    if (from_account.isEmpty()) {
        QMessageBox::warning(this, "Wire a Transfer", "Transferor Account Number is required to Successfully Wire a transfer.");
        return;
    }
    if (to_account_number.isEmpty()) {
        QMessageBox::warning(this, "Wire a Transfer", "Transferee Account Number is required to Successfully Wire a transfer.");
        return;
    }

    if (transferedAmount.isEmpty()) {
        QMessageBox::warning(this, "Wire a Transfer", "Transfered Amount is required to Successfully Wire a Transactions");
        return;
    }
    client.sendRequest(from_account,to_account_number , transferedAmount,command);
    ui->Transferor_Account_transferMoney_LE->clear();
    ui->Transferee_Account_transferMoney_LE->clear();
    ui->amount_of_transfer_betweenAccounts_LE->clear();
}

















/**
 * @brief MainWindow::on_pbExist_clicked
 * once Clicked exists the application
 */
void MainWindow::on_pbExist_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit", "Are you sure you want to exit?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QCoreApplication::quit();
    }

}








void MainWindow::recieveConnected()
{
    ui->listWidgetConsole->addItem("Connected to Server......");
}



// responsible for connections Status
void MainWindow::recieveDisconnected()
{
    ui->listWidgetConsole->addItem("Disconnected From Server......");
}

void MainWindow::recieveReadyRead(QString data)
{
    ui->listWidgetRecievedData->addItem(data);
}

void MainWindow::recieveErrorOccurred(QAbstractSocket::SocketError error)
{
    // this procces is to convert an enum to a string
    // using MetaEnum libary as i a have to display to the Gui string data
    QMetaEnum errorObject = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    QString errorString = errorObject.valueToKey(error);
    ui->listWidgetConsole->addItem(errorString);

}

void MainWindow::recieveStateChanged(QAbstractSocket::SocketState state)
{
    QMetaEnum stateObject = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    QString stateStringData = stateObject.valueToKey(state);
    ui->listWidgetConsole->addItem(stateStringData);

}




















