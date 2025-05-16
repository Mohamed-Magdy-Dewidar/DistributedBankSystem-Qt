#include "BankDataBase.h"
//#define portNumber 1234

BankDataBase::BankDataBase(QObject *parent)
    : QObject{parent} , Path("D://Embdedd Linux//QT//QT-WORK//Bank_Managemnet_System_using_WebSockets//BankServer//BankDatabase.json")

{
    Refresh();
}


// Refreshes the in-memory database by clearing the existing data and reloading it from a JSON file.
// Steps:
// 1. Clears the _DataBase container and optimizes memory usage.
// 2. Opens the JSON file specified by 'Path' in read-only text mode.
// 3. Reads the file's contents into a QByteArray and parses it into a QJsonDocument.
// 4. Extracts a QJsonArray from the document and populates _DataBase with its objects.
// 5. Logs an error if the file cannot be opened.
void BankDataBase::Refresh()
{
    _DataBase.clear();
    _DataBase.resize(0);
    _DataBase.shrink_to_fit();
    QFile file(Path);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QByteArray byteArray = file.readAll();
        QJsonDocument qjsonDoc = QJsonDocument::fromJson(byteArray);
        qjsonDoc.isNull();
        QJsonArray JsonArray = qjsonDoc.array();
        for(int i=0; i<JsonArray.size(); i++){
            _DataBase << JsonArray[i].toObject();
        }
        file.close();
    }
    else{
        qDebug() << "can not open file ....."<<Qt::endl;

    }

}

/**
 * @brief BankDataBase::Apply
 * After any Write Operation on the dataBase it is esstinal to use Apply Function to
 * Commit the changes
 */
void BankDataBase::Apply()
{
    QJsonArray JsonArray;
    for(auto& obj :_DataBase){
        JsonArray.append(obj);
    }
    QFile file(Path);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)){
        // data that is writtin in file should be byte array
        // so json doucment then toJson
        file.write(QJsonDocument(JsonArray).toJson());
        file.flush();
        file.close();

    }
    else{
        qDebug() << "can not open file ....."<<Qt::endl;
    }

}

/**
 * @brief BankDataBase::doesUserorAdminExist Checks if the admin or user is avalabile in the system
 * @param username
 * @return Bool
 */
bool BankDataBase::doesUserorAdminExist(QString username)
{
    QString key = "";
    for(qint32 i = 0; i < _DataBase.size(); i++)
    {
        if(i == 0)
        {
            key = "users";
        }
        else if(i == 1)
        {
            key = "admins";
        }
        else
        {
            return false;
        }
        QJsonArray jsonArray = _DataBase[i][key].toArray();
        if (jsonArray.isEmpty()) {
            qDebug().noquote() << "There are No users or admins in the System...." << Qt::endl;
            return false;
        }
        for (const auto& obj : jsonArray) {
            QJsonObject userAdminobj = obj.toObject();
            // Extract the userName, to check weather the user is admin or not
            QString Extractedusername = userAdminobj["username"].toString();
            if(Extractedusername == username)
            {
                return true;
            }
        }


    }
    return false;


}


/**
 * @brief BankDataBase::doesAccountExists Checks if the user is avalabile in the system based on the account Number
 * @param account_number
 * @return Bool
 */


bool BankDataBase::doesAccountExists(QString account_number)
{
    QString key = "users";
    qint32 userIdx = 0;
    QJsonArray jsonArray = _DataBase[userIdx][key].toArray();
    if (jsonArray.isEmpty()) {
            qDebug().noquote() << "There are No users in the System...." << Qt::endl;
            return false;
    }
    for (const auto& obj : jsonArray) {
        QJsonObject userAdminobj = obj.toObject();
        // Extract the account Number, to check whether the user exists or not
        QString ExtractedAccountNumber = userAdminobj["account_number"].toString();
        if(ExtractedAccountNumber == account_number)
        {
            return true;
        }
    }


    return false;

}





/**
 * @brief BankDataBase::isAdmin checks if the user is admin or not
 * @param userName
 * @return bool
 */
bool BankDataBase::isAdmin(QString userName)
{
    QString key = "admins";
    qint32 AdminIndex  = 1;
    QJsonArray jsonArray = _DataBase[AdminIndex][key].toArray();
        if (jsonArray.isEmpty()) {
            qDebug().noquote() << "There are No admins in the System...." << Qt::endl;
            return false;
        }
    for (const auto& obj : jsonArray) {
            QJsonObject Adminobject = obj.toObject();
            // Extract the userName, to check weather the user is admin or not
            QString Extractedusername = Adminobject["username"].toString();
            if(Extractedusername == userName)
            {
                return true;
            }
    }



    return false;

}

/**
 * @brief BankDataBase::isLoggedIn Checks Whether  the user or admin are logged in the system or Not
 * @param userName
 * @return
 */
bool BankDataBase::isLoggedIn(QString userName)
{
    QString key = "";
    for(qint32 i = 0; i < _DataBase.size(); i++)
    {
        if(i == 0)
        {
            key = "users";
        }
        else if(i == 1)
        {
            key = "admins";
        }
        else
        {
            return false;
        }
        QJsonArray jsonArray = _DataBase[i][key].toArray();
        if (jsonArray.isEmpty()) {
            qDebug().noquote() << "There are No users or admins in the System...." << Qt::endl;
            return false;
        }
        for (const auto& obj : jsonArray) {
            QJsonObject userAdminobj = obj.toObject();
            // Extract the userName, to check weather the user is admin or not
            QString Extractedusername = userAdminobj["username"].toString();
            if(Extractedusername == userName)
            {
                bool loginStatus = userAdminobj["is_logged_in"].toBool();
                return loginStatus == true;
            }

        }


    }
    return false;

}





/**
 * @brief BankDataBase::Login log in the user into the system if he is already registered in it.
 * the return was orginaly bool however i changed it for better user Experience
 * @param userName
 * @param passWord
 * @return a struct containg a message and flags (pass , isAdmin)
 */
LoginResult BankDataBase::Login(QString userName, QString passWord) {
    LoginResult result; // Create a valid LoginResult instance

    // Check if the user exists in the system
    if (!doesUserorAdminExist(userName)) {
        qDebug() << "This user is not registered in the system...." << Qt::endl;
        result.isAdmin = false;
        result.pass = false; // Login failed
        result.message = "This user is not registered in the system.";
        return result;
    }

    // Check if the user is already logged in
    if (isLoggedIn(userName)) {
        qDebug() << "User is already logged into the system...." << Qt::endl;
        result.isAdmin = false; // No need to distinguish admin here
        result.pass = false; // Login failed
        result.message = "User is already logged into the system.";
        return result;
    }

    // Determine the user type (admin or regular user)
    QString userType = isAdmin(userName) ? "admins" : "users";
    QString name = userType.left(userType.size() - 1); // Remove the trailing 's'
    QJsonArray jsonArray = _DataBase[userType == "admins" ? 1 : 0][userType].toArray();

    // Check if the database contains any users of this type
    if (jsonArray.isEmpty()) {
        qDebug().noquote() << "There are no " << userType << " in the system...." << Qt::endl;
        result.isAdmin = false;
        result.pass = false; // Login failed
        result.message = QString("There are no %1 in the system.").arg(userType);
        return result;
    }

    // Search for the user in the database
    for (qint32 i = 0; i < jsonArray.size(); ++i) {
        QJsonObject userObj = jsonArray[i].toObject();
        QString extractedUserName = userObj["username"].toString();
        QString extractedPassword = userObj["password"].toString();

        if (extractedUserName == userName) {
            // Check the password
            if (extractedPassword != passWord) {
                qDebug() << "Incorrect password for user:" << userName << Qt::endl;
                result.isAdmin = false;
                result.pass = false; // Login failed
                result.message = QString("Incorrect password for user %1.").arg(userName);
                return result;
            }

            // Update the user's login status
            userObj["is_logged_in"] = true;
            jsonArray[i] = userObj;
            _DataBase[userType == "admins" ? 1 : 0][userType] = jsonArray;
            Apply();

            // Successful login
            qDebug() << userName << "successfully logged in as" << name << Qt::endl;
            result.isAdmin = (userType == "admins");
            result.pass = true; // Login successful
            result.message = QString("%1 successfully logged in as %2.").arg(userName).arg(name);
            return result;
        }
    }

    // User not found in the database
    qDebug() << "Unexpected error: User not found in " << userType << " database...." << Qt::endl;
    result.isAdmin = false;
    result.pass = false; // Login failed
    result.message = QString("Unexpected error: User not found in %1 database.").arg(userType);
    return result;
}







/**
 * @brief BankDataBase::GetAccountnumber fetches the account Number of requested UserName who is Logged in the system
 * @param username
 */
QString BankDataBase::GetAccountnumber(QString userName)
{
    // must be user and Logged in to be able to execute the function;

    if(isAdmin(userName))
    {
        qDebug() << "Permission Denied Only users Have the privilege of such feature........"<<Qt::endl;
        return "Permission Denied Only users Have the privilege of such feature........";
    }

    if(!isLoggedIn(userName))
    {
        qDebug() << "Permission Denied Only users who are logged in Have the privilege of such feature........"<<Qt::endl;
        return "Permission Denied Only users who are logged in Have the privilege of such feature........";
    }

        QString accountNumber = "";
        QString key = "users";
        qint32 userIndex  = 0;
        QJsonArray jsonArray = _DataBase[userIndex][key].toArray();
        if (jsonArray.isEmpty()) {
            qDebug().noquote() << "There are No users in the System...." << Qt::endl;
            return "There are No users in the System....";
        }
        for (const auto& obj : jsonArray) {
            QJsonObject userObject = obj.toObject();
            // Extract the user Name, to check weather the user is the correct user OR not
            QString Extractedusername = userObject["username"].toString();
            if(Extractedusername == userName)
            {
                accountNumber = userObject["account_number"].toString();
                qDebug().noquote() << "User Name " << userName <<" His Account Number -> " << accountNumber <<Qt::endl;
                QString res = QString("User Name : %1   -  Account Number -> %2").arg(userName).arg(accountNumber);
                return res;
            }
        }

        return "Could't get the Account Number";




}







/**
 * @brief BankDataBase::GetAccountnumberByAdmin fetches the account Number of requested  UserName who is Logged in the system
 * and only admin has the previlage to execute this function
 * @param adminUserName
 * @param username
 * @return
 */

QString BankDataBase::GetAccountnumberByAdmin(QString adminUserName, QString username)
{

    if(isAdmin(username))
    {
        return "Admin can not view the account number of other admins";
    }

    if(!isLoggedIn(username))
    {
        return "User should be logged In......";
    }

    if(!isAdmin(adminUserName))
    {

        return "This feature is avalabile to admins Only......";
    }



    QString accountNumber = "";
    QString key = "users";
    qint32 userIndex  = 0;
    QJsonArray jsonArray = _DataBase[userIndex][key].toArray();
    if (jsonArray.isEmpty()) {
        qDebug().noquote() << "There are No users in the System...." << Qt::endl;
        return "There are No users in the System....";
    }
    for (const auto& obj : jsonArray) {
        QJsonObject userObject = obj.toObject();
        // Extract the userName, to check weather the user is the correct user OR not
        QString Extractedusername = userObject["username"].toString();
        if(Extractedusername == username)
        {
            accountNumber = userObject["account_number"].toString();
            QString res = "Account Number => " + accountNumber;
            return res;
        }
    }


    return "Could not get account number";

}



/**
 * @brief BankDataBase::ViewAccountbalance Return
 * @param accountnumber
 * @return the balance amount of a given account number
 */

double BankDataBase::ViewAccountbalance(QString account_number)
{

    QString key = "users";
    qint32 userIndex  = 0;
    QJsonArray jsonArray = _DataBase[userIndex][key].toArray();
    if (jsonArray.isEmpty()) {
        qDebug().noquote() << "There are No users in the System...." << Qt::endl;
        return -1;
    }
    for (const auto& obj : jsonArray) {
        QJsonObject userObject = obj.toObject();
        // Extract the userName, to check weather the user is the correct user OR not
        QString ExtractedAccountNumber = userObject["account_number"].toString();
        if(ExtractedAccountNumber == account_number)
        {
            double userbalance = userObject["balance"].toDouble();
            return userbalance;
        }
    }

    qDebug().noquote() << "This account number is not registered in the system....." << Qt::endl;
    return -1;

}


/**
 * @brief BankDataBase::Viewtransactionhistory Display a number of transactions based on the count sorted by date from newest to oldest.
 * @param account_number
 * @param count
 * @return string containing the Transactions
 */
QString BankDataBase::Viewtransactionhistory(QString account_number, qint32 count) {
    qint32 maxShownTransactions = count;

    // Check if account exists
    if (!doesAccountExists(account_number)) {
        return "User does not exist.";
    }

    QString key = "users";
    qint32 userIndex = 0;
    QString result = "";
    QJsonArray jsonArray = _DataBase[userIndex][key].toArray();

    // Check if user array is empty
    if (jsonArray.isEmpty()) {
        return "There are no users in the system.";
    }

    for (const auto& obj : jsonArray) {
        QJsonObject userObject = obj.toObject();
        QString extractedAccountNumber = userObject["account_number"].toString();

        // Match account number
        if (extractedAccountNumber == account_number) {
            QJsonArray transactionArray = userObject["transactions"].toArray();

            // Check if user has transactions
            if (transactionArray.isEmpty()) {
                return "This user does not have any transactions.";
            }

            // Convert QJsonArray to QVector<QJsonObject> for sorting
            //why
            // because vector has a built in sort algorthim
            QVector<QJsonObject> transactions;
            for (const auto& transaction : transactionArray) {
                transactions.append(transaction.toObject());
            }

            // Sort transactions by date (newest to oldest)
            // Sort transactions by date (newest to oldest)
            // lamda experssion takes two objects and convert them to Data type for comparsion and return newest

            std::sort(transactions.begin(), transactions.end(), [](const QJsonObject& a, const QJsonObject& b) {
                QDate dateA = QDate::fromString(a["date"].toString(), "yyyy-MM-dd");
                QDate dateB = QDate::fromString(b["date"].toString(), "yyyy-MM-dd");
                return dateA > dateB; // Newest first
            });

            if (maxShownTransactions > transactions.size() || maxShownTransactions < 1) {
                maxShownTransactions = transactions.size();
            }

            // Create tabular format with headers
            result += QString("%1 | %2\n").arg("Date", -21).arg("Amount", -21);
            result += QString("%1-|-%2\n").arg(QString(17, '-')).arg(QString(17, '-'));

            for (qint32 i = 0; i < maxShownTransactions; i++) {
                const QJsonObject& transactionObj = transactions[i];
                QString dateOfTransaction = transactionObj["date"].toString();
                double transactionalAmount = transactionObj["amount"].toDouble();

                result += QString("%1 | %2\n")
                              .arg(dateOfTransaction, -15)
                              .arg(QString::number(transactionalAmount, 'f', 2), -15);
            }

            return result;
        }
    }

    return "No transactions available.";
}




QString BankDataBase::generateRandomBarCode()
{
    QString randomNumber;
    QString bar_code;
    for (int i = 0; i <= 9; i++) { // Changed to < length for 9 digits
        randomNumber = QString::number(QRandomGenerator::global()->bounded(0, 10)); // Generate a digit between 0 and 9
        bar_code.append(randomNumber);
        // bar_code += randomNumber;
    }

    return bar_code;

}



/**
 * @brief BankDataBase::MakeTransaction if transaction amount postive(credits) always succeed.
 * if if transaction amount negative(debits) succeed only if the balance is sufficient.
 *  The function ensures that accounts never have a negative balance.
 * @param account_number
 * @param transactionamount
 * @return bool
 */

QJsonArray BankDataBase::returnUpdatedTransactions(QJsonArray &transaction_array, double transactionamount)
{
    QJsonObject newTransactionObject;

    newTransactionObject["amount"] = transactionamount;
    // Get the current date in "yyyy-MM-dd" format
    QString currentDate = QDate::currentDate().toString("yyyy-MM-dd");
    newTransactionObject["date"] = currentDate;
    newTransactionObject["transactionId"] = generateRandomBarCode();


    // requirment to place a transaction Id


    // transactions are inserted in the database based on the newest to oldest
    // so it was placed at first place
    transaction_array.insert(0,newTransactionObject);
    return transaction_array;

}






/**
 * @brief BankDataBase::MakeTransaction complete a transaction if the transaction is possible
 * @param account_number
 * @param transactionamount
 * @return bool status of transaction 1 sucssed 0 fail
 */
QString BankDataBase::MakeTransaction(QString account_number, double transactionamount)
{
    Refresh(); // Load the latest data from the file into _DataBase
    QString key = "users";
    qint32 userIndex = 0;
    QJsonArray jsonArray = _DataBase[userIndex][key].toArray();

    qDebug() << "The transaction amount -> " << transactionamount << Qt::endl;

    // Check if the account exists
    if (!doesAccountExists(account_number)) {
        qDebug() << "Account Number does not Exists." << Qt::endl;
        return "Account Number does not Exists";
    }

    // Check if there are users in the system
    if (jsonArray.isEmpty()) {
        qDebug().noquote() << "There are No users in the System...." << Qt::endl;
        return "There are No users in the System....";
    }

    // Iterate through users to find the matching account number
    for (qint32 i = 0; i < jsonArray.size(); ++i) {
        QJsonObject userObject = jsonArray[i].toObject();
        QString ExtractedAccountNumber = userObject["account_number"].toString();

        if (ExtractedAccountNumber == account_number) {
            double userbalance = userObject["balance"].toDouble();
            qDebug() << "Current user balance:" << userbalance << Qt::endl;

            if (transactionamount < 0) {
                // Negative transaction (withdrawal)
                double withdrawalAmount = abs(transactionamount);
                if (userbalance >= withdrawalAmount) {
                    userObject["balance"] = userbalance - withdrawalAmount;
                    qDebug() << "Withdrawal successful. New balance:" << userObject["balance"].toDouble() << Qt::endl;
                } else {
                    qDebug() << "Insufficient Funds....." << Qt::endl;
                    return "Insufficient Funds.....";
                }
            } else {
                // Positive transaction (deposit)
                userObject["balance"] = userbalance + transactionamount;
                qDebug() << "Deposit successful. New balance:" << userObject["balance"].toDouble() << Qt::endl;
            }

            // Handle transactions array
            QJsonArray TransactionalArray = userObject["transactions"].toArray();
            userObject["transactions"] = returnUpdatedTransactions(TransactionalArray, transactionamount);

            // Update the modified userObject back into the jsonArray
            jsonArray[i] = userObject;

            // Reflect the updated jsonArray back into _DataBase
            _DataBase[userIndex][key] = jsonArray;

            // Save the updated _DataBase back to the file
            Apply();
            return QString("Balance updated successfully\nUser's new balance: %1").arg(userObject["balance"].toDouble());
        }
    }

    // If the account number is not found
    return "Account number was not found.";
}


/**
 * @brief BankDataBase::TransferAmount transfers an amount of money from account a to account b only if a has the suffucent funds and updates the Transaction history
 * @param from_Account
 * @param to_Account
 * @param Transfer_amount
 * @return
 */
QString BankDataBase::TransferAmount(QString from_Account, QString to_Account, double Transfer_amount)
{
    Refresh(); // Load the latest data from the file into _DataBase
    QString key = "users";
    qint32 userIndex = 0;
    QJsonArray jsonArray = _DataBase[userIndex][key].toArray();



    // every time a transfer happens the transactions of both the transferor and transferee gets updated
    // Transferor (Sender): The account that sends money.
    // Transferee (Receiver): The account that receives money.

    if (jsonArray.isEmpty()) {
        qDebug().noquote() << "There are No users in the System...." << Qt::endl;
        return "There are No users in the System....";
    }

    if(from_Account == to_Account)
    {
        return "user Can not use this method to transfer money to himself.....";
    }

    if (!doesAccountExists(from_Account)) {
        qDebug() << "The account initiating the transfer does not exist." << Qt::endl;
        return "The account initiating the transfer does not exist.";
    }

    if (!doesAccountExists(to_Account)) {
        qDebug() << "The receiver account does not exist." << Qt::endl;
        return "The receiver account does not exist.";
    }
    if(Transfer_amount == 0)
    {
        return "Transfer amount Must not be zero";
    }

    if (Transfer_amount <= 0) {
        qDebug() << "The transferred amount should be positive." << Qt::endl;
        return "The transferred amount should be positive.";
    }

    // Process the sender (from_Account)
    bool senderProcessed = false;
    bool receiverProcessed = false;

    for (qint32 i = 0; i < jsonArray.size(); ++i) {
        QJsonObject userObject = jsonArray[i].toObject();
        QString accountNumber = userObject["account_number"].toString();

        if (accountNumber == from_Account) {
            double senderBalance = userObject["balance"].toDouble();

            if (Transfer_amount > senderBalance) {
                qDebug() << "Operation failed due to insufficient funds." << Qt::endl;
                return "Operation failed due to insufficient funds.";
            }

            // Deduct the amount from the sender's balance
            userObject["balance"] = senderBalance - Transfer_amount;

            // Update sender's transactions
            QJsonArray senderTransactions = userObject["transactions"].toArray();
            userObject["transactions"] = returnUpdatedTransactions(senderTransactions, -Transfer_amount);

            // Update the sender in the array
            jsonArray[i] = userObject;
            senderProcessed = true;
        }
    }

    // Process the receiver (to_Account)
    for (qint32 i = 0; i < jsonArray.size(); ++i) {
        QJsonObject userObject = jsonArray[i].toObject();
        QString accountNumber = userObject["account_number"].toString();

        if (accountNumber == to_Account) {
            double receiverBalance = userObject["balance"].toDouble();

            // Add the amount to the receiver's balance
            userObject["balance"] = receiverBalance + Transfer_amount;

            // Update receiver's transactions
            QJsonArray receiverTransactions = userObject["transactions"].toArray();
            userObject["transactions"] = returnUpdatedTransactions(receiverTransactions, Transfer_amount);

            // Update the receiver in the array
            jsonArray[i] = userObject;
            receiverProcessed = true;
        }
    }

    // If either sender or receiver wasn't processed, return an error
    // if one of both proccess fails the entire proccess fails to ensure atomicty
    if (!senderProcessed || !receiverProcessed) {
        return "Error: One or both accounts could not be processed.";
    }

    // Reflect the updated jsonArray back into _DataBase
    _DataBase[userIndex][key] = jsonArray;

    // Save changes to the database
    Apply();

    qDebug() << "Money transferred from account:" << from_Account << "to account:" << to_Account << "successfully." << Qt::endl;
    return QString("Money transferred from account: %1 to account: %2 successfully.").arg(from_Account).arg(to_Account);
}


QString BankDataBase::DeleteUser(QString adminUserName, QString account_Number)
{
    // Verify if the requester is an admin
    if (!isAdmin(adminUserName)) {
        qDebug() << "Only Admins can delete Users......" << Qt::endl;
        return "Error: Only Admins can delete Users.";
    }

    // Check if the account exists
    if (!doesAccountExists(account_Number)) {
        qDebug() << "This account is not registered in the database......" << Qt::endl;
        return "Error: This account is not registered in the database.";
    }

    QString key = "users";
    qint32 userIdx = 0;

    QJsonArray jsonArray = _DataBase[userIdx][key].toArray();

    if (jsonArray.isEmpty()) {
        qDebug().noquote() << "There are no users in the system...." << Qt::endl;
        return "Error: There are no users in the system.";
    }

    // Iterate through the user array and remove the matching account
    for (qint32 i = 0; i < jsonArray.size(); ++i) {
        QJsonObject userObj = jsonArray[i].toObject();
        QString ExtractedAccountNumber = userObj["account_number"].toString();

        if (ExtractedAccountNumber == account_Number) {
            jsonArray.removeAt(i); // Remove the user from the array
            _DataBase[userIdx][key] = jsonArray; // Update the database
            Apply(); // Save changes to the file

            qDebug().noquote() << "User with account number " << account_Number << " has been successfully deleted." << Qt::endl;
            return QString("Success: User with account number %1 has been successfully deleted.").arg(account_Number);
        }
    }

    // If we reach here, something unexpected happened
    qDebug() << "Unexpected error: User not deleted." << Qt::endl;
    return "Error: Unable to delete the user due to an unexpected issue.";
}



/**
 * @brief BankDataBase::UpdateUser updates the data of the user where it only updates the data sent from the user
 * @param adminUserName The admin's username.
 * @param accountNumber The account number of the user to be updated.
 * @param newData A JSON string containing the updated fields.
 * @return QString A message indicating whether the update was successful or not.
 */
QString BankDataBase::UpdateUser(QString adminUserName, QString accountNumber, QString newData)
{
    // Check if the requester is an admin
    if (!isAdmin(adminUserName)) {
        qDebug() << "Only Admins can update user information......" << Qt::endl;
        return "Only Admins can update user information...";
    }

    // Check if the account exists
    if (!doesAccountExists(accountNumber)) {
        qDebug() << "This account is not registered in the database......" << Qt::endl;
        return "This account is not registered in the database...";
    }

    // Parse newData into a QJsonObject
    QJsonDocument newDoc = QJsonDocument::fromJson(newData.toUtf8());
    if (newDoc.isNull() || !newDoc.isObject()) {
        qDebug() << "Invalid JSON data provided for the update......" << Qt::endl;
        return "Invalid JSON data provided for the update...";
    }
    QJsonObject newFields = newDoc.object();

    QString key = "users";
    qint32 userIdx = 0;

    QJsonArray jsonArray = _DataBase[userIdx][key].toArray();

    if (jsonArray.isEmpty()) {
        qDebug().noquote() << "There are no users in the system...." << Qt::endl;
        return "There are no users in the system...";
    }

    for (qint32 i = 0; i < jsonArray.size(); ++i) {
        QJsonObject userObj = jsonArray[i].toObject();
        QString ExtractedAccountNumber = userObj["account_number"].toString();

        if (ExtractedAccountNumber == accountNumber) {
            // Update the fields provided in newData
            for (const QString& field : newFields.keys()) {
                userObj[field] = newFields[field];
            }

            // Update the user in the array
            jsonArray[i] = userObj;

            // Reflect the updated array back into the database
            _DataBase[userIdx][key] = jsonArray;
            Apply();

            qDebug().noquote() << "User with account number " << accountNumber
                               << " has been successfully updated." << Qt::endl;
            return "User with account number " + accountNumber + " has been successfully updated.";
        }
    }

    // Account not found
    qDebug().noquote() << "No matching account found for the update...." << Qt::endl;
    return "No matching account found for the update...";
}





/**
 * @brief BankDataBase::CreateNewUser Create a new user and insert the newly created user in the database
 * @param adminUserName Name of the admin making the request
 * @param userdata JSON-formatted string containing user details
 * @return QString Message indicating success or failure
 */
QString BankDataBase::CreateNewUser(QString adminUserName, QString userdata)
{
    // Check if the requester is an admin
    if (!isAdmin(adminUserName)) {
        qDebug() << "Only Admins can create new users......" << Qt::endl;
        return "Error: Only admins can create new users.";
    }

    // Parse userdata into a QJsonObject
    QJsonDocument newDoc = QJsonDocument::fromJson(userdata.toUtf8());
    if (newDoc.isNull() || !newDoc.isObject()) {
        qDebug() << "Invalid JSON data provided for new user creation......" << Qt::endl;
        return "Error: Invalid JSON data provided for new user creation.";
    }
    QJsonObject newUserObject = newDoc.object();

    // Ensure essential fields exist
    if (!newUserObject.contains("username") || !newUserObject.contains("password") ||
        !newUserObject.contains("account_number") || !newUserObject.contains("balance")) {
        qDebug() << "Essential fields missing in userdata. Please provide 'username', 'password', 'account_number', and 'balance'." << Qt::endl;
        return "Error: Missing essential fields. Please provide 'username', 'password', 'account_number', and 'balance'.";
    }

    QString newAccountNumber = newUserObject["account_number"].toString();
    QString newUserName = newUserObject["username"].toString();



    if(isAdmin(newUserName))
    {
        qDebug() << "Error: A user with the has a user name that is does not match user previlages...." << Qt::endl;
        return "Error: the  user name that was submitted  does not match user previlages....";
    }


    // Check if the username already exists
    if (doesUserorAdminExist(newUserName) && !isAdmin(newUserName))
    {
        qDebug() << "A user with the provided username already exists......" << Qt::endl;
        return "Error: A user with the provided username already exists.";
    }



    // Check if the account already exists
    if (doesAccountExists(newAccountNumber)) {
        qDebug() << "An account with the provided account number already exists......" << Qt::endl;
        return "Error: An account with the provided account number already exists.";
    }

    // Add default fields if not provided
    if (!newUserObject.contains("is_logged_in")) {
        newUserObject["is_logged_in"] = false;
    }
    if (!newUserObject.contains("transactions")) {
        newUserObject["transactions"] = QJsonArray();
    }

    QString key = "users";
    qint32 userIdx = 0;

    QJsonArray jsonArray = _DataBase[userIdx][key].toArray();
    jsonArray.append(newUserObject);

    // Reflect the updated array back into the database
    _DataBase[userIdx][key] = jsonArray;
    Apply();

    qDebug().noquote() << "New user with account number " << newAccountNumber
                       << " has been successfully created." << Qt::endl;

    return QString("Success: New user with account number %1 has been successfully created.").arg(newAccountNumber);
}












/**

"account_number": "ACC1001",
"balance": 5000,
"is_logged_in": false,
"password": "securePass123",
"transactions": [
             {
                 "amount": -200,
                 "date": "2024-11-26"
             },
             {
                 "amount": 1000,
                 "date": "2024-11-20"
             }
          ],
 "username": "john_doe"

**/


/**
 * @brief BankDataBase::ShowDataBaseUsers
 * Display all Info about the users in tabular Formatt
 */

QString BankDataBase::ViewBankDataBase(QString userName)
{
    if (!isAdmin(userName)) {
        qDebug() << "User does not have the privilege to access this method" << Qt::endl;
        return "User does not have the privilege to access this method";
    }

    QJsonArray usersArray = _DataBase[0]["users"].toArray();

    // Check if the array is empty
    if (usersArray.isEmpty()) {
        qDebug().noquote() << "There are no users in the system...." << Qt::endl;
        return "There are no users in the system....";
    }

    QString result;
    QTextStream stream(&result);

    // Add table headers
    stream << QString("Username").leftJustified(15)
           << QString("Password").leftJustified(15)
           << QString("Account Number").leftJustified(20)
           << QString("Balance").rightJustified(10)
           << QString("Is Logged In").rightJustified(15)
           << "Transactions\n";

    stream << QString("-").repeated(80) << "\n"; // Separator line

    // Iterate through each user in the array
    for (int i = 0; i < usersArray.size(); ++i) {
        QJsonObject userObject = usersArray[i].toObject();

        // Extract user data
        QString username = userObject["username"].toString();
        QString password = userObject["password"].toString();
        QString accountNumber = userObject["account_number"].toString();
        double balance = userObject["balance"].toDouble();
        bool isLoggedIn = userObject["is_logged_in"].toBool();
        QJsonArray transactionsArray = userObject["transactions"].toArray();

        // Add user data to the table
        stream << username.leftJustified(15)
               << password.leftJustified(15)
               << accountNumber.leftJustified(20)
               << QString::number(balance, 'f', 2).rightJustified(10)
               << QString(isLoggedIn ? "Yes" : "No").rightJustified(15);

        // Add transactions as a sublist
        if (!transactionsArray.isEmpty()) {
            stream << "\n  Transactions:\n";
            for (int j = 0; j < transactionsArray.size(); ++j) {
                QJsonObject transactionObj = transactionsArray[j].toObject();
                QString dateOfTransaction = transactionObj["date"].toString();
                double transactionalAmount = transactionObj["amount"].toDouble();
                QString TransactionID = transactionObj["transactionId"].toString();

                stream << "    - Date: " << dateOfTransaction
                       << ", Amount: " << QString::number(transactionalAmount, 'f', 2)
                       << ", Transaction Id " << TransactionID
                       << "\n";
            }
        } else {
            stream << "\n  No Transactions\n";
        }

        stream << "\n"; // Separate users for readability
    }

    // Debug the human-readable table format
    qDebug().noquote() << "Users Table:\n" << result;

    return "Users Table:\n" + result;
}








































