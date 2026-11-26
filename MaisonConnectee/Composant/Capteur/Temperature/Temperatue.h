#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <Arduino.h>
#include "../Capteur.h"

class Temperature : public Capteur
{
    private:
        float degres;       // température mesurée en degrés
        float humidity;     // humidité mesurée
        int broche;         // broche du capteur

    public:
        Temperature(String n);

        float getDegres() const;       // renvoie la température
        float getHumidity() const;     // renvoie l'humidité

        void init() override;          // configure le capteur
};

#endif