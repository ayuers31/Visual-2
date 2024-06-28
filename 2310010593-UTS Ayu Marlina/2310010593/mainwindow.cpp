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

void MainWindow::on_pushButton_clicked()
{
    uiEvent = new even(this);
    uiEvent->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    uiHotel = new hotel(this);
    uiHotel->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    uiWisata = new wisata(this);
    uiWisata->show();
}

