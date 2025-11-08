#ifndef LISTECHAINEE_H
#define LISTECHAINEE_H

#include "Noeud.h"
#include <iostream>

class ListeChainee {
private:
    Noeud* tete;

public:
    ListeChainee() : tete(nullptr) {}
    ~ListeChainee();

    void ajouterDebut(int val);
    void ajouterFin(int val);
    void supprimer(int val);
    void afficher() const;
    int taille() const;
};

#endif
