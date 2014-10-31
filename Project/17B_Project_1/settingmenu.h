#ifndef SETTINGMENU_H
#define SETTINGMENU_H

#include <QDialog>

namespace Ui {
class settingMenu;
}

class settingMenu : public QDialog
{
    Q_OBJECT

public:
    explicit settingMenu(QWidget *parent = 0);
    ~settingMenu();

private slots:
    void on_easyButton_clicked();

    void on_mediumButton_clicked();

    void on_hardButton_clicked();

    void on_nameButton_clicked();

    void on_checkDifficulty_clicked();

    void on_checkName_clicked();

private:
    Ui::settingMenu *ui;
    QString name;
    bool checkn;
    bool checkd;
};

#endif // SETTINGMENU_H
