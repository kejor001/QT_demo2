#include "mainwindow.h"
#include "dialog_login.h"
#include <QApplication>
#include "sqlmanager.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog_login dlg;
    //SqlManager::getInstance()->test();
    SqlManager::getInstance()->init();
    int ret=dlg.exec();
    if(ret==1)
    {
        MainWindow w;//
        w.show();//
        return a.exec();//
    }
    if(ret==0)
    {
        exit(0);
        return  0;
    }
}
