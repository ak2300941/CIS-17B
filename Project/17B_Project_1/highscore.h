#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include "mainwindow.h"

namespace Ui {
class highscore;
}

class highscore : public QWidget
{
    Q_OBJECT

public:
    explicit highscore(QWidget *parent = 0);
    ~highscore();

private slots:
    void on_backButton_clicked();

private:
    Ui::highscore *ui;
    void getTextFile();
};

#endif // HIGHSCORE_H
