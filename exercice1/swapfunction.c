//
// Created by Ivan Nkelefack on 2026-05-18.
//

#include <stdio.h>
#include "swapfunction.h"
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 10;
    printf("Avant : a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Après : a = %d, b = %d\n", a, b);
    return 0;
}