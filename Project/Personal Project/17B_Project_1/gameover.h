#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QWidget>
#include <QFile>
#include "gamewindow.h"

namespace Ui {
class gameOver;
}

class gameOver : public QWidget
{
    Q_OBJECT

public:
    explicit gameOver(QWidget *parent = 0);
    ~gameOver();

private slots:
    void on_againButton_clicked();

private:
    Ui::gameOver *ui;
    int points;
    QString name;
};

#endif // GAMEOVER_H
