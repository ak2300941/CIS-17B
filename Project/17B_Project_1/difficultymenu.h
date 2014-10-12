#ifndef DIFFICULTYMENU_H
#define DIFFICULTYMENU_H

#include <QDialog>

namespace Ui {
class difficultyMenu;
}

class difficultyMenu : public QDialog
{
    Q_OBJECT

public:
    explicit difficultyMenu(QWidget *parent = 0);
    ~difficultyMenu();

private:
    Ui::difficultyMenu *ui;
};

#endif // DIFFICULTYMENU_H
