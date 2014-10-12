#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "scoreboardmenu.h"
#include "difficultymenu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionNew_triggered();

    void on_actionSave_triggered();

    void on_actionExit_triggered();

    void on_actionDifficulty_triggered();

    void on_actionScoreboard_triggered();

private:
    Ui::MainWindow *ui;
    //Scoring
    int points;
};

#endif // MAINWINDOW_H
