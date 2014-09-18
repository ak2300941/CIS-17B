/*
 * File:   Derived.h
 * Author: Andrew Kim
 * Created on September 17, 2014, 11:30 AM
 */

#ifndef DERIVED_H
#define	DERIVED_H

#include "Class.h"

class Derived : public Class {
   public:
       Derived(int,int);
       void toPrint();
};

#endif	/* DERIVED_H */

