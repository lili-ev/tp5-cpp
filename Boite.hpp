
#ifndef BOITE_HPP
#define BOITE_HPP

class Boite {
private:
    double longueur;
    double largeur;
    double hauteur;

    static int nbBoites;

public:
    Boite(double longueur, double largeur, double hauteur);
    ~Boite();

    static int getNombreBoites();
};

#endif
