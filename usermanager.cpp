#include "usermanager.h"
#include "ui_usermanager.h"
#include <QList>
userManager::userManager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userManager)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_model.setHorizontalHeaderLabels(QStringList{"用户ID","年级","专业","权限","昵称","用户名","密码"});
#if 1
    for(int i=0;i<10;i++)
    {
        QList<QStandardItem *> item;
        item.append(new QStandardItem("1"));
        item.append(new QStandardItem("1年1班"));
        item.append(new QStandardItem("计算机技术与科学"));
        item.append(new QStandardItem("学生"));
        item.append(new QStandardItem("foo"));
        item.append(new QStandardItem("admin"));
        item.append(new QStandardItem("root"));
        m_model.appendRow(item);
    }
#endif
}

userManager::~userManager()
{
    delete ui;
}
