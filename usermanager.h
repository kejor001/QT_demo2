#ifndef USERMANAGER_H
#define USERMANAGER_H
#include <QStandardItemModel>
#include <QWidget>

namespace Ui {
class userManager;
}

class userManager : public QWidget
{
    Q_OBJECT

public:
    explicit userManager(QWidget *parent = nullptr);
    ~userManager();
    QStandardItemModel m_model;
private:
    Ui::userManager *ui;
};

#endif // USERMANAGER_H
