#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum, count;

    printf("Armstrong numbers between 1 and 500: ");

    for (num = 1; num <= 500; num++) {
        temp = num;
        sum = 0;
        count = 0;
        while (temp > 0) {
            temp /= 10;
            count++;
        }

        temp = num;
        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}

