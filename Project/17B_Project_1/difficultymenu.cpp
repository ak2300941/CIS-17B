#include "difficultymenu.h"
#include "ui_difficultymenu.h"

difficultyMenu::difficultyMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::difficultyMenu)
{
    ui->setupUi(this);
}

difficultyMenu::~difficultyMenu()
{
    delete ui;
}
