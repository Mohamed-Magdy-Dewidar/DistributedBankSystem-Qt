/********************************************************************************
** Form generated from reading UI file 'LoginWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *sysGroup;
    QLabel *IPLogin_Lb;
    QLabel *Port_LB_Login;
    QLineEdit *Port_lineEdit_Login;
    QPushButton *Connect_pushButton;
    QPushButton *Disconnect_pushButton;
    QLineEdit *IP_lineEdit_Login;
    QGroupBox *ConsoleData_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidgetConsole_2;
    QPushButton *pbClearConsole_2;
    QGroupBox *sysGroup_2;
    QPushButton *LoginBtn_loginPage_pushButton;
    QLineEdit *Password_logIn_LE_2;
    QLabel *Password_login_Lb_2;
    QLineEdit *userName_logIN_LE_2;
    QLabel *User_Name_logIN_Lb_2;
    QListWidget *listWidget_RecieveLoginStatus;
    QPushButton *pbClearConsole_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *Establishing_Connection_LB;
    QLabel *Bank_System_LB;
    QLabel *Connection_Status_LB_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(1148, 643);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        sysGroup = new QGroupBox(centralwidget);
        sysGroup->setObjectName("sysGroup");
        sysGroup->setGeometry(QRect(0, 60, 331, 501));
        sysGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 46, 0);"));
        IPLogin_Lb = new QLabel(sysGroup);
        IPLogin_Lb->setObjectName("IPLogin_Lb");
        IPLogin_Lb->setGeometry(QRect(20, 40, 131, 41));
        IPLogin_Lb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Port_LB_Login = new QLabel(sysGroup);
        Port_LB_Login->setObjectName("Port_LB_Login");
        Port_LB_Login->setGeometry(QRect(20, 100, 131, 41));
        Port_LB_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        Port_lineEdit_Login = new QLineEdit(sysGroup);
        Port_lineEdit_Login->setObjectName("Port_lineEdit_Login");
        Port_lineEdit_Login->setGeometry(QRect(180, 100, 131, 41));
        Port_lineEdit_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Port_lineEdit_Login->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Connect_pushButton = new QPushButton(sysGroup);
        Connect_pushButton->setObjectName("Connect_pushButton");
        Connect_pushButton->setGeometry(QRect(30, 160, 261, 41));
        Connect_pushButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        Disconnect_pushButton = new QPushButton(sysGroup);
        Disconnect_pushButton->setObjectName("Disconnect_pushButton");
        Disconnect_pushButton->setGeometry(QRect(30, 210, 261, 41));
        Disconnect_pushButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        IP_lineEdit_Login = new QLineEdit(sysGroup);
        IP_lineEdit_Login->setObjectName("IP_lineEdit_Login");
        IP_lineEdit_Login->setGeometry(QRect(180, 40, 131, 41));
        IP_lineEdit_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        IP_lineEdit_Login->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ConsoleData_2 = new QGroupBox(centralwidget);
        ConsoleData_2->setObjectName("ConsoleData_2");
        ConsoleData_2->setGeometry(QRect(800, 60, 251, 501));
        ConsoleData_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 46, 0);"));
        verticalLayout_2 = new QVBoxLayout(ConsoleData_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        listWidgetConsole_2 = new QListWidget(ConsoleData_2);
        listWidgetConsole_2->setObjectName("listWidgetConsole_2");
        listWidgetConsole_2->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 173, 1);\n"
"font: 700 14pt \"Segoe UI\";"));
        listWidgetConsole_2->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidgetConsole_2->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidgetConsole_2->setWordWrap(true);

        verticalLayout_2->addWidget(listWidgetConsole_2);

        pbClearConsole_2 = new QPushButton(ConsoleData_2);
        pbClearConsole_2->setObjectName("pbClearConsole_2");
        pbClearConsole_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(pbClearConsole_2);

        sysGroup_2 = new QGroupBox(centralwidget);
        sysGroup_2->setObjectName("sysGroup_2");
        sysGroup_2->setGeometry(QRect(350, 60, 431, 501));
        sysGroup_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 46, 0);"));
        LoginBtn_loginPage_pushButton = new QPushButton(sysGroup_2);
        LoginBtn_loginPage_pushButton->setObjectName("LoginBtn_loginPage_pushButton");
        LoginBtn_loginPage_pushButton->setGeometry(QRect(20, 170, 381, 41));
        LoginBtn_loginPage_pushButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        Password_logIn_LE_2 = new QLineEdit(sysGroup_2);
        Password_logIn_LE_2->setObjectName("Password_logIn_LE_2");
        Password_logIn_LE_2->setGeometry(QRect(160, 100, 241, 51));
        Password_logIn_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        Password_logIn_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Password_login_Lb_2 = new QLabel(sysGroup_2);
        Password_login_Lb_2->setObjectName("Password_login_Lb_2");
        Password_login_Lb_2->setGeometry(QRect(20, 100, 131, 51));
        Password_login_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        userName_logIN_LE_2 = new QLineEdit(sysGroup_2);
        userName_logIN_LE_2->setObjectName("userName_logIN_LE_2");
        userName_logIN_LE_2->setGeometry(QRect(160, 40, 241, 51));
        userName_logIN_LE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 0);\n"
"font: 11pt \"Segoe UI\";"));
        userName_logIN_LE_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        User_Name_logIN_Lb_2 = new QLabel(sysGroup_2);
        User_Name_logIN_Lb_2->setObjectName("User_Name_logIN_Lb_2");
        User_Name_logIN_Lb_2->setGeometry(QRect(20, 40, 131, 51));
        User_Name_logIN_Lb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 231);\n"
"text-decoration: underline;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        listWidget_RecieveLoginStatus = new QListWidget(sysGroup_2);
        listWidget_RecieveLoginStatus->setObjectName("listWidget_RecieveLoginStatus");
        listWidget_RecieveLoginStatus->setGeometry(QRect(20, 240, 381, 201));
        listWidget_RecieveLoginStatus->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 173, 1);\n"
"font: 700 12pt \"Segoe UI\";"));
        listWidget_RecieveLoginStatus->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidget_RecieveLoginStatus->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        listWidget_RecieveLoginStatus->setWordWrap(true);
        pbClearConsole_3 = new QPushButton(sysGroup_2);
        pbClearConsole_3->setObjectName("pbClearConsole_3");
        pbClearConsole_3->setGeometry(QRect(20, 450, 381, 41));
        pbClearConsole_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 1051, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Establishing_Connection_LB = new QLabel(layoutWidget);
        Establishing_Connection_LB->setObjectName("Establishing_Connection_LB");
        Establishing_Connection_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 54, 63);\n"
"color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Segoe UI\";"));

        horizontalLayout->addWidget(Establishing_Connection_LB);

        Bank_System_LB = new QLabel(layoutWidget);
        Bank_System_LB->setObjectName("Bank_System_LB");
        Bank_System_LB->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 54, 63);\n"
"font: 24pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(Bank_System_LB);

        Connection_Status_LB_2 = new QLabel(layoutWidget);
        Connection_Status_LB_2->setObjectName("Connection_Status_LB_2");
        Connection_Status_LB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 54, 63);\n"
"color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Segoe UI\";"));

        horizontalLayout->addWidget(Connection_Status_LB_2);

        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1148, 17));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);
        QObject::connect(pbClearConsole_2, &QPushButton::clicked, listWidgetConsole_2, qOverload<>(&QListWidget::clear));
        QObject::connect(pbClearConsole_3, &QPushButton::clicked, listWidget_RecieveLoginStatus, qOverload<>(&QListWidget::clear));

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "MainWindow", nullptr));
        sysGroup->setTitle(QCoreApplication::translate("LoginWindow", "sysGroup", nullptr));
#if QT_CONFIG(tooltip)
        IPLogin_Lb->setToolTip(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        IPLogin_Lb->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:400; font-style:italic;\">IP</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        Port_LB_Login->setToolTip(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Port_LB_Login->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:400; font-style:italic;\">Port</span></p></body></html>", nullptr));
        Port_lineEdit_Login->setText(QCoreApplication::translate("LoginWindow", "1234", nullptr));
        Connect_pushButton->setText(QCoreApplication::translate("LoginWindow", "Connect", nullptr));
        Disconnect_pushButton->setText(QCoreApplication::translate("LoginWindow", "Disconnect", nullptr));
#if QT_CONFIG(tooltip)
        IP_lineEdit_Login->setToolTip(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\">0000.0000.0000.0000</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        IP_lineEdit_Login->setWhatsThis(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        IP_lineEdit_Login->setText(QCoreApplication::translate("LoginWindow", "10.2.149.66", nullptr));
        ConsoleData_2->setTitle(QCoreApplication::translate("LoginWindow", "ConsoleData", nullptr));
        pbClearConsole_2->setText(QCoreApplication::translate("LoginWindow", "Clear Console", nullptr));
        sysGroup_2->setTitle(QCoreApplication::translate("LoginWindow", "sysGroup", nullptr));
        LoginBtn_loginPage_pushButton->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        Password_logIn_LE_2->setText(QString());
#if QT_CONFIG(tooltip)
        Password_login_Lb_2->setToolTip(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Password_login_Lb_2->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">Password</span></p></body></html>", nullptr));
        userName_logIN_LE_2->setText(QString());
#if QT_CONFIG(tooltip)
        User_Name_logIN_Lb_2->setToolTip(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        User_Name_logIN_Lb_2->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; font-style:italic;\">User Name</span></p></body></html>", nullptr));
        pbClearConsole_3->setText(QCoreApplication::translate("LoginWindow", "Clear Console", nullptr));
        Establishing_Connection_LB->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\">Establishing Connection</p></body></html>", nullptr));
        Bank_System_LB->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><span style=\" font-style:italic;\">Login Page</span></p></body></html>", nullptr));
        Connection_Status_LB_2->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Connections Status</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
