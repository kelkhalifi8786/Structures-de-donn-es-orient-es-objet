#include "TableHachage.h"
#include <iostream>
#include <string>

int main() {
    TableHachage<std::string> th(5);

    th.inserer(1, "Alice");
    th.inserer(6, "Bob");     // collision avec 1
    th.inserer(3, "Charlie");
    th.inserer(8, "David");   // collision avec 3

    std::cout << "Contenu de la table :" << std::endl;
    th.afficher();

    std::string val;
    if (th.rechercher(6, val)) {
        std::cout << "Clé 6 trouvée : " << val << std::endl;
    } else {
        std::cout << "Clé 6 non trouvée" << std::endl;
    }

    th.supprimer(1);
    std::cout << "Après suppression de la clé 1 :" << std::endl;
    th.afficher();

    return 0;
}
