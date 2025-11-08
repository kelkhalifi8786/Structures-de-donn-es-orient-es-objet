#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <stdexcept>
#include <string>

// Exception personnalisée
class FileVideException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Erreur : la file est vide !";
    }
};

// Template de la classe File
template <typename T>
class File {
    // … tout le code de File ici …
};
#endif
