#include "sqlmanager.h"
#include <QCoreApplication>
SqlManager* SqlManager::instance =nullptr;
SqlManager::SqlManager()
{

}

SqlManager::~SqlManager()
{

}

void SqlManager::init()
{
//    m_db=QSqlDatabase::addDatabase("QMYSQL");
//    //m_db.setDatabaseName(QCoreApplication::applicationDirPath()+"/db/")
//    m_db.setHostName("localhost");
//    m_db.setPort(3306);
//    m_db.setDatabaseName("book");
//    m_db.setUserName("root");
//    m_db.setPassword("root");
//    m_db.open();
//    if(!m_db.open())
//    {
//        qDebug() << "不能连接";
//    }
//    else
//    {
//        qDebug() << "连接成功";
//    }
//    m_db.close();

QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
db.setHostName("127.0.0.1");
db.setPort(3306);
db.setDatabaseName("数据库名");
db.setUserName("用户名");
db.setPassword("密码");
bool ok = db.open();
if (ok){
    //QMessageBox::information(this, "infor", "success");
    qDebug() << "连接成功";
}
else {
    //QMessageBox::information(this, "infor", "open failed");
    qDebug()<<"error open database because";
}
}

bool SqlManager::login(QString strUser, QString strPassword)
{

}

//void SqlManager::test()
//{
//    qDebug()<<"test";
//}
