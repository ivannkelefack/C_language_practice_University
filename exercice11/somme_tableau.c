#include <stdio.h>
#include "somme_tableau.h"

int somme_tableau(int tab[], int taille) {
    if (taille == 0) return 0;
    return tab[taille - 1] + somme_tableau(tab, taille - 1);
}

int main() {
    int tab[] = {3, 7, 2, 9, 1};
    printf("somme_tableau({3,7,2,9,1}) = %d\n", somme_tableau(tab, 5));
    return 0;
}
