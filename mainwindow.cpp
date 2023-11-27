#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int firstNum, secondNum, result;

void MainWindow::on_btnAdd_clicked()
{
    firstNum = ui->txtFirstName->text().toInt();
    secondNum = ui->txtResult->text().toInt();
    result = firstNum+secondNum;
    ui->txtSecondNum->setText(QString::number(result));
}


void MainWindow::on_btnSubs_clicked()
{
    firstNum = ui->txtFirstName->text().toInt();
    secondNum = ui->txtResult->text().toInt();
    result = firstNum-secondNum;
    ui->txtSecondNum->setText(QString::number(result));
}


void MainWindow::on_btnMul_clicked()
{
    firstNum = ui->txtFirstName->text().toInt();
    secondNum = ui->txtResult->text().toInt();
    result = firstNum*secondNum;
    ui->txtSecondNum->setText(QString::number(result));
}


void MainWindow::on_btndiv_clicked()
{
    firstNum = ui->txtFirstName->text().toInt();
    secondNum = ui->txtResult->text().toInt();
    result = firstNum/secondNum;
    ui->txtSecondNum->setText(QString::number(result));
}

