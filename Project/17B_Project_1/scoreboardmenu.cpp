#include "scoreboardmenu.h"
#include "ui_scoreboardmenu.h"

scoreboardMenu::scoreboardMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scoreboardMenu)
{
    ui->setupUi(this);
}

scoreboardMenu::~scoreboardMenu()
{
    delete ui;
}
