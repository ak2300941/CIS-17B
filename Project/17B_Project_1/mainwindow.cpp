#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>

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

//Pressing New, game starts from the beginning.
void MainWindow::on_actionNew_triggered()
{
    QMessageBox::information(this,"New File","(Create New Game)");
}

//Pressing Open, reads in past highscores.
void MainWindow::on_actionOpen_triggered()
{
    QMessageBox::information(this,"Open File","(Create Open Save: Highscore Scoreboard");
}

//Pressing Save, writes in highscores.
void MainWindow::on_actionSave_triggered()
{
    QMessageBox::information(this,"Save File","(Create a Save Program for Highscore)");
}

//Pressing Exit, the program closes.
void MainWindow::on_actionExit_triggered()
{
    close();
}

//Pressing Difficulty, the program difficulty changes. (easy, medium, hard)
void MainWindow::on_actionDifficulty_triggered()
{

}
