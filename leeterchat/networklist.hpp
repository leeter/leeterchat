#ifndef NETWORKLIST_HPP
#define NETWORKLIST_HPP

#include <QDialog>

namespace Ui {
class NetworkList;
}

class NetworkList : public QDialog
{
    Q_OBJECT

public:
    explicit NetworkList(QWidget *parent = 0);
    ~NetworkList();

private slots:
    void on_addButton_clicked();

private:
    Ui::NetworkList *ui;
};

#endif // NETWORKLIST_HPP
