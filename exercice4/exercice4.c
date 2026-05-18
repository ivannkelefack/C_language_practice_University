//
// Created by Ivan Nkelefack on 2026-05-18.
//

#include <stdio.h>
#include "exercice4.h"

void copy(char* ch1, char* ch2) {
    char* src  = ch1;
    char* dest = ch2;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char src[] = "Bonjour le monde";
    char dest[50];
    copy(src, dest);
    printf("Original : %s\n", src);
    printf("Copie    : %s\n", dest);

    return 0;
}