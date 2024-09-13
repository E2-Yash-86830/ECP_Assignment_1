#include <stdio.h>

void remove_char(char *str, char char_to_remove) {
    char *src = str;
    char *dst = str;

    while (*src) {
        if (*src != char_to_remove) {
            *dst++ = *src;
        }
        ++src;
    }
    *dst = '\0';
}

int main() {
    char str[100];
    char char_to_remove;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter character to remove: ");
    char_to_remove = getchar();

    remove_char(str, char_to_remove);

    printf("Modified string: %s\n", str);

    return 0;
}

