#include <stdio.h>

int a = 0, b = 1;

int next_fib() {
    int next = a + b;
    a = b;
    b = next;
    return a;
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", next_fib());
    }
    printf("\n");
    return 0;
}

