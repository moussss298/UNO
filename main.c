
#include <stdio.h>
#include "carte.h"

int main(void) {

    Carte paquet[NB_CARTES];

    creerPaquet(paquet);

    printf("=== PAQUET UNO ===\n");

    for (int i = 0; i < NB_CARTES; i++) {

        printf("Carte %d : ", i + 1);
        afficherCarte(paquet[i]);

    }

    printf("\nTotal : %d cartes\n", NB_CARTES);

    return 0;
}
