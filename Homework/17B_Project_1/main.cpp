#include "gamemenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gameMenu w;
    w.show();

    return a.exec();
}
