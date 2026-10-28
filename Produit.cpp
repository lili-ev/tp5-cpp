
#include "Produit.hpp"

float Produit::tauxTVA = 0.20f;

Produit::Produit(std::string nom, float prixHT) {
    this->nom = nom;
    this->prixHT = prixHT;
}

float Produit::getPrixTTC() const {
    return prixHT * (1 + tauxTVA);
}

void Produit::modifierTVA(float nouveauTaux) {
    tauxTVA = nouveauTaux;
}
