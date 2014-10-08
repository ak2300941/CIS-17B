#ifndef OPTIONMENU_H
#define OPTIONMENU_H

#include <QWidget>

namespace Ui {
class optionMenu;
}

class optionMenu : public QWidget
{
    Q_OBJECT

public:
    explicit optionMenu(QWidget *parent = 0);
    ~optionMenu();

private slots:
    void on_easyButton_clicked();

    void on_mediumButton_clicked();

    void on_hardButton_clicked();

private:
    Ui::optionMenu *ui;
};

#endif // OPTIONMENU_H
