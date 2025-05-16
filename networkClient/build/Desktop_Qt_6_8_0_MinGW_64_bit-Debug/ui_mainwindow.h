/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *sysGroup;
    QLabel *IP_Lb;
    QLabel *Port_LB;
    QLineEdit *Port_lineEdit;
    QPushButton *Connect_pushButton;
    QPushButton *Disconnect_pushButton;
    QLabel *MessageLB;
    QLineEdit *MessageLE;
    QPushButton *pbSend;
    QLineEdit *IP_lineEdit;
    QGroupBox *ConsoleData;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidgetConsole;
    QPushButton *pbClearConsole;
    QGroupBox *RecivedData;
    QListWidget *listWidgetRecievedData;
    QPushButton *pbClearRecievedData;
    QPushButton *pbExist;
    QLabel *Connection_Status_LB;
    QLabel *Establishing_Connection_LB;
    QGroupBox *AppGroup;
    QLabel *User_Name_Lb;
    QLineEdit *userName_getAccount_Number_LE;
    QPushButton *pb_getAccountNumber;
    QLabel *accNumber_transaction_history_Lb;
    QLineEdit *maxCount_transaction_history_LE;
    QLineEdit *accNumber_transaction_history_LE;
    QLabel *maxCount_transaction_history_Lb;
    QPushButton *pb_view_transactions_history;
    QPushButton *pb_view_account_balance;
    QLabel *accNumber_view_balance_Lb;
    QLineEdit *accNumber_view_balance_LE;
    QLabel *amount_of_transaction_Lb;
    QLabel *accNumber_make_transaction_Lb;
    QLineEdit *amount_of_transaction_LE;
    QLineEdit *accNumber_make_transaction_LE;
    QPushButton *pb_Make_a_Transaction;
    QLineEdit *Transferor_Account_transferMoney_LE;
    QLabel *Transferor_Account_transferMoney_LB;
    QLineEdit *Transferee_Account_transferMoney_LE;
    QLabel *Transferee_Account_transferMoney_LB;
    QPushButton *pb_WireTrasnfer;
    QLabel *amount_of_transfer_betweenAccounts_LB;
    QLineEdit *amount_of_transfer_betweenAccounts_LE;
    QLabel *Bank_System_LB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1897, 1024);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sysGroup = new QGroupBox(centralwidget);
        sysGroup->setObjectName("sysGroup");
        sysGroup->setGeometry(QRect(0, 50, 331, 511));
        sysGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 46, 0);"));
        IP_Lb = new QLabel(sysGroup);
        IP_Lb->setObjectName("IP_Lb");
        IP_Lb->setGeometry(QRect(20, 40, 131, 41));
        IP_Lb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Port_LB = new QLabel(sysGroup);
        Port_LB->setObjectName("Port_LB");
        Port_LB->setGeometry(QRect(20, 100, 131, 41));
        Port_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Port_lineEdit = new QLineEdit(sysGroup);
        Port_lineEdit->setObjectName("Port_lineEdit");
        Port_lineEdit->setGeometry(QRect(180, 100, 131, 41));
        Port_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Port_lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Connect_pushButton = new QPushButton(sysGroup);
        Connect_pushButton->setObjectName("Connect_pushButton");
        Connect_pushButton->setGeometry(QRect(30, 160, 261, 41));
        Connect_pushButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        Disconnect_pushButton = new QPushButton(sysGroup);
        Disconnect_pushButton->setObjectName("Disconnect_pushButton");
        Disconnect_pushButton->setGeometry(QRect(30, 210, 261, 41));
        Disconnect_pushButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        MessageLB = new QLabel(sysGroup);
        MessageLB->setObjectName("MessageLB");
        MessageLB->setGeometry(QRect(30, 260, 261, 41));
        MessageLB->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        MessageLE = new QLineEdit(sysGroup);
        MessageLE->setObjectName("MessageLE");
        MessageLE->setGeometry(QRect(30, 310, 261, 111));
        MessageLE->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        MessageLE->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pbSend = new QPushButton(sysGroup);
        pbSend->setObjectName("pbSend");
        pbSend->setGeometry(QRect(30, 430, 261, 41));
        pbSend->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        IP_lineEdit = new QLineEdit(sysGroup);
        IP_lineEdit->setObjectName("IP_lineEdit");
        IP_lineEdit->setGeometry(QRect(180, 40, 131, 41));
        IP_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        IP_lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ConsoleData = new QGroupBox(centralwidget);
        ConsoleData->setObjectName("ConsoleData");
        ConsoleData->setGeometry(QRect(1430, 50, 251, 501));
        ConsoleData->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 46, 0);"));
        verticalLayout = new QVBoxLayout(ConsoleData);
        verticalLayout->setObjectName("verticalLayout");
        listWidgetConsole = new QListWidget(ConsoleData);
        listWidgetConsole->setObjectName("listWidgetConsole");
        listWidgetConsole->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 173, 1);\n"
"font: 700 14pt \"Segoe UI\";"));
        listWidgetConsole->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidgetConsole->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidgetConsole->setWordWrap(true);

        verticalLayout->addWidget(listWidgetConsole);

        pbClearConsole = new QPushButton(ConsoleData);
        pbClearConsole->setObjectName("pbClearConsole");
        pbClearConsole->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));

        verticalLayout->addWidget(pbClearConsole);

        RecivedData = new QGroupBox(centralwidget);
        RecivedData->setObjectName("RecivedData");
        RecivedData->setGeometry(QRect(0, 560, 1681, 471));
        RecivedData->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 46, 0);"));
        listWidgetRecievedData = new QListWidget(RecivedData);
        listWidgetRecievedData->setObjectName("listWidgetRecievedData");
        listWidgetRecievedData->setGeometry(QRect(250, 20, 1421, 401));
        listWidgetRecievedData->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"font: 700 14pt \"Segoe UI\";"));
        listWidgetRecievedData->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidgetRecievedData->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidgetRecievedData->setWordWrap(true);
        pbClearRecievedData = new QPushButton(RecivedData);
        pbClearRecievedData->setObjectName("pbClearRecievedData");
        pbClearRecievedData->setGeometry(QRect(10, 70, 211, 51));
        pbClearRecievedData->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        pbExist = new QPushButton(RecivedData);
        pbExist->setObjectName("pbExist");
        pbExist->setGeometry(QRect(10, 150, 211, 51));
        pbExist->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"\n"
"background-color: rgb(0, 77, 231);"));
        Connection_Status_LB = new QLabel(centralwidget);
        Connection_Status_LB->setObjectName("Connection_Status_LB");
        Connection_Status_LB->setGeometry(QRect(1430, 0, 251, 41));
        Connection_Status_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 54, 63);\n"
"color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Segoe UI\";"));
        Establishing_Connection_LB = new QLabel(centralwidget);
        Establishing_Connection_LB->setObjectName("Establishing_Connection_LB");
        Establishing_Connection_LB->setGeometry(QRect(0, 0, 331, 41));
        Establishing_Connection_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 54, 63);\n"
"color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Segoe UI\";"));
        AppGroup = new QGroupBox(centralwidget);
        AppGroup->setObjectName("AppGroup");
        AppGroup->setGeometry(QRect(330, 50, 1091, 511));
        AppGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 46, 0);"));
        User_Name_Lb = new QLabel(AppGroup);
        User_Name_Lb->setObjectName("User_Name_Lb");
        User_Name_Lb->setGeometry(QRect(590, 170, 131, 41));
        User_Name_Lb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        userName_getAccount_Number_LE = new QLineEdit(AppGroup);
        userName_getAccount_Number_LE->setObjectName("userName_getAccount_Number_LE");
        userName_getAccount_Number_LE->setGeometry(QRect(740, 170, 331, 41));
        userName_getAccount_Number_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        userName_getAccount_Number_LE->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pb_getAccountNumber = new QPushButton(AppGroup);
        pb_getAccountNumber->setObjectName("pb_getAccountNumber");
        pb_getAccountNumber->setGeometry(QRect(590, 220, 481, 41));
        pb_getAccountNumber->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        accNumber_transaction_history_Lb = new QLabel(AppGroup);
        accNumber_transaction_history_Lb->setObjectName("accNumber_transaction_history_Lb");
        accNumber_transaction_history_Lb->setGeometry(QRect(10, 20, 131, 41));
        accNumber_transaction_history_Lb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        maxCount_transaction_history_LE = new QLineEdit(AppGroup);
        maxCount_transaction_history_LE->setObjectName("maxCount_transaction_history_LE");
        maxCount_transaction_history_LE->setGeometry(QRect(170, 70, 411, 41));
        maxCount_transaction_history_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        maxCount_transaction_history_LE->setAlignment(Qt::AlignmentFlag::AlignCenter);
        accNumber_transaction_history_LE = new QLineEdit(AppGroup);
        accNumber_transaction_history_LE->setObjectName("accNumber_transaction_history_LE");
        accNumber_transaction_history_LE->setGeometry(QRect(170, 20, 411, 41));
        accNumber_transaction_history_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        accNumber_transaction_history_LE->setAlignment(Qt::AlignmentFlag::AlignCenter);
        maxCount_transaction_history_Lb = new QLabel(AppGroup);
        maxCount_transaction_history_Lb->setObjectName("maxCount_transaction_history_Lb");
        maxCount_transaction_history_Lb->setGeometry(QRect(10, 70, 131, 41));
        maxCount_transaction_history_Lb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        pb_view_transactions_history = new QPushButton(AppGroup);
        pb_view_transactions_history->setObjectName("pb_view_transactions_history");
        pb_view_transactions_history->setGeometry(QRect(10, 120, 571, 41));
        pb_view_transactions_history->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        pb_view_account_balance = new QPushButton(AppGroup);
        pb_view_account_balance->setObjectName("pb_view_account_balance");
        pb_view_account_balance->setGeometry(QRect(10, 220, 571, 41));
        pb_view_account_balance->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        accNumber_view_balance_Lb = new QLabel(AppGroup);
        accNumber_view_balance_Lb->setObjectName("accNumber_view_balance_Lb");
        accNumber_view_balance_Lb->setGeometry(QRect(10, 170, 131, 41));
        accNumber_view_balance_Lb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        accNumber_view_balance_LE = new QLineEdit(AppGroup);
        accNumber_view_balance_LE->setObjectName("accNumber_view_balance_LE");
        accNumber_view_balance_LE->setGeometry(QRect(160, 170, 421, 41));
        accNumber_view_balance_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        accNumber_view_balance_LE->setAlignment(Qt::AlignmentFlag::AlignCenter);
        amount_of_transaction_Lb = new QLabel(AppGroup);
        amount_of_transaction_Lb->setObjectName("amount_of_transaction_Lb");
        amount_of_transaction_Lb->setGeometry(QRect(590, 70, 131, 41));
        amount_of_transaction_Lb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        accNumber_make_transaction_Lb = new QLabel(AppGroup);
        accNumber_make_transaction_Lb->setObjectName("accNumber_make_transaction_Lb");
        accNumber_make_transaction_Lb->setGeometry(QRect(590, 20, 131, 41));
        accNumber_make_transaction_Lb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        amount_of_transaction_LE = new QLineEdit(AppGroup);
        amount_of_transaction_LE->setObjectName("amount_of_transaction_LE");
        amount_of_transaction_LE->setGeometry(QRect(730, 70, 341, 41));
        amount_of_transaction_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        amount_of_transaction_LE->setAlignment(Qt::AlignmentFlag::AlignCenter);
        accNumber_make_transaction_LE = new QLineEdit(AppGroup);
        accNumber_make_transaction_LE->setObjectName("accNumber_make_transaction_LE");
        accNumber_make_transaction_LE->setGeometry(QRect(730, 20, 341, 41));
        accNumber_make_transaction_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        accNumber_make_transaction_LE->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pb_Make_a_Transaction = new QPushButton(AppGroup);
        pb_Make_a_Transaction->setObjectName("pb_Make_a_Transaction");
        pb_Make_a_Transaction->setGeometry(QRect(590, 120, 481, 41));
        pb_Make_a_Transaction->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        Transferor_Account_transferMoney_LE = new QLineEdit(AppGroup);
        Transferor_Account_transferMoney_LE->setObjectName("Transferor_Account_transferMoney_LE");
        Transferor_Account_transferMoney_LE->setGeometry(QRect(160, 290, 421, 41));
        Transferor_Account_transferMoney_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Transferor_Account_transferMoney_LE->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Transferor_Account_transferMoney_LB = new QLabel(AppGroup);
        Transferor_Account_transferMoney_LB->setObjectName("Transferor_Account_transferMoney_LB");
        Transferor_Account_transferMoney_LB->setGeometry(QRect(20, 290, 131, 41));
        Transferor_Account_transferMoney_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Transferee_Account_transferMoney_LE = new QLineEdit(AppGroup);
        Transferee_Account_transferMoney_LE->setObjectName("Transferee_Account_transferMoney_LE");
        Transferee_Account_transferMoney_LE->setGeometry(QRect(160, 340, 421, 41));
        Transferee_Account_transferMoney_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Transferee_Account_transferMoney_LE->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Transferee_Account_transferMoney_LB = new QLabel(AppGroup);
        Transferee_Account_transferMoney_LB->setObjectName("Transferee_Account_transferMoney_LB");
        Transferee_Account_transferMoney_LB->setGeometry(QRect(20, 340, 131, 41));
        Transferee_Account_transferMoney_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        pb_WireTrasnfer = new QPushButton(AppGroup);
        pb_WireTrasnfer->setObjectName("pb_WireTrasnfer");
        pb_WireTrasnfer->setGeometry(QRect(20, 440, 561, 41));
        pb_WireTrasnfer->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        amount_of_transfer_betweenAccounts_LB = new QLabel(AppGroup);
        amount_of_transfer_betweenAccounts_LB->setObjectName("amount_of_transfer_betweenAccounts_LB");
        amount_of_transfer_betweenAccounts_LB->setGeometry(QRect(20, 390, 131, 41));
        amount_of_transfer_betweenAccounts_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        amount_of_transfer_betweenAccounts_LE = new QLineEdit(AppGroup);
        amount_of_transfer_betweenAccounts_LE->setObjectName("amount_of_transfer_betweenAccounts_LE");
        amount_of_transfer_betweenAccounts_LE->setGeometry(QRect(160, 390, 421, 41));
        amount_of_transfer_betweenAccounts_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        amount_of_transfer_betweenAccounts_LE->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Bank_System_LB = new QLabel(centralwidget);
        Bank_System_LB->setObjectName("Bank_System_LB");
        Bank_System_LB->setGeometry(QRect(340, 0, 1081, 41));
        Bank_System_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 54, 63);\n"
"font: 24pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1897, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pbClearConsole, &QPushButton::clicked, listWidgetConsole, qOverload<>(&QListWidget::clear));
        QObject::connect(pbClearRecievedData, &QPushButton::clicked, listWidgetRecievedData, qOverload<>(&QListWidget::clear));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sysGroup->setTitle(QCoreApplication::translate("MainWindow", "sysGroup", nullptr));
#if QT_CONFIG(tooltip)
        IP_Lb->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        IP_Lb->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:400; font-style:italic;\">IP</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        Port_LB->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Port_LB->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:400; font-style:italic;\">Port</span></p></body></html>", nullptr));
        Port_lineEdit->setText(QCoreApplication::translate("MainWindow", "1234", nullptr));
        Connect_pushButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        Disconnect_pushButton->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
#if QT_CONFIG(tooltip)
        MessageLB->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        MessageLB->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Enter Message</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        MessageLE->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0000.0000.0000.0000</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        MessageLE->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        MessageLE->setText(QString());
        pbSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
#if QT_CONFIG(tooltip)
        IP_lineEdit->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0000.0000.0000.0000</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        IP_lineEdit->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        IP_lineEdit->setText(QCoreApplication::translate("MainWindow", "10.2.149.66", nullptr));
        ConsoleData->setTitle(QCoreApplication::translate("MainWindow", "ConsoleData", nullptr));
        pbClearConsole->setText(QCoreApplication::translate("MainWindow", "Clear Console", nullptr));
        RecivedData->setTitle(QCoreApplication::translate("MainWindow", "RecivedData", nullptr));
        pbClearRecievedData->setText(QCoreApplication::translate("MainWindow", "Clear Console", nullptr));
        pbExist->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        Connection_Status_LB->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Connections Status</span></p></body></html>", nullptr));
        Establishing_Connection_LB->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Establishing Connection</p></body></html>", nullptr));
        AppGroup->setTitle(QCoreApplication::translate("MainWindow", "App", nullptr));
#if QT_CONFIG(tooltip)
        User_Name_Lb->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        User_Name_Lb->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">User Name</span></p></body></html>", nullptr));
        userName_getAccount_Number_LE->setText(QString());
        pb_getAccountNumber->setText(QCoreApplication::translate("MainWindow", "Get Account Number", nullptr));
#if QT_CONFIG(tooltip)
        accNumber_transaction_history_Lb->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        accNumber_transaction_history_Lb->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Account Number</span></p></body></html>", nullptr));
        maxCount_transaction_history_LE->setText(QString());
        accNumber_transaction_history_LE->setText(QString());
#if QT_CONFIG(tooltip)
        maxCount_transaction_history_Lb->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        maxCount_transaction_history_Lb->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Count</span></p></body></html>", nullptr));
        pb_view_transactions_history->setText(QCoreApplication::translate("MainWindow", "View Transactions History", nullptr));
        pb_view_account_balance->setText(QCoreApplication::translate("MainWindow", "View Account Balance", nullptr));
#if QT_CONFIG(tooltip)
        accNumber_view_balance_Lb->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        accNumber_view_balance_Lb->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Account Number</span></p></body></html>", nullptr));
        accNumber_view_balance_LE->setText(QString());
#if QT_CONFIG(tooltip)
        amount_of_transaction_Lb->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        amount_of_transaction_Lb->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Amount</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        accNumber_make_transaction_Lb->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        accNumber_make_transaction_Lb->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Account Number</span></p></body></html>", nullptr));
        amount_of_transaction_LE->setText(QString());
        accNumber_make_transaction_LE->setText(QString());
        pb_Make_a_Transaction->setText(QCoreApplication::translate("MainWindow", "Place Transaction", nullptr));
        Transferor_Account_transferMoney_LE->setText(QString());
#if QT_CONFIG(tooltip)
        Transferor_Account_transferMoney_LB->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Transferor_Account_transferMoney_LB->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">Transferor Account</span></p></body></html>", nullptr));
        Transferee_Account_transferMoney_LE->setText(QString());
#if QT_CONFIG(tooltip)
        Transferee_Account_transferMoney_LB->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Transferee_Account_transferMoney_LB->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">Transferee Account</span></p></body></html>", nullptr));
        pb_WireTrasnfer->setText(QCoreApplication::translate("MainWindow", "Wire Transfer", nullptr));
#if QT_CONFIG(tooltip)
        amount_of_transfer_betweenAccounts_LB->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        amount_of_transfer_betweenAccounts_LB->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic; text-decoration:none;\">Amount</span></p></body></html>", nullptr));
        amount_of_transfer_betweenAccounts_LE->setText(QString());
        Bank_System_LB->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-style:italic;\">BANK SYSTEM USER INTERFACE</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
