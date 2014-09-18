/*
 * File:   Class.cpp
 * Author: Andrew Kim
 * Created on September 17, 2014, 11:06 AM
 */

#include "class.h"

Class::Class(int r, int c){
    nRows=r;
    nCols=c;
    //Random Number Generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2-D Array
    array=new int*[nRows];
    for(int row=0;row<nRows;row++){
        array[row]=new int[nCols];
    }
    //Fill the array with random 2 digit numbers
    for(int row=0;row<nRows;row++){
        for(int col=0;col<nCols;col++){
            array[row][col]=rand()%90+10;
        }
    }
}

Class::~Class(){
    //Destroy cols
    for(int row=0;row<nRows;row++){
        delete []array[row];
    }
    //Destroy row pointers
    delete []array;
}

void Class::filarray(){
    //Fill the array with random 2 digit numbers
    for(int row=0;row<nRows;row++){
        for(int col=0;col<nCols;col++){
            array[row][col]=rand()%90+10;
        }
    }
}

const char *Class::toString(){
    stringstream crray;
    for(int row=0;row<nRows;row++){
        for(int col=0;col<nCols;col++){
            crray<<array[row][col]<<' ';
        }
        crray<<endl;
    }
    char *brray=new char[crray.str().length()];
    strcpy(brray,crray.str().c_str());
    return brray;
}
