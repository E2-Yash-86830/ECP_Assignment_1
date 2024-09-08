#include <stdio.h>

int main() {
    int i, j;
    int Prime;

    printf("Prime numbers between 1 and 100:\n");

    for (i = 2; i <= 100; i++) {
        Prime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                Prime = 0;
                break;
            }
        }

        if (Prime) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}

