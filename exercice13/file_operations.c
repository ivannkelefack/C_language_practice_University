//
// Created by Ivan Nkelefack on 2026-06-13.
//

#include "file_operations.h"
#include <stdio.h>
#include <assert.h>

int main() {
    FILE *fptr;

    // Hard 1 — File Writing
    fptr = fopen("student.txt", "w");
    assert(fptr != NULL);
    fprintf(fptr, "Name: Alice\n");
    fprintf(fptr, "Grade: 87\n");
    fclose(fptr);
    printf("File written successfully\n");

    // Hard 2 — File Reading
    int num, sum = 0;
    fptr = fopen("numbers.txt", "r");
    assert(fptr != NULL);
    while (fscanf(fptr, "%d", &num) == 1) {
        sum += num;
    }
    fclose(fptr);
    printf("Sum = %d\n", sum);

    return 0;
}