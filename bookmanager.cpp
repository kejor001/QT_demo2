#include "bookmanager.h"
#include "ui_bookmanager.h"

bookManager::bookManager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bookManager)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_model.setHorizontalHeaderLabels(QStringList{"ID","书籍名称","数量","价格","图片"});
#if 1
    for(int i=0;i<10;i++)
    {
        QList<QStandardItem *> item;
        item.append(new QStandardItem("1"));
        item.append(new QStandardItem("C++ primer"));
        item.append(new QStandardItem("99"));
        item.append(new QStandardItem("19.9"));
        item.append(new QStandardItem("foo"));
        m_model.appendRow(item);
    }
#endif
}

bookManager::~bookManager()
{
    delete ui;
}
