#include "mainwindow.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include "login.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QPixmap pixmap("img/SoftwareProManagement.png");
//    QSplashScreen splash(pixmap);

//    splash.show();
//    a.processEvents();

//    login w;
//    w.show();
    DBManager Dbmanager("127.0.0.1");
    MainWindow w(&Dbmanager,"0001");
    w.show();
    
//    splash.finish(&w);

    return a.exec();
}
