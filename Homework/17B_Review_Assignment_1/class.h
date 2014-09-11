#ifndef CLASS_H
#define CLASS_H

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <ctime>
#include <sstream>
using namespace std;

class Class{
   private:
    int nRows;
    int nCols;
    int **array;
   public:
    Class(int,int);
    ~Class();
    const char *toString();
    void display();
    void destroy();
};

#endif // CLASS_H
