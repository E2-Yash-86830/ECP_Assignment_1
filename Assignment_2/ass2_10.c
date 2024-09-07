#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 65 && c <= 90) {
        printf("ALPHABET: UPPERCASE\n");
    } else if (c >= 97 && c <= 122) {
        printf("ALPHABET: LOWERCASE\n");
    } else if (c >= 48 && c <= 57) {
        printf("DIGIT\n");
    } else if (c == 32 || c == 9 || c == 13 || c == 10) {
        printf("SPACE/TAB/CARRIAGE RETURN/NEWLINE\n");
    } else {
        printf("OTHER\n");
    }

    return 0;
}

