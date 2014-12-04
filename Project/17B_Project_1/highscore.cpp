#include "highscore.h"
#include "ui_highscore.h"

highscore::highscore(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::highscore)
{
    ui->setupUi(this);
    getTextFile();
}

highscore::~highscore()
{
    delete ui;
}

void highscore::getTextFile()
{
    QFile myFile("highscore.txt");
    myFile.open(QIODevice::ReadOnly);
    QTextStream textStream(&myFile);
    QString line = textStream.readAll();
    myFile.close();
    ui->textEdit->setPlainText(line);
}

void highscore::on_backButton_clicked()
{
    MainWindow *k=new MainWindow;
    k->show();
    this->close();

}
