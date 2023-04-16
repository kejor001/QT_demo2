#include "record.h"
#include "ui_record.h"

record::record(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::record)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_model.setHorizontalHeaderLabels(QStringList{"ID","用户ID","开始时间","结束时间","书ID"});
#if 1
    for(int i=0;i<10;i++)
    {
        QList<QStandardItem *> item;
        item.append(new QStandardItem("1"));
        item.append(new QStandardItem("2"));
        item.append(new QStandardItem("2023/1/1"));
        item.append(new QStandardItem("2023/1/31"));
        item.append(new QStandardItem("3"));
        m_model.appendRow(item);
    }
#endif
}

record::~record()
{
    delete ui;
}
