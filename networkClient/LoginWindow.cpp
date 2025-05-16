#include "LoginWindow.h"
#include "AdminDashBoard.h"
#include "ui_LoginWindow.h"




LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::LoginWindow) , client("0.0.0.0",0)
{
    ui->setupUi(this);
    connect(&client,&Client::sendConnected,this,&LoginWindow::recieveConnected);
    connect(&client,&Client::sendDisconnected,this,&LoginWindow::recieveDisconnected);
    connect(&client,&Client::sendErrorOccurred,this,&LoginWindow::recieveErrorOccurred);
    connect(&client,&Client::sendStateChanged,this,&LoginWindow::recieveStateChanged);
    connect(&client,&Client::sendReadyRead,this,&LoginWindow::recieveReadyRead);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}






void LoginWindow::on_Connect_pushButton_clicked()
{
    QString ip  = ui->IP_lineEdit_Login->text();
    qint32  port = ui->Port_lineEdit_Login->text().toInt();
    client.ConnectToHost(ip , port);


}


void LoginWindow::on_Disconnect_pushButton_clicked()
{
   client.DisconnectFromHost();
}




/**
 * @brief LoginWindow::on_pb_LogIn_clicked Recieves a userName and a password and request the server to log in the user if Registered in the system
 *
 */

void LoginWindow::on_LoginBtn_loginPage_pushButton_clicked()
{
    QString user_password = ui->Password_logIn_LE_2->text();
    QString userName  = ui->userName_logIN_LE_2->text();
    QString command  = "Login";

    if (userName.isEmpty()) {
        QMessageBox::warning(this, "LogIn", "User name is required to Successfully Login.");
        return;
    }

    if (user_password.isEmpty()) {
        QMessageBox::warning(this, "LogIn", "User Pssword is required to Successfully Login.");
        return;
    }

    client.sendRequest(userName,user_password,command);


    ui->userName_logIN_LE_2->clear();
    ui->Password_logIn_LE_2->clear();

}



void LoginWindow::recieveConnected()
{
    ui->listWidgetConsole_2->addItem("Connected to Server......");
}



// responsible for connections Status
void LoginWindow::recieveDisconnected()
{
    ui->listWidgetConsole_2->addItem("Disconnected From Server......");
}



/**
 * @brief LoginWindow::recieveReadyRead
 * @param data
 * Checks the user Whether he is an admin or normal User and Directs based on the previous information
 */
void LoginWindow::recieveReadyRead(QString data)
{

    QJsonDocument doc = QJsonDocument::fromJson(data.toUtf8());
    QJsonObject obj = doc.object();
    bool isAdmin = obj["isAdmin"].toBool();
    bool Shouldpass = obj["pass"].toBool();
    QString message = obj["message"].toString();


    // Check login status
    if (Shouldpass && !isAdmin) {
        // Navigate to MainWindow (User DashBoard)
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show(); // Show the main window
        client.DisconnectFromHost();
        this->close(); // Close the LoginWindow
    } else if (Shouldpass && isAdmin) {
        // Navigate to Admin Dashboard (for Preivileage feautures)
        AdminDashBoard *admin = new AdminDashBoard();
        admin->show();
        client.DisconnectFromHost();
        this->close(); // Close the LoginWindow
    }
    else
    {
        ui->listWidget_RecieveLoginStatus->addItem(message);
    }
}

void LoginWindow::recieveErrorOccurred(QAbstractSocket::SocketError error)
{
    // this procces is to convert an enum to a string
    // using MetaEnum libary as i a have to display to the Gui string data
    QMetaEnum errorObject = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    QString errorString = errorObject.valueToKey(error);
    ui->listWidgetConsole_2->addItem(errorString);

}

void LoginWindow::recieveStateChanged(QAbstractSocket::SocketState state)
{
    QMetaEnum stateObject = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    QString stateStringData = stateObject.valueToKey(state);
    ui->listWidgetConsole_2->addItem(stateStringData);

}
