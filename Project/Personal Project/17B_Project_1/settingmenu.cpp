#include "settingmenu.h"
#include "ui_settingmenu.h"
#include "gamewindow.h"
#include "QMessageBox"

settingMenu::settingMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingMenu)
{
    ui->setupUi(this);
    checkd=0;
    checkn=0;
}

settingMenu::~settingMenu()
{
    delete ui;
}

//When Pressed Easy Difficulty
void settingMenu::on_easyButton_clicked()
{
    ui->difficultyLabel->setText("Easy Mode: 5 Enemies");
    ui->checkDifficulty->setChecked(1);
    checkd=1;
    diff=5;
}

//When Pressed Medium Difficulty
void settingMenu::on_mediumButton_clicked()
{
    ui->difficultyLabel->setText("Medium Mode: 10 Enemies");
    ui->checkDifficulty->setChecked(1);
    checkd=1;
    diff=10;
}

//When Pressed Hard Difficulty
void settingMenu::on_hardButton_clicked()
{
    ui->difficultyLabel->setText("Hard Mode: 15 Enemies");
    ui->checkDifficulty->setChecked(1);
    checkd=1;
    diff=15;
}

void settingMenu::on_nameButton_clicked()
{
    //Check if entered nothing for name
    if(ui->nameLine->text()==NULL){
        ui->checkName->setChecked(0);
        checkn=0;
        QMessageBox msgBox;
        msgBox.setText("Please don't leave this blank.");
        msgBox.exec();
    }
    //If entered name
    if(ui->nameLine->text()!=NULL){
        ui->checkName->setChecked(1);
        name=ui->nameLine->text();
        checkn=1;
    }

}

//Made to use Check Box
void settingMenu::on_checkDifficulty_clicked()
{
    if(checkd==1){
        ui->checkDifficulty->setChecked(1);
    }
    if(checkd==0){
        ui->checkDifficulty->setChecked(0);
    }
}

//Made to use Check Box
void settingMenu::on_checkName_clicked()
{
    if(checkn==1){
        ui->checkName->setChecked(1);
    }
    if(checkn==0){
        ui->checkName->setChecked(0);
    }
}

//If both name and difficulty is picked
void settingMenu::on_startButton_clicked()
{
    if(checkd==1&&checkn==1){
        //Store name and difficulty
        storage b;
        b.setName(name);
        b.setDiff(diff);
        gameWindow *k=new gameWindow();
        k->show();
        this->close();
    }
}
