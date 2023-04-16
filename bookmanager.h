#ifndef BOOKMANAGER_H
#define BOOKMANAGER_H
#include <QStandardItemModel>
#include <QWidget>

namespace Ui {
class bookManager;
}

class bookManager : public QWidget
{
    Q_OBJECT

public:
    explicit bookManager(QWidget *parent = nullptr);
    ~bookManager();
    QStandardItemModel m_model;
private:
    Ui::bookManager *ui;
};

#endif // BOOKMANAGER_H
