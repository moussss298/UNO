
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "carte.h"

int main(void) {

    Carte paquet[NB_CARTES];

    srand((unsigned int)time(NULL));
 
    creerPaquet(paquet);

    melangerPaquet(paquet, NB_CARTES);

    printf("=== PAQUET UNO MELANGE ===\n");

    for (int i = 0; i < NB_CARTES; i++) {

        printf("Carte %d : ", i + 1);
        afficherCarte(paquet[i]);

    }

    printf("\nTotal : %d cartes\n", NB_CARTES);

    return 0;
}
