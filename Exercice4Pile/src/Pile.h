#ifndef PILE_H
#define PILE_H

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm> // <-- ajouté

template <typename T>
class Pile {
private:
    std::vector<T> elements;

public:
    Pile() = default;

    void empiler(const T& element) {
        elements.push_back(element);
    }

    T depiler() {
        if (estVide()) {
            throw std::runtime_error("Pile vide : impossible de depiler");
        }
        T top = elements.back();
        elements.pop_back();
        return top;
    }

    T sommet() const {
        if (estVide()) {
            throw std::runtime_error("Pile vide : impossible de lire le sommet");
        }
        return elements.back();
    }

    bool estVide() const {
        return elements.empty();
    }

    void afficher() const {
        std::cout << "Pile : ";
        for (auto it = elements.rbegin(); it != elements.rend(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }

    void inverser() {
        std::reverse(elements.begin(), elements.end()); // fonctionne maintenant
    }
};

#endif

