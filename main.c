
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "carte.h"
#include "joueur.h"
#include "jeu.h"

int main(void) {

    // Creer les 108 cartes
    Carte paquet[NB_CARTES];

    // Creer les deux joueurs
    Joueur humain;
    Joueur ordinateur;

    // Initialiser le hasard
    srand((unsigned int)time(NULL));

    // Creer et melanger les cartes
    creerPaquet(paquet);
    melangerPaquet(paquet, NB_CARTES);

    // Initialiser les joueurs
    initialiserJoueur(&humain, "Humain");
    initialiserJoueur(&ordinateur, "Ordinateur");

    // Distribuer 7 cartes a chaque joueur
    for (int i = 0; i < 7; i++) {

        ajouterCarte(&humain, paquet[2 * i]);

        ajouterCarte(&ordinateur, paquet[2 * i + 1]);
    }

    // Choisir la premiere carte sur la table
    Carte carteTable = paquet[14];

    // Afficher le plateau
    afficherPlateau(carteTable, humain, ordinateur);

    return 0;
}
