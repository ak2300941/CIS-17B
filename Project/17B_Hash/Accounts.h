/* 
 * File:   Accounts.h
 * Author: Andrew Kim
 * Created on October 20, 2014, 7:02 PM
 */

#ifndef ACCOUNTS_H
#define	ACCOUNTS_H\

#include <iostream>
#include <cstdlib>
#include <string>
#include "sha1.h"
using namespace std;

class Accounts {
public:
    Accounts();
    void getInfo();
    void doHash();
    char *getHashID();
    char *getHashP();
private:
    unsigned char idhash[20],passhash[20];
    char idhexstring[41],passhexstring[41];
    char id[];
    char pass[];
    int idSIZE,pSIZE;
};

#endif	/* ACCOUNTS_H */

