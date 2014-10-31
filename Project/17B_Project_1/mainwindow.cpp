#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settingmenu.h"

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

void MainWindow::on_newButton_clicked()
{
    settingMenu *k=new settingMenu;
    k->show();
    this->close();
}
