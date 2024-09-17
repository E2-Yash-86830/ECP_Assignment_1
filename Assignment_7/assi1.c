#include <stdio.h>
#include <stdlib.h>


void accept_2d_array(int rows, int cols, int arr[rows][cols]) {
    printf("Enter elements for a %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void print_2d_array(int rows, int cols, int arr[rows][cols]) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3;
    int cols = 3;
    
    
    int (*matrix)[cols] = malloc(rows * sizeof(*matrix));
    
    if (matrix == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    accept_2d_array(rows, cols, matrix);
    print_2d_array(rows, cols, matrix);

    free(matrix);

    return 0;
}

