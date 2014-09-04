/*
 * Andrew Kim
 * August 27th, 2014
 * Purpose: Hello World with a GUI
*/

//Qt Libraries
#include <QApplication>
#include <QLabel>

//Execution Begins Here
int main(int argc, char **argv){
    QApplication app(argc,argv);
    QLabel *label = new QLabel("Hello World");  //Cleans up after itself
    //label->show();
    (*label).show();
    return app.exec();
}

