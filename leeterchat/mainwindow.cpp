#include <memory>
#include <QDateTime>
#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
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
