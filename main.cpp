
#include <iostream>
#include "Utilisateur.hpp"

int main() {
    std::cout << "Nombre initial : "
              << Utilisateur::getNbUtilisateursConnectes() << std::endl;

    Utilisateur u1("Amine", "admin");

    std::cout << "Apres connexion d'Amine : "
              << Utilisateur::getNbUtilisateursConnectes() << std::endl;

    Utilisateur u2("Sara", "visiteur");

    std::cout << "Apres connexion de Sara : "
              << Utilisateur::getNbUtilisateursConnectes() << std::endl;

    {
        Utilisateur u3("Youssef", "visiteur");

        std::cout << "Apres connexion de Youssef : "
                  << Utilisateur::getNbUtilisateursConnectes() << std::endl;
    }

    std::cout << "Apres deconnexion de Youssef : "
              << Utilisateur::getNbUtilisateursConnectes() << std::endl;

    return 0;
}
