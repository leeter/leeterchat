#include "networklist.hpp"
#include "ui_networklist.h"

NetworkList::NetworkList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NetworkList)
{
    ui->setupUi(this);
}

NetworkList::~NetworkList()
{
    delete ui;
}

void NetworkList::on_addButton_clicked()
{
    ui->networkListWidget->addItem(tr("New Network"));
}
