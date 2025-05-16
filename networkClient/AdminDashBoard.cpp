#include "AdminDashBoard.h"
#include "ui_AdminDashBoard.h"

AdminDashBoard::AdminDashBoard(QWidget *parent): QMainWindow(parent), ui(new Ui::AdminDashBoard) , client("0.0.0.0",0)
{
    ui->setupUi(this);
    connect(&client,&Client::sendConnected,this,&AdminDashBoard::recieveConnected);
    connect(&client,&Client::sendDisconnected,this,&AdminDashBoard::recieveDisconnected);
    connect(&client,&Client::sendErrorOccurred,this,&AdminDashBoard::recieveErrorOccurred);
    connect(&client,&Client::sendStateChanged,this,&AdminDashBoard::recieveStateChanged);
    connect(&client,&Client::sendReadyRead,this,&AdminDashBoard::recieveReadyRead);
}

AdminDashBoard::~AdminDashBoard()
{
    delete ui;
}






AdminDashBoard::Commands *comm;


void AdminDashBoard::on_pbSend_2_clicked()
{
    QString Message =  ui->MessageLE_2->text();
    client.sendData(Message);
    ui->MessageLE_2->clear();
}


/**
 * @brief AdminDashBoard::on_Connect_pushButton_2_clicked
* Connect to Server
 */

void AdminDashBoard::on_Connect_pushButton_2_clicked()
{
    QString ip  = ui->IP_lineEdit_2->text();
    qint32  port = ui->Port_lineEdit_2->text().toInt();
    client.ConnectToHost(ip , port);

}



/**
 * @brief AdminDashBoard::on_Disconnect_pushButton_2_clicked
 * DisConnect form server
*/
void AdminDashBoard::on_Disconnect_pushButton_2_clicked()
{
    client.DisconnectFromHost();
}



/**
 * @brief AdminDashBoard::on_pb_getAccountNumber_byADMIN_clicked
 * recives an admin username and userName  and Request the server to get account number of the user
 */

void AdminDashBoard::on_pb_getAccountNumber_byADMIN_2_clicked()
{
    QString admin_userName  = ui->Admin_User_Name_get_account_number_by_admin_LE_2->text();
    QString userName  = ui->userName_getAccount_Number_by_admin_LE_2->text();
    // command is get Account Number
    // QString  command  = CommandsHashmap.value("get_account_number_by_admin", "");


    QString  command  = comm->GetAccountNumberByAdmin;


    if (admin_userName.isEmpty()) {
        QMessageBox::warning(this, "Get Account Number By Admin", "Admin user name is required to Get user Account Number.");
        return;
    }


    if (userName.isEmpty()) {
        QMessageBox::warning(this, "Get Account Number By Admin", "User name is required to Get user Account Number.");
        return;
    }

    client.sendRequest(admin_userName,userName,command);
    ui->Admin_User_Name_get_account_number_by_admin_LE_2->clear();
    ui->userName_getAccount_Number_by_admin_LE_2->clear();

}



/**
 * @brief AdminDashBoard::on_pb_view_account_balance_clicked
 * recieves account number and Request the balance of that account
 */
void AdminDashBoard::on_pb_View_bank_database_2_clicked()
{
    QString admin_userName = ui->Admin_user_Name_view_database_LE_2->text();
    QString command  = comm->ViewBankDB;

    if (admin_userName.isEmpty()) {
        QMessageBox::warning(this, "View Bank DataBase", "Admin User name is required to View Bank DataBase...");
        return;
    }
    client.sendRequest(admin_userName , command);
    ui->Admin_user_Name_view_database_LE_2->clear();

}




/**
 * @brief AdminDashBoard::on_pb_view_transactions_history_clicked
 * recieves account number and count of transactions to be shown
 */
void AdminDashBoard::on_pb_view_transactions_history_2_clicked()
{
    QString account_number = ui->accNumber_transaction_history_LE_2->text();
    QString MaxCount = ui->maxCount_transaction_history_LE_2->text();
    QString command = comm->ViewPreviousTransactions;

    if (account_number.isEmpty()) {
        QMessageBox::warning(this, "View Transactoions", "Account Number is required to Successfully Login.");
        return;
    }

    if (MaxCount.isEmpty()) {
        QMessageBox::warning(this, "View Transactoions", "Count is nessccary to identify the Number of transactions to fetch.");
        return;
    }

    client.sendRequest(account_number,MaxCount,command);
    ui->accNumber_transaction_history_LE_2->clear();
    ui->maxCount_transaction_history_LE_2->clear();

}




/**
 * @brief AdminDashBoard::on_pb_view_account_balance_clicked
 * recieves account number and Request the balance of that account
 */
void AdminDashBoard::on_pb_view_account_balance_2_clicked()
{
    QString acc_number  = ui->accNumber_view_balance_LE_2->text();
    QString command = comm->ViewBalance;

    if (acc_number.isEmpty()) {
        QMessageBox::warning(this, "View Account Balance", "Account Number is required to View Balance.");
        return;
    }
    client.sendRequest(acc_number , command);
    ui->accNumber_view_balance_LE_2->clear();

}


/**
 * @brief AdminDashBoard::on_pb_DeleteUser_2_clicked
*   Deletes the user From DataBase
*/
void AdminDashBoard::on_pb_DeleteUser_2_clicked()
{
    QString Admin_userName = ui->Admin_User_Name_deleteUser_LE_2->text();
    QString accountNumber = ui->Account_number_toDelete_user_LE_2->text();
    QString command = comm->DeleteUserFromDB;
    if(Admin_userName.isEmpty())
    {
        QMessageBox::warning(this, "Delete User", "Admin User Name is required to Successfully Delete a User...");
        return;
    }

    if(accountNumber.isEmpty())
    {
        QMessageBox::warning(this, "Delete User", "Account Number is required to Successfully Delete a User...");
        return;
    }
    client.sendRequest(Admin_userName,accountNumber,command);
    ui->Account_number_toDelete_user_LE_2->clear();
    ui->Admin_User_Name_deleteUser_LE_2->clear();
}




/**
 * @brief AdminDashBoard::on_pb_CreateNewUser_2_clicked
* Request the server to register a new user in the database.
*/
void AdminDashBoard::on_pb_CreateNewUser_2_clicked()
{
    QString admin_UserName = ui->Admin_User_Name_CreateNewUser_LE_2->text();
    QString userName = ui->User_Name_CreateNewUser_LE_2->text();
    QString password = ui->User_Password_CreateNewUser_LE_2->text();
    QString account_number = ui->User_Account_number_CreateNewUser_LE_2->text();
    QString balance = ui->Balance_CreateNewUser_LE_2->text();
    QString command = comm->RegisterNewUserInDB;

    // Validate user input
    if (admin_UserName.isEmpty() || userName.isEmpty() || password.isEmpty() ||
        account_number.isEmpty() || balance.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "All fields must be filled in.");
        return;
    }

    // Check if balance is numeric
    bool ok;
    double balanceValue = balance.toDouble(&ok);
    if (!ok || balanceValue < 0) {
        QMessageBox::warning(this, "Input Error", "Please enter a valid positive number for balance.");
        return;
    }

    // Create userdata in JSON format
    QJsonObject userdataObj;
    userdataObj["username"] = userName;
    userdataObj["password"] = password;
    userdataObj["account_number"] = account_number;
    userdataObj["balance"] = balanceValue;

    // Convert QJsonObject to JSON string
    QJsonDocument doc(userdataObj);
    QString userdata = doc.toJson(QJsonDocument::Compact);

    // Send the request to the server
    client.sendRequest(admin_UserName, userdata, command);

    // Clear input fields
    ui->Admin_User_Name_CreateNewUser_LE_2->clear();
    ui->User_Name_CreateNewUser_LE_2->clear();
    ui->User_Password_CreateNewUser_LE_2->clear();
    ui->User_Account_number_CreateNewUser_LE_2->clear();
    ui->Balance_CreateNewUser_LE_2->clear();

}




/**
 * @brief AdminDashBoard::on_pb_UpdateUserData_clicked
 * Receives user data and updates only the fields that are provided.
 * Inserting new data to update is entirely optional.
 */
void AdminDashBoard::on_pb_UpdateUserData_2_clicked()
{
    QString admin_UserName = ui->Admin_User_Name_UpdateUser_LE_2->text();
    QString userName = ui->User_Name_UpdateUser_LE_2->text();
    QString password = ui->Password_UpdateUser_LE_2->text();
    QString account_number = ui->Account_number_UpdateUser_LE_2->text();
    QString balance = ui->Balance_UpdateUser_LE_2->text();
    QString command = comm->UpdateUser;



    // Ensure admin user name is provided
    if (admin_UserName.isEmpty()) {
        QMessageBox::warning(this, "Update User Data", "Admin user name is required to update user data.");
        return;
    }

    // Ensure account number is provided
    if (account_number.isEmpty()) {
        QMessageBox::warning(this, "Update User Data", "Account number is required to update user data.");
        return;
    }


    QJsonObject updatedFields;
    if (!userName.isEmpty()) {
        updatedFields["username"] = userName;
    }
    if (!password.isEmpty()) {
        updatedFields["password"] = password;
    }
    if (!balance.isEmpty()) {
        updatedFields["balance"] = balance.toDouble(); // Ensure balance is converted to a numeric value
    }



    // Serialize the entire JSON object into a string
    QJsonDocument jsonDoc(updatedFields);
    QString updateData = jsonDoc.toJson(QJsonDocument::Compact);

    // Send the request to the server
    client.sendRequest(admin_UserName,account_number,updateData, command);

    // Clear all input fields
    ui->Admin_User_Name_UpdateUser_LE_2->clear();
    ui->User_Name_UpdateUser_LE_2->clear();
    ui->Password_UpdateUser_LE_2->clear();
    ui->Account_number_UpdateUser_LE_2->clear();
    ui->Balance_UpdateUser_LE_2->clear();

    // Notify the user that the request has been sent
    //QMessageBox::information(this, "Update User Data", "The update request has been sent to the server.");

}



/**
 * @brief AdminDashBoard::on_pb_Make_a_Transaction_clicked
 * recieves an amount and request the bank server to place the amount in the user balance or withdraw the amount if the amount is depited(negative value)
 */
void AdminDashBoard::on_pb_Edit_user_Balance_clicked()
{
    QString acc_number = ui->accNumber_make_transaction_LE_2->text();
    QString amount  = ui->amount_of_transaction_LE_2->text();
    QString command = comm->MakeTransaction;

    if (acc_number.isEmpty()) {
        QMessageBox::warning(this, "Make a Transaction", "Account Number is required to Successfully Place a transaction.");
        return;
    }

    if (amount.isEmpty()) {
        QMessageBox::warning(this, "Make a Transaction", "Amount is required to Successfully Place a transaction.");
        return;
    }

    client.sendRequest(acc_number,amount,command);
    ui->accNumber_make_transaction_LE_2->clear();
    ui->amount_of_transaction_LE_2->clear();

}



void AdminDashBoard::on_pbExist_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit", "Are you sure you want to exit?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QCoreApplication::quit();
    }

}










void AdminDashBoard::recieveConnected()
{
    ui->listWidgetConsole_2->addItem("Connected to Server......");
}



// responsible for connections Status
void AdminDashBoard::recieveDisconnected()
{
    ui->listWidgetConsole_2->addItem("Disconnected From Server......");
}

void AdminDashBoard::recieveReadyRead(QString data)
{
    ui->listWidgetRecievedData_adminPage->addItem(data);
}

void AdminDashBoard::recieveErrorOccurred(QAbstractSocket::SocketError error)
{
    // this procces is to convert an enum to a string
    // using MetaEnum libary as i a have to display to the Gui string data
    QMetaEnum errorObject = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    QString errorString = errorObject.valueToKey(error);
    ui->listWidgetConsole_2->addItem(errorString);

}


void AdminDashBoard::recieveStateChanged(QAbstractSocket::SocketState state)
{
    QMetaEnum stateObject = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    QString stateStringData = stateObject.valueToKey(state);
    ui->listWidgetConsole_2->addItem(stateStringData);
}




