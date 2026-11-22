
#include <stdio.h>
#include "jeu.h"

// Fonction pour afficher le plateau
void afficherPlateau(Carte carteTable,
                     Joueur humain,
                     Joueur ordinateur) {

    printf("\n========== UNO ==========\n");

    printf("Humain : %d cartes\n", humain.nbCartes);

    printf("Ordinateur : %d cartes\n",
           ordinateur.nbCartes);

    printf("\nCarte sur la table : ");

    afficherCarte(carteTable);

    printf("=========================\n");
}
