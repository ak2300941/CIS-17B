/*
 *Andrew Kim
 *September 2nd, 2014
 *Purpose: CIS17B - Review Assignment 1
*/

//System Libraries
#include <iostream>
using namespace std;

//Qt Libraries
#include <QApplication>
#include <QLabel>

//User-Defined Libraries
#include "class.h"

//Execution Begins Here
int main(int argc, char **argv){
    int rows,cols;
    /*
    cout<<"Enter # of Rows: ";
    cin>>rows;
    cout<<"Enter # of Columns: ";
    cin>>cols;
    */
    rows=5,cols=5;
    //Construct the Instance
    Class work(rows,cols);
    //Display Integer Array
    work.display();
    //Change Integer array to Character array
    work.toString();
    QApplication app(argc,argv);
    QLabel *label = new QLabel(work.toString());
    //label->show();
    (*label).show();
    return app.exec();
}


