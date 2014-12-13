#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include <QTimer>
#include <QDebug>
#include "enemies.h"
#include "player.h"
#include "gameover.h"
#include "storage.h"

namespace Ui {
class gameWindow;
}

class gameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit gameWindow(QWidget *parent = 0);
    ~gameWindow();
    player *user;
    enemies *enemy;
    void endGame();
private:
    Ui::gameWindow *ui;
    QGraphicsScene *scene;
    QTimer *timer;
    QString name;
    int diff;
    int points;

public slots:
    void updater();
};


#endif // GAMEWINDOW_H
