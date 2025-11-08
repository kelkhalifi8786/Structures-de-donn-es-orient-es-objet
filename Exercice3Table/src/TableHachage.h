#ifndef TABLEHACHAGE_H
#define TABLEHACHAGE_H

#include <iostream>
#include <list>
#include <string>
#include <vector>

template <typename T>
class TableHachage {
private:
    int taille_;
    std::vector<std::list<std::pair<int, T>>> table_;

    // Fonction de hachage simple : clé modulo taille
    int hacher(int cle) const {
        return cle % taille_;
    }

public:
    TableHachage(int taille = 10) : taille_(taille), table_(taille) {}

    void inserer(int cle, const T& valeur) {
        int index = hacher(cle);
        table_[index].push_back({cle, valeur});
    }

    bool rechercher(int cle, T& valeur) const {
        int index = hacher(cle);
        for (auto& p : table_[index]) {
            if (p.first == cle) {
                valeur = p.second;
                return true;
            }
        }
        return false;
    }

    void supprimer(int cle) {
        int index = hacher(cle);
        auto& liste = table_[index];
        for (auto it = liste.begin(); it != liste.end(); ++it) {
            if (it->first == cle) {
                liste.erase(it);
                return;
            }
        }
    }

    void afficher() const {
        for (int i = 0; i < taille_; ++i) {
            std::cout << "Case " << i << ": ";
            for (auto& p : table_[i]) {
                std::cout << "(" << p.first << ", " << p.second << ") ";
            }
            std::cout << std::endl;
        }
    }
};

#endif
