#ifndef ACTIONNEUR_H
#define ACTIONNEUR_H

#include <Arduino.h>
#include "../Composant.h"

class Actionneur : public Composant
{
    public:
        // Constructeur
        Actionneur(String n);

        // Destructeur
        virtual ~Actionneur() = default;
};

#endif