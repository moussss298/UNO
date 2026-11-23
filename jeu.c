
#include <stdio.h>
#include "jeu.h"

// Fonction pour afficher le plateau
void afficherPlateau(Carte carteTable,
                     Joueur moussa,
                     Joueur ordinateur) {

    printf("\n========== UNO ==========\n");

    printf("Moussa : %d cartes\n", moussa.nbCartes);

    printf("Ordinateur : %d cartes\n",
           ordinateur.nbCartes);

    printf("\nCarte sur la table : ");

    afficherCarte(carteTable);

    printf("=========================\n");
}
