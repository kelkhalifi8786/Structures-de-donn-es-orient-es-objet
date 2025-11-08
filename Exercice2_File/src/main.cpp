#include "File.h"
#include <iostream>
#include <string>

int main() {
    try {
        File<int> fInt(5);           // Template <int>
        File<std::string> fStr(3);   // Template <string>

        fInt.enfiler(10);
        fInt.enfiler(20);
        fInt.enfiler(30);
        fInt.afficher();

        std::cout << "Défile : " << fInt.defiler() << std::endl;
        fInt.afficher();

        fStr.enfiler("Alice");
        fStr.enfiler("Bob");
        fStr.afficher();

        std::cout << "Défile : " << fStr.defiler() << std::endl;
        fStr.afficher();

        // Défiler trop
        fInt.defiler();
        fInt.defiler();
        fInt.defiler(); // va lever exception
    }
    catch(FileVideException& e) {
        std::cerr << e.what() << std::endl;
    }
}
