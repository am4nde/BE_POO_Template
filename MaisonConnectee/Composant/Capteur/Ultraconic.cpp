#include "CapteurUltrason.h"

CapteurUltrason::CapteurUltrason(String n, int b) : Capteur(n), broche(b)
{
}

void CapteurUltrason::init()
{
    pinMode(broche, OUTPUT);
    digitalWrite(broche, LOW);
}

long CapteurUltrason::getDistance()
{
    // 1. Envoyer l'impulsion
    pinMode(broche, OUTPUT);
    digitalWrite(broche, LOW);
    delayMicroseconds(2);
    digitalWrite(broche, HIGH);
    delayMicroseconds(10);
    digitalWrite(broche, LOW);

    // 2. Capter l'écho
    pinMode(broche, INPUT);
    long duree = pulseIn(broche, HIGH, 30000);

    // 3. Convertir en distance
    return duree / 58;
}