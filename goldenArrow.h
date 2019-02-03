/*
 * File:  SimpleHammer.h
 * Author: Ottoniel Javitt
 * FSUID: oaj16
 */


#include <string>
#include "Weapon.h"
#include <cstdlib>

#ifndef GOLDENARROW_H
#define GOLDENARROW_H

class goldenArrow : public Weapon
{
public:

    goldenArrow() : Weapon("Golden Arrow", 30.0)
    {}

    virtual ~goldenArrow()
    {}

    virtual double hit(double armor);
};

#endif
