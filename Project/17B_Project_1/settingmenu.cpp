#include "settingmenu.h"
#include "ui_settingmenu.h"


settingMenu::settingMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingMenu)
{
    ui->setupUi(this);
    //Initialize Check as false
    checkn=0;
    checkd=0;
}

settingMenu::~settingMenu()
{
    delete ui;
}

void settingMenu::on_easyButton_clicked()
{
    ui->difficultyLabel->setText("Easy Mode: 3x");
    ui->checkDifficulty->setChecked(1);
    if(checkd==0)checkd=1;
}

void settingMenu::on_mediumButton_clicked()
{
    ui->difficultyLabel->setText("Medium Mode: 2x");
    ui->checkDifficulty->setChecked(1);
    if(checkd==0)checkd=1;
}

void settingMenu::on_hardButton_clicked()
{
    ui->difficultyLabel->setText("Hard Mode: 1x");
    ui->checkDifficulty->setChecked(1);
    if(checkd==0)checkd=1;
}

void settingMenu::on_nameButton_clicked()
{
    if(ui->nameLine->text()==NULL){
        ui->checkName->setChecked(0);
        checkn=0;
        QMessageBox msgBox;
        msgBox.setText("Please don't leave this blank.");
        msgBox.exec();
    }
    if(ui->nameLine->text()!=NULL){
        name=ui->nameLine->text();
        ui->checkName->setChecked(1);
        ui->nameLabel->setText(name);
        checkn=1;
    }

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

void settingMenu::on_startgameButton_clicked()
{
    if(checkn==1&&checkd==1){
        //Save name to next window
        QString filename="name.txt";
        QFile mFile(filename);
        if(mFile.open(QFile::WriteOnly|QFile::Text)){
            QTextStream out(&mFile);
            out<<name<<endl;
        }
        mFile.close();
        //Open Game Window
        gameWindow *k=new gameWindow;
        k->show();
        this->close();
    }
}
