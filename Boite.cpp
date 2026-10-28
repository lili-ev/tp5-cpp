
#include "Boite.hpp"

int Boite::nbBoites = 0;

Boite::Boite(double longueur, double largeur, double hauteur) {
    this->longueur = longueur;
    this->largeur = largeur;
    this->hauteur = hauteur;

    nbBoites++;
}

Boite::~Boite() {
    nbBoites--;
}

int Boite::getNombreBoites() {
    return nbBoites;
}
