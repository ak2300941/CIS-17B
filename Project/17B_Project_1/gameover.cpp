#include "gameover.h"
#include "ui_gameover.h"

gameOver::gameOver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameOver)
{
    ui->setupUi(this);
    storage temp;
    points=temp.getPoints();
    ui->scoreLabel->setNum(points);
}

gameOver::~gameOver()
{
    delete ui;
}

void gameOver::on_againButton_clicked()
{
    gameWindow *k=new gameWindow;
    k->show();
    this->close();
}
