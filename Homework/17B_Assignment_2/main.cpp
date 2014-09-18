/*
 * File:   main.cpp
 * Author: Andrew Kim
 * Purpose: 17B - Assignment 2
 * Created on September 17, 2014, 11:02 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Qt Libraries
#include <QApplication>
#include <QLabel>

//User-Defined Libraries
#include "Derived.h"

//Execution Begins Here
int main(int argc, char** argv) {
    int rows,cols;
    rows=5,cols=5;
    //Construct the Instance
    Derived work(rows,cols);
    //Fill the Array
    work.filarray();
    //Display Integer Array
    //work.toPrint();
    QApplication app(argc,argv);
    QLabel *label = new QLabel(work.toString());  //Cleans up after itself
    //label->show();
    (*label).show();
    return app.exec();
}

