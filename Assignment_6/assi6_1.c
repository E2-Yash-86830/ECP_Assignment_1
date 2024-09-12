#include <stdio.h>
#include <string.h>

void strrev(char *str) {
    char *end = str + strlen(str) - 1;
    char temp;
    while (str < end) {
        temp = *str;
        *str++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str1[50], str2[50], str3[50];
    char *token;
    size_t len;
    
    strcpy(str1, "Hello, World!");
    strcpy(str2, "Hello, C Programming!");
    
    len = strlen(str1);
    printf("Length of str1: %zu\n", len);
    
    strcpy(str3, str1);
    printf("str3 after strcpy(): %s\n", str3);
    
    strcat(str1, " It's great.");
    printf("str1 after strcat(): %s\n", str1);
    
    int cmp = strcmp(str1, str2);
    printf("strcmp(str1, str2): %d\n", cmp);
    
    #ifdef _WIN32
        int icmp = _stricmp(str1, str2);
    #else
        int icmp = strcasecmp(str1, str2);
    #endif
    printf("stricmp(str1, str2): %d\n", icmp);
    
    strrev(str2);
    printf("str2 after strrev(): %s\n", str2);
    
    char *ch_ptr = strchr(str1, 'W');
    if (ch_ptr) {
        printf("First occurrence of 'W' in str1: %s\n", ch_ptr);
    }
    
    char *sub_ptr = strstr(str1, "great");
    if (sub_ptr) {
        printf("Substring 'great' found in str1: %s\n", sub_ptr);
    }
    
    strncpy(str3, str1, 5);
    str3[5] = '\0';
    printf("str3 after strncpy(): %s\n", str3);
    
    strncat(str1, " Let's code.", 6);
    printf("str1 after strncat(): %s\n", str1);
    
    int ncmp = strncmp(str1, str2, 5);
    printf("strncmp(str1, str2, 5): %d\n", ncmp);
    
    char str4[] = "This is a test";
    token = strtok(str4, " ");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }
    
    return 0;
}

