#include "gamemenu.h"
#include "ui_gamemenu.h"
#include "optionmenu.h"

gameMenu::gameMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gameMenu)
{
    ui->setupUi(this);
}

gameMenu::~gameMenu()
{
    delete ui;
}

void gameMenu::on_optionButton_clicked()
{
    optionMenu *window = new optionMenu;
    window->setWindowTitle("Game Difficulty Menu");
    window->show();
}
