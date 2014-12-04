#include "gameover.h"
#include "ui_gameover.h"

gameOver::gameOver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameOver)
{
    ui->setupUi(this);
    storage temp;
    points=temp.getPoints();
    name=temp.getName();
    ui->scoreLabel->setNum(points);
    //Write Score to file
    QString filename="highscore.txt";
    QFile mFile(filename);
    if(mFile.open(QFile::WriteOnly|QFile::Text|QFile::Append)){
        QTextStream out(&mFile);
        out<<name<<" "<<points<<endl;
    }
    mFile.close();
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
