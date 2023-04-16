#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QtDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,m_user(nullptr)
    ,m_book(nullptr)
    ,m_record(nullptr)
{
    ui->setupUi(this);
    initPage();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initPage()
{
    m_user=new userManager(this);
    m_book=new bookManager(this);
    m_record=new record(this);
    ui->stackedWidget->addWidget(m_user);
    ui->stackedWidget->addWidget(m_book);
    ui->stackedWidget->addWidget(m_record);
     ui->stackedWidget->setCurrentIndex(2);
    auto l=ui->tool->children();
    for(auto it:l)
    {
        if(it->objectName().contains("btn"))
        {
            connect(static_cast<QPushButton*>(it),&QPushButton::clicked,this,&MainWindow::dealMenu);
        }
    }
}

void MainWindow::dealMenu()
{
    auto str=sender()->objectName();
    while (true) {
        if("btn_user"==str)
        {
            ui->stackedWidget->setCurrentIndex(2);
            break;
        }
        if("btn_book"==str)
        {
            ui->stackedWidget->setCurrentIndex(3);
            break;
        }
        if("btn_history"==str)
        {
            ui->stackedWidget->setCurrentIndex(4);
            break;
        }
    }
}
