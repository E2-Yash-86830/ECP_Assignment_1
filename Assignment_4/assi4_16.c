#include <stdio.h>

void printHexadecimal(int n) {
    if (n > 0) {
        printHexadecimal(n / 16);
        printf("%X", n % 16);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Hexadecimal representation of %d is: ", number);
    printHexadecimal(number);
    printf("\n");

    return 0;
}
