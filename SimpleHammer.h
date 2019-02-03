/*
 * File:  SimpleHammer.h
 * Author: Ottoniel Javitt
 * FSUID: oaj16
 */

 #include <string>
 #include "Weapon.h"

 #ifndef SIMPLEHAMMER_H
 #define SIMPLEHAMMER_H

class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple Hammer", 25.0)
    {}

    virtual ~SimpleHammer()
    {};

    virtual double hit(double armor);
};


 #endif
