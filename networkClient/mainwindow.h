#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Client.h>
#include <QThread>
#include <QMap>
#include <QMessageBox>

// for converting enums to string;

#include <QMetaEnum>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void intializeCommands();
    ~MainWindow();

private slots:
    void on_Connect_pushButton_clicked();

    // will be responsible for exiting the application
    void on_Disconnect_pushButton_clicked();

    void on_pbSend_clicked();

    void on_pb_getAccountNumber_clicked();

    void on_pb_LogIn_clicked();

    void on_pb_View_bank_database_clicked();


    void on_pb_getAccountNumber_byADMIN_clicked();


    void on_pb_view_transactions_history_clicked();

    void on_pb_view_account_balance_clicked();

    void on_pb_Make_a_Transaction_clicked();

    void on_pb_WireTrasnfer_clicked();

    void on_pb_DeleteUser_clicked();



    void on_pb_CreateNewUser_clicked();

    void on_pb_UpdateUserData_clicked();

    void on_pbExist_clicked();

public slots:
    void recieveConnected();
    void recieveDisconnected();
    void recieveReadyRead(QString data);
    void recieveErrorOccurred(QAbstractSocket::SocketError error);
    void recieveStateChanged(QAbstractSocket::SocketState state);

private:
    Ui::MainWindow *ui;
    Client client;
    QMap<QString,QString> CommandsHashmap;
};
#endif // MAINWINDOW_H
