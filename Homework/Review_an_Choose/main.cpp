/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Purpose: 17B - Review and Choose Assignment
 * Created on September 13, 2014, 3:05 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User-Defined Libraries
#include "Date.h"
#include "DayOfYear.h"
#include "Employee.h"
//No Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();

//Execution Begins Here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=3);
    return 0;
}

void Menu(){
    cout<<"Menu for the Review Problems"<<endl;
    cout<<"Type 1 for Chapter 13 Problem: Date"<<endl;
    cout<<"Type 2 for Chapter 14 Problem: Day of the Year"<<endl;
    cout<<"Type 3 for Chapter 15 Problem: Employee and ProductionWorker Classes"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
    //Declare variables
    int month, day, year;
    cout<<"Enter the Month: (1~12)"<<endl;
    cin>>month;
    cout<<"Enter the Day: "<<endl;
    cin>>day;
    cout<<"Enter the Year: (ex. 2000, 2012)"<<endl;
    cin>>year;
    //Construct Instance
    Date a(month,day,year);
    //Display
    cout<<endl;
    a.form1();
    a.form2();
    a.form3();
    cout<<endl;
}

void problem2(){
    //Declare variables
    int day;
    cout<<"Enter the day to translation to Month/Day format: ";
    cin>>day;
    DayOfYear test(day);
    cout<<endl;
    test.print();
    cout<<endl;
}

void problem3(){
    //Declare variables
    string name,trash,shiftn;
    int date,shift;
    unsigned int num;
    float rate;
    cout<<"Enter Employee's Name: ";
    cin>>name;
    getline(cin,trash);
    cout<<"Enter Employee's Number: ";
    cin>>num;
    cout<<"Enter Date Hired: (Year) ";
    cin>>date;
    cout<<"Day Shift = 1, Night Shift = 2 (Enter Number 1 or 2) ";
    cin>>shift;
    cout<<"Hourly Pay Rate: ";
    cin>>rate;
    //Construct the instance
    Employee worker(name,num,date);
    ProductionWorker pwork(shift,rate);
    //Display
    cout<<endl;
    cout<<"Employee Name: "<<worker.getName()<<endl;
    cout<<"Employee Number: "<<worker.getNum()<<endl;
    cout<<"Employee Hire Date: "<<worker.getDate()<<endl;
    //Day / Night
    if(pwork.getShift()==1)shiftn="Day";
    if(pwork.getShift()==2)shiftn="Night";
    cout<<"Employee Shift: "<<shiftn<<endl;
    cout<<"Employee Hourly Pay Rate: $"<<pwork.getRate()<<endl;
    cout<<endl;
}


void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
