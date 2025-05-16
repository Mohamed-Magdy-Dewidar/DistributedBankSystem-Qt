/********************************************************************************
** Form generated from reading UI file 'AdminDashBoard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASHBOARD_H
#define UI_ADMINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDashBoard
{
public:
    QWidget *centralwidget;
    QGroupBox *sysGroup;
    QLabel *IP_Lb_2;
    QLabel *Port_LB_2;
    QLineEdit *Port_lineEdit_2;
    QPushButton *Connect_pushButton_2;
    QPushButton *Disconnect_pushButton_2;
    QLabel *MessageLB_2;
    QLineEdit *MessageLE_2;
    QPushButton *pbSend_2;
    QLineEdit *IP_lineEdit_2;
    QLabel *Bank_System_LB;
    QLabel *Connection_Status_LB;
    QGroupBox *AppGroup;
    QLabel *Admin_User_Name_View_Bank_Database_Lb_2;
    QLineEdit *Admin_user_Name_view_database_LE_2;
    QPushButton *pb_View_bank_database_2;
    QLabel *Admin_User_Name_get_account_number_by_admin_Lb_2;
    QLineEdit *Admin_User_Name_get_account_number_by_admin_LE_2;
    QLabel *User_Name_getAccount_number_admin_Lb_2;
    QLineEdit *userName_getAccount_Number_by_admin_LE_2;
    QPushButton *pb_getAccountNumber_byADMIN_2;
    QLabel *accNumber_transaction_history_Lb_2;
    QLineEdit *maxCount_transaction_history_LE_2;
    QLineEdit *accNumber_transaction_history_LE_2;
    QLabel *maxCount_transaction_history_Lb_2;
    QPushButton *pb_view_transactions_history_2;
    QPushButton *pb_view_account_balance_2;
    QLabel *accNumber_view_balance_Lb_2;
    QLineEdit *accNumber_view_balance_LE_2;
    QLabel *amount_of_transaction_Lb_2;
    QLabel *accNumber_make_transaction_Lb_2;
    QLineEdit *amount_of_transaction_LE_2;
    QLineEdit *accNumber_make_transaction_LE_2;
    QPushButton *pb_Edit_user_Balance;
    QLabel *Admin_User_Name_deleteUser_Lb_2;
    QPushButton *pb_DeleteUser_2;
    QLabel *Account_number_toDelete_user_LB_2;
    QLineEdit *Account_number_toDelete_user_LE_2;
    QLineEdit *Admin_User_Name_deleteUser_LE_2;
    QLabel *User_Account_number_CreateNewUser_LB_2;
    QLineEdit *User_Account_number_CreateNewUser_LE_2;
    QLineEdit *User_Password_CreateNewUser_LE_2;
    QLabel *User_Password_CreateNewUser_Lb_2;
    QLabel *User_Name_CreateNewUser_Lb_2;
    QLineEdit *User_Name_CreateNewUser_LE_2;
    QLabel *Admin_User_Name_CreateNewUser_Lb_2;
    QLineEdit *Admin_User_Name_CreateNewUser_LE_2;
    QLineEdit *Balance_CreateNewUser_LE_2;
    QLabel *Balance_CreateNewUser_LB_2;
    QPushButton *pb_CreateNewUser_2;
    QLabel *Admin_User_Name_UpdateUser_Lb_2;
    QLabel *User_Name_UpdateUser_LB_2;
    QLineEdit *Admin_User_Name_UpdateUser_LE_2;
    QLineEdit *User_Name_UpdateUser_LE_2;
    QLineEdit *Password_UpdateUser_LE_2;
    QLabel *Password_UpdateUser_LB_2;
    QLineEdit *Balance_UpdateUser_LE_2;
    QLineEdit *Account_number_UpdateUser_LE_2;
    QLabel *Account_number_UpdateUser_LB_2;
    QLabel *Balance_UpdateUser_LB_2;
    QPushButton *pb_UpdateUserData_2;
    QGroupBox *RecivedData;
    QListWidget *listWidgetRecievedData_adminPage;
    QPushButton *pbClearRecievedData_2;
    QPushButton *pbExist_2;
    QLabel *Establishing_Connection_LB;
    QGroupBox *ConsoleData;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidgetConsole_2;
    QPushButton *pbClearConsole_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminDashBoard)
    {
        if (AdminDashBoard->objectName().isEmpty())
            AdminDashBoard->setObjectName("AdminDashBoard");
        AdminDashBoard->resize(1767, 1102);
        AdminDashBoard->setMinimumSize(QSize(0, 661));
        centralwidget = new QWidget(AdminDashBoard);
        centralwidget->setObjectName("centralwidget");
        sysGroup = new QGroupBox(centralwidget);
        sysGroup->setObjectName("sysGroup");
        sysGroup->setGeometry(QRect(0, 50, 331, 511));
        sysGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 46, 0);"));
        IP_Lb_2 = new QLabel(sysGroup);
        IP_Lb_2->setObjectName("IP_Lb_2");
        IP_Lb_2->setGeometry(QRect(20, 40, 131, 41));
        IP_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Port_LB_2 = new QLabel(sysGroup);
        Port_LB_2->setObjectName("Port_LB_2");
        Port_LB_2->setGeometry(QRect(20, 100, 131, 41));
        Port_LB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Port_lineEdit_2 = new QLineEdit(sysGroup);
        Port_lineEdit_2->setObjectName("Port_lineEdit_2");
        Port_lineEdit_2->setGeometry(QRect(180, 100, 131, 41));
        Port_lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Port_lineEdit_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Connect_pushButton_2 = new QPushButton(sysGroup);
        Connect_pushButton_2->setObjectName("Connect_pushButton_2");
        Connect_pushButton_2->setGeometry(QRect(30, 160, 261, 41));
        Connect_pushButton_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        Disconnect_pushButton_2 = new QPushButton(sysGroup);
        Disconnect_pushButton_2->setObjectName("Disconnect_pushButton_2");
        Disconnect_pushButton_2->setGeometry(QRect(30, 210, 261, 41));
        Disconnect_pushButton_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        MessageLB_2 = new QLabel(sysGroup);
        MessageLB_2->setObjectName("MessageLB_2");
        MessageLB_2->setGeometry(QRect(30, 260, 261, 41));
        MessageLB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        MessageLE_2 = new QLineEdit(sysGroup);
        MessageLE_2->setObjectName("MessageLE_2");
        MessageLE_2->setGeometry(QRect(30, 310, 261, 111));
        MessageLE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        MessageLE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pbSend_2 = new QPushButton(sysGroup);
        pbSend_2->setObjectName("pbSend_2");
        pbSend_2->setGeometry(QRect(30, 430, 261, 41));
        pbSend_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        IP_lineEdit_2 = new QLineEdit(sysGroup);
        IP_lineEdit_2->setObjectName("IP_lineEdit_2");
        IP_lineEdit_2->setGeometry(QRect(180, 40, 131, 41));
        IP_lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        IP_lineEdit_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Bank_System_LB = new QLabel(centralwidget);
        Bank_System_LB->setObjectName("Bank_System_LB");
        Bank_System_LB->setGeometry(QRect(340, 0, 1081, 41));
        Bank_System_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 54, 63);\n"
"font: 24pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        Connection_Status_LB = new QLabel(centralwidget);
        Connection_Status_LB->setObjectName("Connection_Status_LB");
        Connection_Status_LB->setGeometry(QRect(1430, 0, 251, 41));
        Connection_Status_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 54, 63);\n"
"color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Segoe UI\";"));
        AppGroup = new QGroupBox(centralwidget);
        AppGroup->setObjectName("AppGroup");
        AppGroup->setGeometry(QRect(330, 50, 1091, 511));
        AppGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 46, 0);"));
        Admin_User_Name_View_Bank_Database_Lb_2 = new QLabel(AppGroup);
        Admin_User_Name_View_Bank_Database_Lb_2->setObjectName("Admin_User_Name_View_Bank_Database_Lb_2");
        Admin_User_Name_View_Bank_Database_Lb_2->setGeometry(QRect(10, 190, 131, 51));
        Admin_User_Name_View_Bank_Database_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Admin_user_Name_view_database_LE_2 = new QLineEdit(AppGroup);
        Admin_user_Name_view_database_LE_2->setObjectName("Admin_user_Name_view_database_LE_2");
        Admin_user_Name_view_database_LE_2->setGeometry(QRect(150, 190, 111, 51));
        Admin_user_Name_view_database_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Admin_user_Name_view_database_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pb_View_bank_database_2 = new QPushButton(AppGroup);
        pb_View_bank_database_2->setObjectName("pb_View_bank_database_2");
        pb_View_bank_database_2->setGeometry(QRect(10, 260, 251, 51));
        pb_View_bank_database_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        Admin_User_Name_get_account_number_by_admin_Lb_2 = new QLabel(AppGroup);
        Admin_User_Name_get_account_number_by_admin_Lb_2->setObjectName("Admin_User_Name_get_account_number_by_admin_Lb_2");
        Admin_User_Name_get_account_number_by_admin_Lb_2->setGeometry(QRect(10, 20, 131, 41));
        Admin_User_Name_get_account_number_by_admin_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Admin_User_Name_get_account_number_by_admin_LE_2 = new QLineEdit(AppGroup);
        Admin_User_Name_get_account_number_by_admin_LE_2->setObjectName("Admin_User_Name_get_account_number_by_admin_LE_2");
        Admin_User_Name_get_account_number_by_admin_LE_2->setGeometry(QRect(150, 20, 111, 41));
        Admin_User_Name_get_account_number_by_admin_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Admin_User_Name_get_account_number_by_admin_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        User_Name_getAccount_number_admin_Lb_2 = new QLabel(AppGroup);
        User_Name_getAccount_number_admin_Lb_2->setObjectName("User_Name_getAccount_number_admin_Lb_2");
        User_Name_getAccount_number_admin_Lb_2->setGeometry(QRect(10, 70, 131, 41));
        User_Name_getAccount_number_admin_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        userName_getAccount_Number_by_admin_LE_2 = new QLineEdit(AppGroup);
        userName_getAccount_Number_by_admin_LE_2->setObjectName("userName_getAccount_Number_by_admin_LE_2");
        userName_getAccount_Number_by_admin_LE_2->setGeometry(QRect(150, 70, 111, 41));
        userName_getAccount_Number_by_admin_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        userName_getAccount_Number_by_admin_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pb_getAccountNumber_byADMIN_2 = new QPushButton(AppGroup);
        pb_getAccountNumber_byADMIN_2->setObjectName("pb_getAccountNumber_byADMIN_2");
        pb_getAccountNumber_byADMIN_2->setGeometry(QRect(10, 120, 251, 41));
        pb_getAccountNumber_byADMIN_2->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        accNumber_transaction_history_Lb_2 = new QLabel(AppGroup);
        accNumber_transaction_history_Lb_2->setObjectName("accNumber_transaction_history_Lb_2");
        accNumber_transaction_history_Lb_2->setGeometry(QRect(290, 20, 131, 41));
        accNumber_transaction_history_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        maxCount_transaction_history_LE_2 = new QLineEdit(AppGroup);
        maxCount_transaction_history_LE_2->setObjectName("maxCount_transaction_history_LE_2");
        maxCount_transaction_history_LE_2->setGeometry(QRect(430, 70, 111, 41));
        maxCount_transaction_history_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        maxCount_transaction_history_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        accNumber_transaction_history_LE_2 = new QLineEdit(AppGroup);
        accNumber_transaction_history_LE_2->setObjectName("accNumber_transaction_history_LE_2");
        accNumber_transaction_history_LE_2->setGeometry(QRect(430, 20, 111, 41));
        accNumber_transaction_history_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        accNumber_transaction_history_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        maxCount_transaction_history_Lb_2 = new QLabel(AppGroup);
        maxCount_transaction_history_Lb_2->setObjectName("maxCount_transaction_history_Lb_2");
        maxCount_transaction_history_Lb_2->setGeometry(QRect(290, 70, 131, 41));
        maxCount_transaction_history_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        pb_view_transactions_history_2 = new QPushButton(AppGroup);
        pb_view_transactions_history_2->setObjectName("pb_view_transactions_history_2");
        pb_view_transactions_history_2->setGeometry(QRect(290, 120, 251, 41));
        pb_view_transactions_history_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        pb_view_account_balance_2 = new QPushButton(AppGroup);
        pb_view_account_balance_2->setObjectName("pb_view_account_balance_2");
        pb_view_account_balance_2->setGeometry(QRect(280, 260, 251, 51));
        pb_view_account_balance_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        accNumber_view_balance_Lb_2 = new QLabel(AppGroup);
        accNumber_view_balance_Lb_2->setObjectName("accNumber_view_balance_Lb_2");
        accNumber_view_balance_Lb_2->setGeometry(QRect(280, 190, 131, 51));
        accNumber_view_balance_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        accNumber_view_balance_LE_2 = new QLineEdit(AppGroup);
        accNumber_view_balance_LE_2->setObjectName("accNumber_view_balance_LE_2");
        accNumber_view_balance_LE_2->setGeometry(QRect(430, 190, 101, 51));
        accNumber_view_balance_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        accNumber_view_balance_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        amount_of_transaction_Lb_2 = new QLabel(AppGroup);
        amount_of_transaction_Lb_2->setObjectName("amount_of_transaction_Lb_2");
        amount_of_transaction_Lb_2->setGeometry(QRect(10, 400, 131, 41));
        amount_of_transaction_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        accNumber_make_transaction_Lb_2 = new QLabel(AppGroup);
        accNumber_make_transaction_Lb_2->setObjectName("accNumber_make_transaction_Lb_2");
        accNumber_make_transaction_Lb_2->setGeometry(QRect(10, 350, 131, 41));
        accNumber_make_transaction_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        amount_of_transaction_LE_2 = new QLineEdit(AppGroup);
        amount_of_transaction_LE_2->setObjectName("amount_of_transaction_LE_2");
        amount_of_transaction_LE_2->setGeometry(QRect(150, 400, 111, 41));
        amount_of_transaction_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        amount_of_transaction_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        accNumber_make_transaction_LE_2 = new QLineEdit(AppGroup);
        accNumber_make_transaction_LE_2->setObjectName("accNumber_make_transaction_LE_2");
        accNumber_make_transaction_LE_2->setGeometry(QRect(150, 350, 111, 41));
        accNumber_make_transaction_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        accNumber_make_transaction_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pb_Edit_user_Balance = new QPushButton(AppGroup);
        pb_Edit_user_Balance->setObjectName("pb_Edit_user_Balance");
        pb_Edit_user_Balance->setGeometry(QRect(10, 450, 251, 41));
        pb_Edit_user_Balance->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        Admin_User_Name_deleteUser_Lb_2 = new QLabel(AppGroup);
        Admin_User_Name_deleteUser_Lb_2->setObjectName("Admin_User_Name_deleteUser_Lb_2");
        Admin_User_Name_deleteUser_Lb_2->setGeometry(QRect(280, 350, 131, 41));
        Admin_User_Name_deleteUser_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        pb_DeleteUser_2 = new QPushButton(AppGroup);
        pb_DeleteUser_2->setObjectName("pb_DeleteUser_2");
        pb_DeleteUser_2->setGeometry(QRect(280, 450, 251, 41));
        pb_DeleteUser_2->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        Account_number_toDelete_user_LB_2 = new QLabel(AppGroup);
        Account_number_toDelete_user_LB_2->setObjectName("Account_number_toDelete_user_LB_2");
        Account_number_toDelete_user_LB_2->setGeometry(QRect(280, 400, 131, 41));
        Account_number_toDelete_user_LB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Account_number_toDelete_user_LE_2 = new QLineEdit(AppGroup);
        Account_number_toDelete_user_LE_2->setObjectName("Account_number_toDelete_user_LE_2");
        Account_number_toDelete_user_LE_2->setGeometry(QRect(420, 400, 111, 41));
        Account_number_toDelete_user_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Account_number_toDelete_user_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Admin_User_Name_deleteUser_LE_2 = new QLineEdit(AppGroup);
        Admin_User_Name_deleteUser_LE_2->setObjectName("Admin_User_Name_deleteUser_LE_2");
        Admin_User_Name_deleteUser_LE_2->setGeometry(QRect(420, 350, 111, 41));
        Admin_User_Name_deleteUser_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Admin_User_Name_deleteUser_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        User_Account_number_CreateNewUser_LB_2 = new QLabel(AppGroup);
        User_Account_number_CreateNewUser_LB_2->setObjectName("User_Account_number_CreateNewUser_LB_2");
        User_Account_number_CreateNewUser_LB_2->setGeometry(QRect(550, 170, 131, 41));
        User_Account_number_CreateNewUser_LB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        User_Account_number_CreateNewUser_LE_2 = new QLineEdit(AppGroup);
        User_Account_number_CreateNewUser_LE_2->setObjectName("User_Account_number_CreateNewUser_LE_2");
        User_Account_number_CreateNewUser_LE_2->setGeometry(QRect(690, 170, 121, 41));
        User_Account_number_CreateNewUser_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        User_Account_number_CreateNewUser_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        User_Password_CreateNewUser_LE_2 = new QLineEdit(AppGroup);
        User_Password_CreateNewUser_LE_2->setObjectName("User_Password_CreateNewUser_LE_2");
        User_Password_CreateNewUser_LE_2->setGeometry(QRect(690, 120, 121, 41));
        User_Password_CreateNewUser_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        User_Password_CreateNewUser_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        User_Password_CreateNewUser_Lb_2 = new QLabel(AppGroup);
        User_Password_CreateNewUser_Lb_2->setObjectName("User_Password_CreateNewUser_Lb_2");
        User_Password_CreateNewUser_Lb_2->setGeometry(QRect(550, 120, 131, 41));
        User_Password_CreateNewUser_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        User_Name_CreateNewUser_Lb_2 = new QLabel(AppGroup);
        User_Name_CreateNewUser_Lb_2->setObjectName("User_Name_CreateNewUser_Lb_2");
        User_Name_CreateNewUser_Lb_2->setGeometry(QRect(550, 70, 131, 41));
        User_Name_CreateNewUser_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        User_Name_CreateNewUser_LE_2 = new QLineEdit(AppGroup);
        User_Name_CreateNewUser_LE_2->setObjectName("User_Name_CreateNewUser_LE_2");
        User_Name_CreateNewUser_LE_2->setGeometry(QRect(690, 70, 121, 41));
        User_Name_CreateNewUser_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        User_Name_CreateNewUser_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Admin_User_Name_CreateNewUser_Lb_2 = new QLabel(AppGroup);
        Admin_User_Name_CreateNewUser_Lb_2->setObjectName("Admin_User_Name_CreateNewUser_Lb_2");
        Admin_User_Name_CreateNewUser_Lb_2->setGeometry(QRect(550, 20, 131, 41));
        Admin_User_Name_CreateNewUser_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Admin_User_Name_CreateNewUser_LE_2 = new QLineEdit(AppGroup);
        Admin_User_Name_CreateNewUser_LE_2->setObjectName("Admin_User_Name_CreateNewUser_LE_2");
        Admin_User_Name_CreateNewUser_LE_2->setGeometry(QRect(690, 20, 121, 41));
        Admin_User_Name_CreateNewUser_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Admin_User_Name_CreateNewUser_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Balance_CreateNewUser_LE_2 = new QLineEdit(AppGroup);
        Balance_CreateNewUser_LE_2->setObjectName("Balance_CreateNewUser_LE_2");
        Balance_CreateNewUser_LE_2->setGeometry(QRect(690, 220, 121, 41));
        Balance_CreateNewUser_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Balance_CreateNewUser_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Balance_CreateNewUser_LB_2 = new QLabel(AppGroup);
        Balance_CreateNewUser_LB_2->setObjectName("Balance_CreateNewUser_LB_2");
        Balance_CreateNewUser_LB_2->setGeometry(QRect(550, 220, 131, 41));
        Balance_CreateNewUser_LB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        pb_CreateNewUser_2 = new QPushButton(AppGroup);
        pb_CreateNewUser_2->setObjectName("pb_CreateNewUser_2");
        pb_CreateNewUser_2->setGeometry(QRect(550, 270, 261, 41));
        pb_CreateNewUser_2->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        Admin_User_Name_UpdateUser_Lb_2 = new QLabel(AppGroup);
        Admin_User_Name_UpdateUser_Lb_2->setObjectName("Admin_User_Name_UpdateUser_Lb_2");
        Admin_User_Name_UpdateUser_Lb_2->setGeometry(QRect(820, 20, 121, 41));
        Admin_User_Name_UpdateUser_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        User_Name_UpdateUser_LB_2 = new QLabel(AppGroup);
        User_Name_UpdateUser_LB_2->setObjectName("User_Name_UpdateUser_LB_2");
        User_Name_UpdateUser_LB_2->setGeometry(QRect(820, 70, 121, 41));
        User_Name_UpdateUser_LB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Admin_User_Name_UpdateUser_LE_2 = new QLineEdit(AppGroup);
        Admin_User_Name_UpdateUser_LE_2->setObjectName("Admin_User_Name_UpdateUser_LE_2");
        Admin_User_Name_UpdateUser_LE_2->setGeometry(QRect(960, 20, 121, 41));
        Admin_User_Name_UpdateUser_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Admin_User_Name_UpdateUser_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        User_Name_UpdateUser_LE_2 = new QLineEdit(AppGroup);
        User_Name_UpdateUser_LE_2->setObjectName("User_Name_UpdateUser_LE_2");
        User_Name_UpdateUser_LE_2->setGeometry(QRect(960, 70, 121, 41));
        User_Name_UpdateUser_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        User_Name_UpdateUser_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Password_UpdateUser_LE_2 = new QLineEdit(AppGroup);
        Password_UpdateUser_LE_2->setObjectName("Password_UpdateUser_LE_2");
        Password_UpdateUser_LE_2->setGeometry(QRect(960, 120, 121, 41));
        Password_UpdateUser_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Password_UpdateUser_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Password_UpdateUser_LB_2 = new QLabel(AppGroup);
        Password_UpdateUser_LB_2->setObjectName("Password_UpdateUser_LB_2");
        Password_UpdateUser_LB_2->setGeometry(QRect(820, 120, 121, 41));
        Password_UpdateUser_LB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Balance_UpdateUser_LE_2 = new QLineEdit(AppGroup);
        Balance_UpdateUser_LE_2->setObjectName("Balance_UpdateUser_LE_2");
        Balance_UpdateUser_LE_2->setGeometry(QRect(960, 220, 121, 41));
        Balance_UpdateUser_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Balance_UpdateUser_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Account_number_UpdateUser_LE_2 = new QLineEdit(AppGroup);
        Account_number_UpdateUser_LE_2->setObjectName("Account_number_UpdateUser_LE_2");
        Account_number_UpdateUser_LE_2->setGeometry(QRect(960, 170, 121, 41));
        Account_number_UpdateUser_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Account_number_UpdateUser_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Account_number_UpdateUser_LB_2 = new QLabel(AppGroup);
        Account_number_UpdateUser_LB_2->setObjectName("Account_number_UpdateUser_LB_2");
        Account_number_UpdateUser_LB_2->setGeometry(QRect(820, 170, 121, 41));
        Account_number_UpdateUser_LB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Balance_UpdateUser_LB_2 = new QLabel(AppGroup);
        Balance_UpdateUser_LB_2->setObjectName("Balance_UpdateUser_LB_2");
        Balance_UpdateUser_LB_2->setGeometry(QRect(820, 220, 121, 41));
        Balance_UpdateUser_LB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        pb_UpdateUserData_2 = new QPushButton(AppGroup);
        pb_UpdateUserData_2->setObjectName("pb_UpdateUserData_2");
        pb_UpdateUserData_2->setGeometry(QRect(820, 270, 261, 41));
        pb_UpdateUserData_2->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        RecivedData = new QGroupBox(centralwidget);
        RecivedData->setObjectName("RecivedData");
        RecivedData->setGeometry(QRect(0, 560, 1681, 471));
        RecivedData->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 46, 0);"));
        listWidgetRecievedData_adminPage = new QListWidget(RecivedData);
        listWidgetRecievedData_adminPage->setObjectName("listWidgetRecievedData_adminPage");
        listWidgetRecievedData_adminPage->setGeometry(QRect(250, 20, 1421, 401));
        listWidgetRecievedData_adminPage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"font: 700 14pt \"Segoe UI\";"));
        listWidgetRecievedData_adminPage->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidgetRecievedData_adminPage->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidgetRecievedData_adminPage->setWordWrap(true);
        pbClearRecievedData_2 = new QPushButton(RecivedData);
        pbClearRecievedData_2->setObjectName("pbClearRecievedData_2");
        pbClearRecievedData_2->setGeometry(QRect(10, 70, 211, 51));
        pbClearRecievedData_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        pbExist_2 = new QPushButton(RecivedData);
        pbExist_2->setObjectName("pbExist_2");
        pbExist_2->setGeometry(QRect(10, 150, 211, 51));
        pbExist_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"\n"
"background-color: rgb(0, 77, 231);"));
        Establishing_Connection_LB = new QLabel(centralwidget);
        Establishing_Connection_LB->setObjectName("Establishing_Connection_LB");
        Establishing_Connection_LB->setGeometry(QRect(0, 0, 331, 41));
        Establishing_Connection_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 54, 63);\n"
"color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Segoe UI\";"));
        ConsoleData = new QGroupBox(centralwidget);
        ConsoleData->setObjectName("ConsoleData");
        ConsoleData->setGeometry(QRect(1420, 50, 261, 511));
        ConsoleData->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 46, 0);"));
        verticalLayout_2 = new QVBoxLayout(ConsoleData);
        verticalLayout_2->setObjectName("verticalLayout_2");
        listWidgetConsole_2 = new QListWidget(ConsoleData);
        listWidgetConsole_2->setObjectName("listWidgetConsole_2");
        listWidgetConsole_2->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 173, 1);\n"
"font: 700 14pt \"Segoe UI\";"));
        listWidgetConsole_2->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidgetConsole_2->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidgetConsole_2->setWordWrap(true);

        verticalLayout_2->addWidget(listWidgetConsole_2);

        pbClearConsole_2 = new QPushButton(ConsoleData);
        pbClearConsole_2->setObjectName("pbClearConsole_2");
        pbClearConsole_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(pbClearConsole_2);

        AdminDashBoard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminDashBoard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1767, 17));
        AdminDashBoard->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminDashBoard);
        statusbar->setObjectName("statusbar");
        AdminDashBoard->setStatusBar(statusbar);

        retranslateUi(AdminDashBoard);
        QObject::connect(pbClearRecievedData_2, &QPushButton::clicked, listWidgetRecievedData_adminPage, qOverload<>(&QListWidget::clear));
        QObject::connect(pbClearConsole_2, &QPushButton::clicked, listWidgetConsole_2, qOverload<>(&QListWidget::clear));

        QMetaObject::connectSlotsByName(AdminDashBoard);
    } // setupUi

    void retranslateUi(QMainWindow *AdminDashBoard)
    {
        AdminDashBoard->setWindowTitle(QCoreApplication::translate("AdminDashBoard", "MainWindow", nullptr));
        sysGroup->setTitle(QCoreApplication::translate("AdminDashBoard", "sysGroup", nullptr));
#if QT_CONFIG(tooltip)
        IP_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        IP_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:400; font-style:italic;\">IP</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        Port_LB_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Port_LB_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:400; font-style:italic;\">Port</span></p></body></html>", nullptr));
        Port_lineEdit_2->setText(QCoreApplication::translate("AdminDashBoard", "1234", nullptr));
        Connect_pushButton_2->setText(QCoreApplication::translate("AdminDashBoard", "Connect", nullptr));
        Disconnect_pushButton_2->setText(QCoreApplication::translate("AdminDashBoard", "Disconnect", nullptr));
#if QT_CONFIG(tooltip)
        MessageLB_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        MessageLB_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Enter Message</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        MessageLE_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\">0000.0000.0000.0000</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        MessageLE_2->setWhatsThis(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        MessageLE_2->setText(QString());
        pbSend_2->setText(QCoreApplication::translate("AdminDashBoard", "Send", nullptr));
#if QT_CONFIG(tooltip)
        IP_lineEdit_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\">0000.0000.0000.0000</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        IP_lineEdit_2->setWhatsThis(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        IP_lineEdit_2->setText(QCoreApplication::translate("AdminDashBoard", "10.2.149.66", nullptr));
        Bank_System_LB->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-style:italic;\">Admin Bank System Interface</span></p></body></html>", nullptr));
        Connection_Status_LB->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Connections Status</span></p></body></html>", nullptr));
        AppGroup->setTitle(QCoreApplication::translate("AdminDashBoard", "App", nullptr));
#if QT_CONFIG(tooltip)
        Admin_User_Name_View_Bank_Database_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Admin_User_Name_View_Bank_Database_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Admin User Name</span></p></body></html>", nullptr));
        Admin_user_Name_view_database_LE_2->setText(QString());
        pb_View_bank_database_2->setText(QCoreApplication::translate("AdminDashBoard", "View Bank DataBase", nullptr));
#if QT_CONFIG(tooltip)
        Admin_User_Name_get_account_number_by_admin_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Admin_User_Name_get_account_number_by_admin_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Admin User Name</span></p></body></html>", nullptr));
        Admin_User_Name_get_account_number_by_admin_LE_2->setText(QString());
#if QT_CONFIG(tooltip)
        User_Name_getAccount_number_admin_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        User_Name_getAccount_number_admin_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">User Name</span></p></body></html>", nullptr));
        userName_getAccount_Number_by_admin_LE_2->setText(QString());
        pb_getAccountNumber_byADMIN_2->setText(QCoreApplication::translate("AdminDashBoard", "Get Account Number By Admin", nullptr));
#if QT_CONFIG(tooltip)
        accNumber_transaction_history_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        accNumber_transaction_history_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Account Number</span></p></body></html>", nullptr));
        maxCount_transaction_history_LE_2->setText(QString());
        accNumber_transaction_history_LE_2->setText(QString());
#if QT_CONFIG(tooltip)
        maxCount_transaction_history_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        maxCount_transaction_history_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Count</span></p></body></html>", nullptr));
        pb_view_transactions_history_2->setText(QCoreApplication::translate("AdminDashBoard", "View Transactions History", nullptr));
        pb_view_account_balance_2->setText(QCoreApplication::translate("AdminDashBoard", "View Account Balance ", nullptr));
#if QT_CONFIG(tooltip)
        accNumber_view_balance_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        accNumber_view_balance_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Account Number</span></p></body></html>", nullptr));
        accNumber_view_balance_LE_2->setText(QString());
#if QT_CONFIG(tooltip)
        amount_of_transaction_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        amount_of_transaction_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Amount</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        accNumber_make_transaction_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        accNumber_make_transaction_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Account Number</span></p></body></html>", nullptr));
        amount_of_transaction_LE_2->setText(QString());
        accNumber_make_transaction_LE_2->setText(QString());
        pb_Edit_user_Balance->setText(QCoreApplication::translate("AdminDashBoard", "Edit User Balance", nullptr));
#if QT_CONFIG(tooltip)
        Admin_User_Name_deleteUser_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Admin_User_Name_deleteUser_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Admin User Name</span></p></body></html>", nullptr));
        pb_DeleteUser_2->setText(QCoreApplication::translate("AdminDashBoard", "Delete User", nullptr));
#if QT_CONFIG(tooltip)
        Account_number_toDelete_user_LB_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Account_number_toDelete_user_LB_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Account Number</span></p></body></html>", nullptr));
        Account_number_toDelete_user_LE_2->setText(QString());
        Admin_User_Name_deleteUser_LE_2->setText(QString());
#if QT_CONFIG(tooltip)
        User_Account_number_CreateNewUser_LB_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        User_Account_number_CreateNewUser_LB_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">Account Number</span></p></body></html>", nullptr));
        User_Account_number_CreateNewUser_LE_2->setText(QString());
        User_Password_CreateNewUser_LE_2->setText(QString());
#if QT_CONFIG(tooltip)
        User_Password_CreateNewUser_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        User_Password_CreateNewUser_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">User Password</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        User_Name_CreateNewUser_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        User_Name_CreateNewUser_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">User Name</span></p></body></html>", nullptr));
        User_Name_CreateNewUser_LE_2->setText(QString());
#if QT_CONFIG(tooltip)
        Admin_User_Name_CreateNewUser_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Admin_User_Name_CreateNewUser_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Admin User Name</span></p></body></html>", nullptr));
        Admin_User_Name_CreateNewUser_LE_2->setText(QString());
        Balance_CreateNewUser_LE_2->setText(QString());
#if QT_CONFIG(tooltip)
        Balance_CreateNewUser_LB_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Balance_CreateNewUser_LB_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">User Balance</span></p></body></html>", nullptr));
        pb_CreateNewUser_2->setText(QCoreApplication::translate("AdminDashBoard", "Create New User", nullptr));
#if QT_CONFIG(tooltip)
        Admin_User_Name_UpdateUser_Lb_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Admin_User_Name_UpdateUser_Lb_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">Admin User Name</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        User_Name_UpdateUser_LB_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        User_Name_UpdateUser_LB_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">User Name</span></p></body></html>", nullptr));
        Admin_User_Name_UpdateUser_LE_2->setText(QString());
        User_Name_UpdateUser_LE_2->setText(QString());
        Password_UpdateUser_LE_2->setText(QString());
#if QT_CONFIG(tooltip)
        Password_UpdateUser_LB_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Password_UpdateUser_LB_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">User Password</span></p></body></html>", nullptr));
        Balance_UpdateUser_LE_2->setText(QString());
        Account_number_UpdateUser_LE_2->setText(QString());
#if QT_CONFIG(tooltip)
        Account_number_UpdateUser_LB_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Account_number_UpdateUser_LB_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">Account Number</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        Balance_UpdateUser_LB_2->setToolTip(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Balance_UpdateUser_LB_2->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">User Balance</span></p></body></html>", nullptr));
        pb_UpdateUserData_2->setText(QCoreApplication::translate("AdminDashBoard", "Update User", nullptr));
        RecivedData->setTitle(QCoreApplication::translate("AdminDashBoard", "RecivedData", nullptr));
        pbClearRecievedData_2->setText(QCoreApplication::translate("AdminDashBoard", "Clear Console", nullptr));
        pbExist_2->setText(QCoreApplication::translate("AdminDashBoard", "Exit", nullptr));
        Establishing_Connection_LB->setText(QCoreApplication::translate("AdminDashBoard", "<html><head/><body><p align=\"center\">Establishing Connection</p></body></html>", nullptr));
        ConsoleData->setTitle(QCoreApplication::translate("AdminDashBoard", "ConsoleData", nullptr));
        pbClearConsole_2->setText(QCoreApplication::translate("AdminDashBoard", "Clear Console", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDashBoard: public Ui_AdminDashBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASHBOARD_H
