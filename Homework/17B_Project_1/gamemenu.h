#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <QMainWindow>

namespace Ui {
class gameMenu;
}

class gameMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit gameMenu(QWidget *parent = 0);
    ~gameMenu();

private slots:
    void on_optionButton_clicked();

private:
    Ui::gameMenu *ui;
};

#endif // GAMEMENU_H
