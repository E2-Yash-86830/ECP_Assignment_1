#include <stdio.h>
#include <string.h>

// Function to convert an integer to a Roman numeral
void int_to_roman(int num, char *result) {
    struct {
        int value;
        const char *numeral;
    } roman_numerals[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };

    int i = 0;
    result[0] = '\0';

    while (num > 0) {
        while (num >= roman_numerals[i].value) {
            strcat(result, roman_numerals[i].numeral);
            num -= roman_numerals[i].value;
        }
        i++;
    }
}

// Function to convert a Roman numeral to an integer
int roman_to_int(const char *roman) {
    struct {
        const char *numeral;
        int value;
    } roman_numerals[] = {
        {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400},
        {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40},
        {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4},
        {"I", 1}
    };

    int result = 0;
    int i;
    while (*roman) {
        int matched = 0;
        for (i = 0; i < sizeof(roman_numerals) / sizeof(roman_numerals[0]); i++) {
            int len = strlen(roman_numerals[i].numeral);
            if (strncmp(roman, roman_numerals[i].numeral, len) == 0) {
                result += roman_numerals[i].value;
                roman += len;
                matched = 1;
                break;
            }
        }
        if (!matched) break;
    }
    return result;
}

// Main function to test the conversion functions
int main() {
    char buffer[100];

    // Convert number to Roman numeral
    int_to_roman(1987, buffer);
    printf("Number to Roman: %s\n", buffer);

    // Convert Roman numeral to number
    int number = roman_to_int("MCMLXXXVII");
    printf("Roman to Number: %d\n", number);

    return 0;
}

