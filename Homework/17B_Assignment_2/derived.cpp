/*
 * File:   Derived.cpp
 * Author: Andrew Kim
 * Created on September 17, 2014, 11:30 AM
 */

#include "Derived.h"

Derived::Derived(int r,int c) : Class(r,c){

}

void Derived::toPrint(){
    //Print the array
    cout<<endl;
    for(int row=0;row<nRows;row++){
        for(int col=0;col<nCols;col++){
            cout<<array[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
