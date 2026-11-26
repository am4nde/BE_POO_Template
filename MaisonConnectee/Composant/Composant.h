#ifndef COMPOSANT_H
#define COMPOSANT_H

//#include <Arduino.h>

class Composant
{
    protected:
        String nom;
    public:
        //Nom composant
        Composant(String n);
        String getNom() const;
        //Fonction virtuelle d'initialisation
        virtual void init() = 0;
        //Destructeur
        virtual ~Composant() = default;
};

#endif