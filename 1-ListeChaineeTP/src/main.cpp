#include "ListeChainee.h"

int main() {
    ListeChainee liste;

    liste.ajouterDebut(5);
    liste.ajouterFin(10);
    liste.ajouterDebut(3);

    std::cout << "Liste actuelle : ";
    liste.afficher();

    std::cout << "Taille de la liste : " << liste.taille() << std::endl;

    liste.supprimer(5);
    std::cout << "Après suppression de 5 : ";
    liste.afficher();

    return 0;
}
