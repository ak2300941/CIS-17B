/* 
 * File:   Accounts.cpp
 * Author: Andrew Kim
 * Created on October 20, 2014, 7:02 PM
 */

#include "Accounts.h"

Accounts::Accounts() {
    
}

//Store information
void Accounts::getInfo(){
    //Get ID & Password
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Password: ";
    cin>>pass;
}

//Start Hash
void Accounts::doHash(){
    //Get the ID and Password SIZE
    idSIZE=sizeof(id);
    pSIZE=sizeof(pass);
    //Hash ID
    sha1::calc(id,idSIZE,idhash);
    sha1::toHexString(idhash,idhexstring);
    //Reset Hash
    
    //Hash Password
    sha1::calc(pass,pSIZE,passhash);
    sha1::toHexString(passhash,passhexstring);
}

//Get Hash String for ID
char *Accounts::getHashID(){
    return idhexstring;
}

//Get Hash String for Password
char *Accounts::getHashP(){
    return passhexstring;
}



