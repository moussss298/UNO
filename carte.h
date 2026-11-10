
#ifndef CARTE_H
#define CARTE_H

#define NB_CARTES 108

typedef struct {
    char type[3];
    char couleur;
} Carte;

void creerPaquet(Carte paquet[NB_CARTES]);
void afficherCarte(Carte carte);

#endif
