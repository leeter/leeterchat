/* Copyright (C) 2015 Leetsoftwerx,

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#include <memory>
#include <type_traits>
#include "networklist.hpp"
#include "ui_networklist.h"

NetworkList::NetworkList(std::vector<leeterchat::ircnetwork> &networks, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NetworkList),
    networks_(networks)
{
    ui->setupUi(this);
}
/* Copyright (C) 2015 Leetsoftwerx,

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>. */
NetworkList::~NetworkList()
{
    delete ui;
}

void NetworkList::on_addButton_clicked()
{
    auto newNetwork = new QListWidgetItem(tr("New Network"), ui->networkListWidget);
    networks_.emplace_back(newNetwork->text().toStdString());
    newNetwork->setFlags(newNetwork->flags() | Qt::ItemIsEditable);
}

void NetworkList::on_editButton_clicked()
{

}

void NetworkList::on_removeButton_clicked()
{
    std::unique_ptr<QListWidgetItem> selected(ui->networkListWidget->currentItem());
    if(!selected)
    {
        return;
    }

    size_t selected_index = ui->networkListWidget->currentIndex().row();
    if(networks_.size() < selected_index)
        qFatal("Unable to remove a network that does not exist!");
    networks_.erase(networks_.begin() + selected_index);
    // todo update network list
}

void NetworkList::on_NetworkList_accepted()
{
    // TODO: begin connection
}
