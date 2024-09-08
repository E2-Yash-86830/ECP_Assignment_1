#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the range (two numbers): ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = start; i <= 10; i++) {
        for (int j = start; j <= end; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}


