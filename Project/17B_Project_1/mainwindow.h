#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "highscore.h"
#include "settingmenu.h"

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
    void on_newButton_clicked();

    void on_highscoreButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
