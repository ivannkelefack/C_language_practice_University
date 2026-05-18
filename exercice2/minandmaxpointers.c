//
// Created by Ivan Nkelefack on 2026-05-18.
//
#include <stdio.h>
#include "minandmaxpointers.h"


void minMax(int* tab, int taille, int* min, int* max) {
    *min = *tab;
    *max = *tab;
    int* p = tab;
    while (p < tab + taille) {
        if (*p < *min) *min = *p;
        if (*p > *max) *max = *p;
        p++;
    }
}

int main() {
    int tab[] = {3, 7, 1, 9, 4, 2};
    int min, max;
    minMax(tab, 6, &min, &max);
    printf("Min = %d, Max = %d\n", min, max);
    return 0;
}