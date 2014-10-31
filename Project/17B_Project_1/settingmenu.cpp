#include "settingmenu.h"
#include "ui_settingmenu.h"

settingMenu::settingMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingMenu)
{
    ui->setupUi(this);
}

settingMenu::~settingMenu()
{
    delete ui;
}

void settingMenu::on_easyButton_clicked()
{
    ui->difficultyLabel->setText("Easy Mode: 3x");
    ui->checkDifficulty->setChecked(1);
    checkd=1;
}

void settingMenu::on_mediumButton_clicked()
{
    ui->difficultyLabel->setText("Medium Mode: 2x");
    ui->checkDifficulty->setChecked(1);
    checkd=1;
}

void settingMenu::on_hardButton_clicked()
{
    ui->difficultyLabel->setText("Hard Mode: 1x");
    ui->checkDifficulty->setChecked(1);
    checkd=1;
}

void settingMenu::on_nameButton_clicked()
{
    name=ui->nameLine->text();
    ui->nameLabel->setText(name);
    ui->checkName->setChecked(1);
    checkn=1;
}

void settingMenu::on_checkDifficulty_clicked()
{
    if(checkd==1){
        ui->checkDifficulty->setChecked(1);
    }
    if(checkd==0){
        ui->checkDifficulty->setChecked(0);
    }
}

void settingMenu::on_checkName_clicked()
{
    if(checkn==1){
        ui->checkName->setChecked(1);
    }
    if(checkn==0){
        ui->checkName->setChecked(0);
    }
}
