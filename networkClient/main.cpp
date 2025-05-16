#include "LoginWindow.h"



#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // MainWindow w;
    // w.show();

    LoginWindow loginWidget;
    loginWidget.show();



    // AdminDashBoard adminDashboard;
    // adminDashboard.show();




    return a.exec();
}
