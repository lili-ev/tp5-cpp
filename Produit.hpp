
#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <string>

class Produit {
private:
    std::string nom;
    float prixHT;

    static float tauxTVA;

public:
    Produit(std::string nom, float prixHT);

    float getPrixTTC() const;

    static void modifierTVA(float nouveauTaux);
};

#endif
