#include <stdio.h>

int prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void primes_in_range(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter start and end of the range: ");
    scanf("%d %d", &start, &end);
    primes_in_range(start, end);
    return 0;
}

