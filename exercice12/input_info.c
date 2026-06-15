//
// Created by Ivan Nkelefack on 2026-06-13.
//

#include "input_info.h"
#include <stdio.h>

int main() {
    int age;
    float height;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);

    return 0;
}