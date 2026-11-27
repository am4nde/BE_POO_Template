#ifndef CAPTEURULTRASON_H
#define CAPTEURULTRASON_H

#include <Arduino.h>
#include "../Capteur.h"

class CapteurUltrason : public Capteur
{
    private:
        int broche;

    public:
        CapteurUltrason(String n, int b);

        void init() override;
        long getDistance();
};

#endif