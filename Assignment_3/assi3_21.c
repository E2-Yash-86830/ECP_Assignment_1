#include <stdio.h>

int main() {
    int num, count = 0, current, isPrime, i, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("First 5 prime numbers after %d:\n", num);
    current = num + 1;
    while (count < 5) {
        isPrime = 1;
        for (i = 2; i <= current / 2; i++) {
            if (current % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", current);
            count++;
        }

        current++;
    }

    printf("\n");
    return 0;
}

