#include <stdio.h>
#include "somme_chiffres.h"

int somme_chiffres(int n) {
    if (n < 10) return n;
    return (n % 10) + somme_chiffres(n / 10);
}

int main() {
    printf("somme_chiffres(254) = %d\n", somme_chiffres(254));
    printf("somme_chiffres(999) = %d\n", somme_chiffres(999));
    return 0;
}
