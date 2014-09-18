/* 
 * File:   Date.cpp
 * Author: Andrew Kim
 * Created on September 13, 2014, 3:17 PM
 */

#include "Date.h"

Date::Date(int m, int d, int y){
    month=m;
    day=d;
    year=y;
}

void Date::form1(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}

void Date::form2(){
    string array[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    cout<<array[month-1]<<" "<<day<<", "<<year<<endl;
}

void Date::form3(){
    string array[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    cout<<day<<" "<<array[month-1]<<" "<<year<<endl;
}