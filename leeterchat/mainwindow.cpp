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
#include <QDateTime>
#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "networklist.hpp"

MainWindow::MainWindow(std::vector<leeterchat::ircnetwork> &networks, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    networkList.reset(new NetworkList(networks, this));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_textInput_returnPressed()
{
    if(ui->textInput->displayText().isEmpty())
    {
        return;
    }
    QTableWidget * textOutput = ui->textOutput;
    int targetRow = textOutput->rowCount();
    textOutput->insertRow(textOutput->rowCount());

    std::unique_ptr<QTableWidgetItem> timeStamp(
                new QTableWidgetItem(QDateTime::currentDateTime().toString(QLatin1String("HH:mm:ss"))));
    std::unique_ptr<QTableWidgetItem> nick(
                new QTableWidgetItem(QString::fromUtf8("Leeter")));
    nick->setTextAlignment(Qt::AlignRight);
    std::unique_ptr<QTableWidgetItem> text(
                new QTableWidgetItem(ui->textInput->displayText()));

    textOutput->setItem(targetRow, 0, timeStamp.release());
    textOutput->setItem(targetRow, 1, nick.release());
    textOutput->setItem(targetRow, 2, text.release());
    textOutput->scrollToBottom();
    ui->textInput->clear();
}

void MainWindow::openNetworkList()
{
    networkList->show();
}
