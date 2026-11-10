
#include <stdio.h>
#include <string.h>
#include "carte.h"

void creerPaquet(Carte paquet[NB_CARTES]) {

    char couleurs[4] = {'R', 'V', 'J', 'B'};
    char speciaux[3][3] = {"+2", "RV", "PS"};

    int indice = 0;

    // Creer les cartes de chaque couleur
    for (int c = 0; c < 4; c++) {

        // Creer les cartes numerotees
        for (int n = 0; n <= 9; n++) {

            int copies = 2;

            if (n == 0) {
                copies = 1;
            }

            for (int k = 0; k < copies; k++) {

                paquet[indice].type[0] = '0' + n;
                paquet[indice].type[1] = '\0';
                paquet[indice].couleur = couleurs[c];

                indice++;
            }
        }

        // Creer les cartes speciales
        for (int s = 0; s < 3; s++) {

            for (int k = 0; k < 2; k++) {

                strcpy(paquet[indice].type, speciaux[s]);
                paquet[indice].couleur = couleurs[c];

                indice++;
            }
        }
    }

    // Creer les 4 Jokers et les 4 cartes +4
    for (int k = 0; k < 4; k++) {

        strcpy(paquet[indice].type, "JJ");
        paquet[indice].couleur = 'N';
        indice++;

        strcpy(paquet[indice].type, "+4");
        paquet[indice].couleur = 'N';
        indice++;
    }
}

void afficherCarte(Carte carte) {

    printf("%s %c\n", carte.type, carte.couleur);

}
