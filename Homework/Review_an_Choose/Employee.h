/* 
 * File:   Employee.h
 * Author: Andrew Kim
 * Created on September 14, 2014, 6:22 PM
 */

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

//System Libraries
#include <iostream>
using namespace std;

class Employee{
   private:
       string name;
       unsigned int number;
       int date;
   public:
       Employee();
       Employee(string,unsigned int,int);
       //Accessor Functions
       string getName() const;
       unsigned int getNum() const;
       int getDate() const;
       //Mutator Functions
       void setName(string);
       void setNum(unsigned int);
       void setDate(int);
};

class ProductionWorker: public Employee{
   private:
       int shift;
       float rate;
   public:
       ProductionWorker();
       ProductionWorker(int,float);
       //Accessor Functions
       int getShift() const;
       float getRate() const;
       //Mutator Functions
       void setShift(int);
       void setRate(float);
};

#endif	/* EMPLOYEE_H */

