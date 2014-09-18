/* 
 * File:   Date.h
 * Author: Andrew Kim
 * Created on September 13, 2014, 3:17 PM
 */

#ifndef DATE_H
#define	DATE_H

//System Libraries
#include <iostream>
#include <string>
using namespace std;

class Date {
   private:
       int month;
       int day;
       int year;
       
   public:
       Date(int,int,int);
       void form1();
       void form2();
       void form3();
};

#endif	/* DATE_H */

