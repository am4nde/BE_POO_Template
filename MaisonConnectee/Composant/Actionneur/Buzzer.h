#ifndef BUZZER_H
#define BUZZER_H

#include <Arduino.h>
#include "../Actionneur.h"

class Buzzer : public Actionneur
{
    private:
        int broche;     // broche de l'Arduino
        bool etat;      // true = actif, false = inactif

    public:
        Buzzer(String n, int b);

        void init() override;      // configure la broche
        void activer();
        void desactiver();
        bool getEtat() const;      // renvoie l'état actuel
};

#endif