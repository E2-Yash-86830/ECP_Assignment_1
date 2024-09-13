#include <stdio.h>
#include <string.h>

void accept_names(char names[5][100]) {
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], 100, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
}

void print_names(char names[5][100]) {
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
}

void sort_names(char names[5][100]) {
    char temp[100];
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[5][100];

    accept_names(names);
    printf("\nBefore sorting:\n");
    print_names(names);

    sort_names(names);
    printf("\nAfter sorting:\n");
    print_names(names);

    return 0;
}

