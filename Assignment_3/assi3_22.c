#include <stdio.h>

int main() {
    int i, j;
    char ch;

    // Pattern 1: Increasing Stars
    printf("Pattern 1: Increasing Stars\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern 2: Increasing Numbers
    printf("\nPattern 2: Increasing Numbers\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Pattern 3: Decreasing Stars
    printf("\nPattern 3: Decreasing Stars\n");
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern 4: Decreasing Numbers
    printf("\nPattern 4: Decreasing Numbers\n");
    for (i = 5; i >= 1; i--) {
        for (j = 5; j >= 6 - i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Pattern 5: Diamond of Letters
   

    // Pattern 6: Right Triangle of Letters
    printf("\nPattern 6: Right Triangle of Letters\n");
    for (i = 0; i < 4; i++) {
        ch = 'A' + i;
        for (j = 0; j < 4 - i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    // Pattern 7: Triangle of Characters
    printf("\nPattern 7: Triangle of Characters\n");
    ch = 'A';
    for (i = 1; i <= 4; i++) {
        for (j = 0; j < i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
        ch = 'A' + i;
    }

    return 0;
}

