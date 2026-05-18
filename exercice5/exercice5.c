//
// Created by Ivan Nkelefack on 2026-05-18.
//

#include <stdio.h>
#include <stdlib.h>
#include "exercice5.h"

void copy(char* ch1, char** ch2) {

    int len = 0;
    char* p = ch1;
    while (*p != '\0') {
        len++;
        p++;
    }
    len++;

    *ch2 = (char*)malloc(len * sizeof(char));

    char* src  = ch1;
    char* dest = *ch2;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char  src[] = "Bonjour le monde";
    char* dest;

    copy(src, &dest);

    printf("Original : %s\n", src);
    printf("Copie    : %s\n", dest);

    free(dest);
    return 0;
}