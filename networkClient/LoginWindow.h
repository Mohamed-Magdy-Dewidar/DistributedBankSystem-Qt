#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "mainwindow.h"
#include "Client.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();


public slots:
    void recieveConnected();
    void recieveDisconnected();
    void recieveReadyRead(QString data);
    void recieveErrorOccurred(QAbstractSocket::SocketError error);
    void recieveStateChanged(QAbstractSocket::SocketState state);


private slots:
    void on_LoginBtn_loginPage_pushButton_clicked();

    void on_Connect_pushButton_clicked();

    void on_Disconnect_pushButton_clicked();

private:
    Ui::LoginWindow *ui;
    bool isAdmin(const QString &username, const QString &password);
    Client client;
};

#endif // LOGINWINDOW_H
