/*
 * File:  SimpleHammer.h
 * Author: Ottoniel Javitt
 * FSUID: oaj16
 */


#include "CommonSpear.h"

double CommonSpear::hit(double armor) {
    double damage = hitPoints - (rand() % armor / 3 + 2);
    if (damage < 0) {
       return 0;
    }
    return damage;
}
