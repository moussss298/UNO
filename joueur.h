
#ifndef JOUEUR_H
#define JOUEUR_H

#include "carte.h"

#define MAX_MAIN 108

typedef struct {
    char nom[30];
    Carte main[MAX_MAIN];
    int nbCartes;
} Joueur;

void initialiserJoueur(Joueur *joueur, const char *nom);

int ajouterCarte(Joueur *joueur, Carte carte);

int retirerCarte(Joueur *joueur, int position);

void afficherMain(Joueur joueur);

#endif
