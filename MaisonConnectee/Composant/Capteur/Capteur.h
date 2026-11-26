#ifndef CAPTEUR_H
#define CAPTEUR_H

#include <Arduino.h>
#include "../Composant.h"

class Capteur : public Composant
{
public:
    // Constructeur
    Capteur(String n);

    // Destructeur
    virtual ~Capteur() = default;
};

#endif