#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "usermanager.h"
#include "bookmanager.h"
#include "record.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initPage();
    void dealMenu();
private:
    Ui::MainWindow *ui;
    userManager *m_user;
    bookManager *m_book;
    record *m_record;
};
#endif // MAINWINDOW_H
