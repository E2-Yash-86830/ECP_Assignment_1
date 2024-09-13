#include <stdio.h>
#include <stdlib.h>

char* itoa(int value, char *string, int base) {
    char *ptr = string;
    char *ptr1 = string;
    char tmp_char;
    int tmp_value;

    if (base < 2 || base > 36) {
        *string = '\0';
        return string;
    }

    do {
        tmp_value = value;
        value /= base;
        tmp_char = "0123456789abcdefghijklmnopqrstuvwxyz"[35 + (tmp_value - value * base)];
        *ptr++ = tmp_char;
    } while (value);

    if (tmp_value < 0) *ptr++ = '-';
    *ptr = '\0';

    char *start = string;
    char *end = ptr - 1;
    while (start < end) {
        tmp_char = *start;
        *start++ = *end;
        *end-- = tmp_char;
    }

    return string;
}

int main() {
    char buffer[33];
    int num = 255;
    int base = 16;
    printf("Integer to string: %s\n", itoa(num, buffer, base));
    return 0;
}

