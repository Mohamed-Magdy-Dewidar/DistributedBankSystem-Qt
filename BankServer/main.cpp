#include <QCoreApplication>
#include <BankDataBase.h>
#include  <RequestProcessor.h>
#include <QTextStream>




int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);



    RequestProcessor requestHandler;


    QTextStream qout(stdout);
    QTextStream qin(stdin);




    return a.exec();
}
