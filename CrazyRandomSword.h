/*
 * File:  SimpleHammer.h
 * Author: Ottoniel Javitt
 * FSUID: oaj16
 */


#include <string>
#include "Weapon.h"
#include <cstdlib>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon
{
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", rand() % 100 + 7)
    {}

    virtual ~CrazyRandomSword()
    {}

    virtual double hit(double armor);
};

#endif
