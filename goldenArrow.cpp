/*
 * File:  SimpleHammer.h
 * Author: Ottoniel Javitt
 * FSUID: oaj16
 */


#include "goldenArrow.h"

double goldenArrow::hit(double armor) {
    double damage = hitPoints - (rand() % 75); // Ignores a random number of armor points between 0 an 75.
    if (damage < 0) {
       return 0;
    }
    return damage;
}
