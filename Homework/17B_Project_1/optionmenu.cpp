#include "optionmenu.h"
#include "ui_optionmenu.h"

optionMenu::optionMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::optionMenu)
{
    ui->setupUi(this);
}

optionMenu::~optionMenu()
{
    delete ui;
}

void optionMenu::on_easyButton_clicked()
{
    ui->difficultyDescription->setText("5x Score");
}

void optionMenu::on_mediumButton_clicked()
{
    ui->difficultyDescription->setText("2x Score");
}

void optionMenu::on_hardButton_clicked()
{
    ui->difficultyDescription->setText("1x Score");
}
