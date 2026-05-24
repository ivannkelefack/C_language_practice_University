#include <stdio.h>
#include "chercher_max.h"

int chercher_max(int tab[], int taille) {
    if (taille == 1) return tab[0];
    int max_reste = chercher_max(tab, taille - 1);
    if (tab[taille - 1] > max_reste)
        return tab[taille - 1];
    return max_reste;
}

int main() {
    int tab[] = {3, 7, 2, 9, 1};
    printf("chercher_max({3,7,2,9,1}) = %d\n", chercher_max(tab, 5));
    return 0;
}
