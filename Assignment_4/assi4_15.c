#include <stdio.h>

void printBinary(int n) {
    if (n > 0) {
        printBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary representation of %d is: ", number);
    printBinary(number);
    printf("\n");

    return 0;
}
