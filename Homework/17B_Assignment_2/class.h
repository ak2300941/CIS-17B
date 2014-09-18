/*
 * File:   Class.h
 * Author: Andrew Kim
 * Created on September 17, 2014, 11:06 AM
 */

#ifndef CLASS_H
#define	CLASS_H

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <ctime>
#include <sstream>
using namespace std;

#include "Abstract.h"

class Class : public Abstract{
   protected:
    int nRows;
    int nCols;
    int **array;
   public:
    Class(int,int);
    ~Class();
    void filarray();
    const char *toString();

};

#endif	/* CLASS_H */

