#include "gamewindow.h"
#include "ui_gamewindow.h"

gameWindow::gameWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameWindow)
{
    ui->setupUi(this);
}

gameWindow::~gameWindow()
{
    delete ui;
}

void gameWindow::on_readyButton_clicked()
{
    //Write name to next window
    QString filename="name.txt";
    QFile mFile(filename);
    if(mFile.open(QFile::ReadOnly|QFile::Text)){
        QTextStream out(&mFile);
        name=out.readLine();
    }
    mFile.close();
    ui->nameLabel->setText(name);
    ui->readyButton->hide();
    //Initalize points to start at 0
    points=0;
    ui->scoreLabel->setNum(points);
}

void gameWindow::on_saveButton_clicked()
{
    //Save points to text file
    QString filename="points.txt";
    QFile mFile(filename);
    if(mFile.open(QFile::WriteOnly|QFile::Text)){
        QTextStream out(&mFile);
        out<<points<<endl;
    }
    mFile.close();
}

void gameWindow::on_loadButton_clicked()
{
    //Load points saved from text file
    QString filename="points.txt";
    QFile mFile(filename);
    if(mFile.open(QFile::ReadOnly|QFile::Text)){
        QTextStream out(&mFile);
        out.operator >>(points);
    }
    mFile.close();
    ui->scoreLabel->setNum(points);
}
