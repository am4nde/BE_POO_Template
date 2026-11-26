#ifndef COMPOSANT_H
#define COMPOSANT_H

#include <Arduino.h>

class Composant
{
    protected:
        String nom;     // nom du composant

    public:
        Composant(String n);

        String getNom() const;      // renvoie le nom du composant
        virtual void init() = 0;    // initialise le composant

        virtual ~Composant() = default;     // destructeur
};

#endif