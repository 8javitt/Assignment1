/*
 * File:  SimpleHammer.h
 * Author: Ottoniel Javitt
 * FSUID: oaj16
 */

 #include "SimpleHammer.H"

 double SimpleHammer::hit(double armor)
 {
   if (armor < 30)
   {
     double damage = hitPoints;
   }
   else
   {
     double damage = hitPoints - armor;
   }

 }
