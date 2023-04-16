#ifndef RECORD_H
#define RECORD_H
#include <QStandardItemModel>
#include <QWidget>

namespace Ui {
class record;
}

class record : public QWidget
{
    Q_OBJECT

public:
    explicit record(QWidget *parent = nullptr);
    ~record();
    QStandardItemModel m_model;
private:
    Ui::record *ui;
};

#endif // RECORD_H
