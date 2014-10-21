/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Purpose: Hash
 * Created on October 19, 2014, 10:28 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "sha1.h"
#include "Accounts.h"
using namespace std;

int main(int argc, char** argv) {
    Accounts test;
    test.getInfo();
    test.doHash();
    cout<<"ID: "<<test.getHashID()<<endl;
    cout<<"PASS: "<<test.getHashP()<<endl;
    return 0;
}

