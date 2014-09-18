/* 
 * File:   DayOfYear.cpp
 * Author: Andrew Kim
 * Created on September 14, 2014, 4:10 PM
 */

#include "DayOfYear.h"

DayOfYear::DayOfYear(int d){
    day=d;
}

void DayOfYear::print(){
    string month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    //January
    if(day>0&&day<=31){
        cout<<month[0]<<" "<<day<<"."<<endl;
    }
    //February
    else if(day>31&&day<=59){
        day=day-31;
        cout<<month[1]<<" "<<day<<"."<<endl;
    }
    //March
    else if(day>59&&day<=90){
        day=day-59;
        cout<<month[2]<<" "<<day<<"."<<endl;
    }
    //April
    else if(day>90&&day<=120){
        day=day-90;
        cout<<month[3]<<" "<<day<<"."<<endl;
    }
    //May
    else if(day>120&&day<=151){
        day=day-120;
        cout<<month[4]<<" "<<day<<"."<<endl;
    }
    //June
    else if(day>151&&day<=181){
        day=day-151;
        cout<<month[5]<<" "<<day<<"."<<endl;
    }
    //July
    else if(day>181&&day<=212){
        day=day-181;
        cout<<month[6]<<" "<<day<<"."<<endl;
    }
    //August
    else if(day>212&&day<=243){
        day=day-212;
        cout<<month[7]<<" "<<day<<"."<<endl;
    }
    //September
    else if(day>243&&day<=273){
        day=day-243;
        cout<<month[8]<<" "<<day<<"."<<endl;
    }
    //October
    else if(day>273&&day<=304){
        day=day-273;
        cout<<month[9]<<" "<<day<<"."<<endl;
    }
    //November
    else if(day>304&&day<=334){
        day=day-304;
        cout<<month[10]<<" "<<day<<"."<<endl;
    }
    //December
    else if(day>334&&day<=365){
        day=day-334;
        cout<<month[11]<<" "<<day<<"."<<endl;
    }
}
