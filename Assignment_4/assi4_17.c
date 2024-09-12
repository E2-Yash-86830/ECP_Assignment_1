#include <stdio.h>

int sum = 0;
int product = 1;

void cal_sum_mul(int a, int b) {
    sum = a + b;
    product = a * b;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    cal_sum_mul(num1, num2);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
