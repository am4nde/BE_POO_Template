
#include "Temperature.h"

// Constructeur
Temperature::Temperature(String n, int b) : Capteur(n)
{
    broche = b;
}

// Initialisation
void Temperature::init()
{
    pinMode(broche, INPUT);
}