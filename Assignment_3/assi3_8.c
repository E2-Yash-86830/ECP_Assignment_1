#include <stdio.h>

int main() {
    int num, factor = 2;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d = ", num);

    int first = 1;

    while (num > 1) {
        if (num % factor == 0) {
            if (!first) {
                printf(" * ");
            }
            printf("%d", factor);
            num /= factor;
            first = 0;
        } else {
            factor++;
        }
    }

    printf("\n");
    return 0;
}

