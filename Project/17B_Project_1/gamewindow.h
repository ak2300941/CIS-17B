#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>

namespace Ui {
class gameWindow;
}

class gameWindow : public QDialog
{
    Q_OBJECT

public:
    explicit gameWindow(QWidget *parent = 0);
    ~gameWindow();

private slots:
    void on_readyButton_clicked();

    void on_saveButton_clicked();

    void on_loadButton_clicked();

private:
    Ui::gameWindow *ui;
    QString name;
    int points;
};

#endif // GAMEWINDOW_H
