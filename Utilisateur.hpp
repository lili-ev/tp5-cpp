
#ifndef UTILISATEUR_HPP
#define UTILISATEUR_HPP

#include <string>

class Utilisateur {
private:
    std::string nom;
    std::string role;

    static int nbUtilisateursConnectes;

public:
    Utilisateur(std::string nom, std::string role);
    ~Utilisateur();

    static int getNbUtilisateursConnectes();
};

#endif
