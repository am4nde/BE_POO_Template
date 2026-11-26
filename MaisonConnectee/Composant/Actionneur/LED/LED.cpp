
#include "LED.h"

// Constructeur
LED::LED(String n, int b) : Actionneur(n)
{
    broche = b;
}

// Initialisation
void LED::init()
{
    etat = false;
    pinMode(broche, OUTPUT);
    digitalWrite(broche, LOW);
}

// Allumer la LED
void LED::allumer()
{
    digitalWrite(broche, HIGH);
    etat = true;
}

// Éteindre la LED
void LED::eteindre()
{
    digitalWrite(broche, LOW);
    etat = false;
}

// Récupérer l'état de la LED
bool LED::getEtat()
{
    return etat;
}