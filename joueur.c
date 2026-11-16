
#include <stdio.h>
#include <string.h>
#include "joueur.h"

// Initialiser un joueur
void initialiserJoueur(Joueur *joueur, const char *nom) {

    strcpy(joueur->nom, nom);

    joueur->nbCartes = 0;
}

// Ajouter une carte a un joueur
int ajouterCarte(Joueur *joueur, Carte carte) {

    if (joueur->nbCartes >= MAX_MAIN) {
        return 0;
    }

    joueur->main[joueur->nbCartes] = carte;

    joueur->nbCartes++;

    return 1;
}

// Retirer une carte de la main
int retirerCarte(Joueur *joueur, int position) {

    if (position < 0 || position >= joueur->nbCartes) {
        return 0;
    }

    for (int i = position; i < joueur->nbCartes - 1; i++) {

        joueur->main[i] = joueur->main[i + 1];
    }

    joueur->nbCartes--;

    return 1;
}

// Afficher les cartes d'un joueur
void afficherMain(Joueur joueur) {

    printf("\nMain de %s :\n", joueur.nom);

    for (int i = 0; i < joueur.nbCartes; i++) {

        printf("%d. ", i + 1);

        afficherCarte(joueur.main[i]);
    }

    printf("Nombre de cartes : %d\n", joueur.nbCartes);
}
