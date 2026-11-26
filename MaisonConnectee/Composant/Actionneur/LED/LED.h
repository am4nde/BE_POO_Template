#ifndef LED_H
#define LED_H

#include <Arduino.h>
#include "../Actionneur.h"

class LED : public Actionneur
{
    private:
        int broche;     // broche de l'Arduino
        bool etat;      // true = allumée, false = éteinte

    public:
        LED(String n, int b);

        void init() override;      // configure la broche
        void allumer();
        void eteindre();
        bool getEtat() const;      // renvoie l'état actuel
};

#endif