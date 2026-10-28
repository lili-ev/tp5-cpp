
#include "Utilisateur.hpp"

int Utilisateur::nbUtilisateursConnectes = 0;

Utilisateur::Utilisateur(std::string nom, std::string role) {
    this->nom = nom;
    this->role = role;

    nbUtilisateursConnectes++;
}

Utilisateur::~Utilisateur() {
    nbUtilisateursConnectes--;
}

int Utilisateur::getNbUtilisateursConnectes() {
    return nbUtilisateursConnectes;
}
