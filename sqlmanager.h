#ifndef SQLMANAGER_H
#define SQLMANAGER_H
#include <QtDebug>
#include <QSqlDatabase>
class SqlManager
{
public:
    SqlManager();
    ~SqlManager();
    static SqlManager * instance;
    static SqlManager * getInstance()
    {
        if(nullptr==instance)
        {
            instance = new SqlManager();
        }
        return instance;
    }
   // void test();
    void init();
    //用户登录
    bool login(QString strUser,QString strPassword);
    //获取所有用户
    QVector<QStringList> getUsers(QString strCondtion="");
    //添加用户
    void addUser(QVector<QStringList>);
    //删除用户
    void delUser(QString strId);
    //获取所有的图书
     QVector<QStringList> getBooks(QString strCondtion="");
    //增加图书
     void addBooks(QVector<QStringList>);
    //修改图书
      void updateBooks(QStringList);
    //删除图书
      void delBooks(QString strId);
    //图书的归还
      QString returnBooks(QString strUserId,QString strBookId);
    //图书借阅
      QString borrowBooks(QString strUserId,QString strBookId);
    //获取借阅记录
      QVector<QStringList> getRecord(QString strCondtion="");
    //清空借阅记录
      void clearRecord();
private:
    QSqlDatabase m_db;
};

#endif // SQLMANAGER_H
