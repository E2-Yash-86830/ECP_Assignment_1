#include <stdio.h>
#include <string.h>

void remove_chars(char *str2, const char *str1) {
    char *dst = str2;
    for (const char *src = str2; *src; ++src) {
        int remove = 0;
        for (const char *c = str1; *c; ++c) {
            if (*src == *c) {
                remove = 1;
                break;
            }
        }
        if (!remove) {
            *dst++ = *src;
        }
    }
    *dst = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter string to remove characters from: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove newline

    printf("Enter characters to remove: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove newline

    remove_chars(str2, str1);
    printf("Modified string: %s\n", str2);

    return 0;
}

