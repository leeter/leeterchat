#ifndef NETWORKLIST_HPP
#define NETWORKLIST_HPP
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

#include <QDialog>
#include <vector>
#include <ircnetwork.hpp>

namespace Ui {
class NetworkList;
}

class NetworkList : public QDialog
{
    Q_OBJECT

public:
    explicit NetworkList(std::vector<leeterchat::ircnetwork> &networks, QWidget *parent = nullptr);
    ~NetworkList();

private slots:
    void on_addButton_clicked();

    void on_editButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::NetworkList *ui;
    std::vector<leeterchat::ircnetwork> &networks_;
};

#endif // NETWORKLIST_HPP
