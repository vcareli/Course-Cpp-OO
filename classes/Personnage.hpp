#ifndef PERSONNAGE_HPP_INCLUDED
#define PERSONNAGE_HPP_INCLUDED

#include <string>
#include <iostream>
#include "Arme.hpp"

class Personnage{

    //Méthodes
public:
    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    ~Personnage();                          //Destructeur
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quatitedPotion);
    void changeArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void afficherEtat();

    //Atributs
private:
    int m_vie;
    int m_mana;
    Arme m_arme;
};


#endif // PERSONNAGE_HPP_INCLUDED
