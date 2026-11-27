#include "BUZZER.h"

// Constructeur
Buzzer::Buzzer(String n, int b) : Actionneur(n)
{
    broche = b;
}

// Initialisation
void Buzzer::init()
{
    etat = false;
    pinMode(broche, OUTPUT);
    digitalWrite(broche, LOW);
}

// Activer le buzzer
void Buzzer::activer()
{
    digitalWrite(broche, HIGH);
    etat = true;
}

// Désactiver le buzzer
void Buzzer::desactiver()
{
    digitalWrite(broche, LOW);
    etat = false;
}