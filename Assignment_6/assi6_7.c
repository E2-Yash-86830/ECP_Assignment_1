#include <stdio.h>
#include <string.h>

// Function to convert a number to its English words representation
void print_number_in_words(int num) {
    const char *units[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    const char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    const char *thousands[] = {"", "Thousand", "Million", "Billion"};

    if (num == 0) {
        printf("Zero");
        return;
    }

    void print_less_than_1000(int number) {
        if (number >= 100) {
            printf("%s Hundred ", units[number / 100]);
            number %= 100;
        }
        if (number >= 20) {
            printf("%s ", tens[number / 10]);
            number %= 10;
        } else if (number >= 10) {
            printf("%s ", teens[number - 10]);
            return;
        }
        if (number > 0) {
            printf("%s ", units[number]);
        }
    }

    int i = 0;
    int chunk = 0;

    while (num > 0) {
        chunk = num % 1000;
        if (chunk != 0) {
            print_less_than_1000(chunk);
            printf("%s ", thousands[i]);
        }
        num /= 1000;
        i++;
    }
}

int main() {
    int num = 123456789;
    printf("Number in words: ");
    print_number_in_words(num);
    printf("\n");

    return 0;
}

