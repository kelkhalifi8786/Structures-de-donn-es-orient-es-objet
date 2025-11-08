#include "ListeChainee.h"

// Destructeur
ListeChainee::~ListeChainee() {
    Noeud* courant = tete;
    while (courant) {
        Noeud* tmp = courant;
        courant = courant->suivant;
        delete tmp;
    }
}

// Ajouter au début
void ListeChainee::ajouterDebut(int val) {
    Noeud* n = new Noeud(val);
    n->suivant = tete;
    tete = n;
}

// Ajouter à la fin
void ListeChainee::ajouterFin(int val) {
    Noeud* n = new Noeud(val);
    if (!tete) {
        tete = n;
        return;
    }
    Noeud* courant = tete;
    while (courant->suivant) {
        courant = courant->suivant;
    }
    courant->suivant = n;
}

// Supprimer un élément
void ListeChainee::supprimer(int val) {
    if (!tete) return;
    if (tete->valeur == val) {
        Noeud* tmp = tete;
        tete = tete->suivant;
        delete tmp;
        return;
    }
    Noeud* courant = tete;
    while (courant->suivant && courant->suivant->valeur != val) {
        courant = courant->suivant;
    }
    if (courant->suivant) {
        Noeud* tmp = courant->suivant;
        courant->suivant = tmp->suivant;
        delete tmp;
    }
}

// Afficher la liste
void ListeChainee::afficher() const {
    Noeud* courant = tete;
    while (courant) {
        std::cout << courant->valeur << " -> ";
        courant = courant->suivant;
    }
    std::cout << "NULL\n";
}

// Taille de la liste
int ListeChainee::taille() const {
    int count = 0;
    Noeud* courant = tete;
    while (courant) {
        count++;
        courant = courant->suivant;
    }
    return count;
}
