#ifndef SCOREBOARDMENU_H
#define SCOREBOARDMENU_H

#include <QDialog>

namespace Ui {
class scoreboardMenu;
}

class scoreboardMenu : public QDialog
{
    Q_OBJECT

public:
    explicit scoreboardMenu(QWidget *parent = 0);
    ~scoreboardMenu();

private:
    Ui::scoreboardMenu *ui;
};

#endif // SCOREBOARDMENU_H
