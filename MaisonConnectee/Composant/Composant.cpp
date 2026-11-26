
#include "Composant.h"

Composant::Composant(String n)
{
    nom = n;
}

String Composant::getNom() const
{
    return nom;
}