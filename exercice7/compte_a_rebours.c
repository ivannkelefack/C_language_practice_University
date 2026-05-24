#include <stdio.h>
#include "compte_a_rebours.h"

void compte_a_rebours(int n) {
    if (n < 0) return;
    printf("%d\n", n);
    compte_a_rebours(n - 1);
}

int main() {
    compte_a_rebours(5);
    return 0;
}
