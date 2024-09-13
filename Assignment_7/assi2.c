#include <stdio.h>

#define SIZE 3

int sum_row(int matrix[SIZE][SIZE], int row) {
    int sum = 0;
    for (int j = 0; j < SIZE; j++)
        sum += matrix[row][j];
    return sum;
}

int sum_column(int matrix[SIZE][SIZE], int col) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
        sum += matrix[i][col];
    return sum;
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = 1; 
    int col = 2; 

    printf("Sum of elements in row %d: %d\n", row, sum_row(matrix, row));
    printf("Sum of elements in column %d: %d\n", col, sum_column(matrix, col));

    return 0;
}

