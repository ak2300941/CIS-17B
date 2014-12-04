#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //qApp->setStyleSheet("#groupBox { background-color: yellow }");

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


void MainWindow::on_highscoreButton_clicked()
{
    highscore *k=new highscore;
    k->show();
    this->close();
}
