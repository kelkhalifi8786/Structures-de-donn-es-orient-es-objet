#include "Pile.h"
#include <iostream>
#include <string>

int main() {
    try {
        Pile<int> pileInt;
        pileInt.empiler(10);
        pileInt.empiler(20);
        pileInt.empiler(30);
        pileInt.afficher();

        std::cout << "Depile : " << pileInt.depiler() << std::endl;
        pileInt.afficher();

        Pile<std::string> pileStr;
        pileStr.empiler("Alice");
        pileStr.empiler("Bob");
        pileStr.afficher();

        std::cout << "Sommet : " << pileStr.sommet() << std::endl;
        pileStr.depiler();
        pileStr.depiler();
        // La ligne suivante va lever une exception
        pileStr.depiler();
    } catch (std::runtime_error& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}
