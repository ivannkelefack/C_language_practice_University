//
// Created by Ivan Nkelefack on 2026-05-18.
//
#include <stdio.h>
#include "pointercount.h"

int compterA(char* ch) {
    int count = 0;
    char* p = ch;
    while (*p != '\0') {
        if (*p == 'A' || *p == 'a')
            count++;
        p++;
    }
    return count;
}

int main() {
    char chaine[] = "Ananas et Avocat";
    printf("Nombre de 'A'/'a' : %d\n", compterA(chaine));
    return 0;
}