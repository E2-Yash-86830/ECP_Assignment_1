#include <stdio.h>

#define MAX_STUDENTS 3

typedef struct {
    int standard;
    char name[50];
    union {
        char grade;
        float percentage;
    } result;
} Student;

int main() {
    Student students[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter standard for student %d: ", i + 1);
        scanf("%d", &students[i].standard);
        if (students[i].standard <= 4) {
            printf("Enter grade (A/B/C) for student %d: ", i + 1);
            scanf(" %c", &students[i].result.grade);
        } else {
            printf("Enter percentage for student %d: ", i + 1);
            scanf("%f", &students[i].result.percentage);
        }
    }

    printf("Student Information:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Name: %s, Standard: %d, ", students[i].name, students[i].standard);
        if (students[i].standard <= 4) {
            printf("Grade: %c\n", students[i].result.grade);
        } else {
            printf("Percentage: %.2f%%\n", students[i].result.percentage);
        }
    }

    return 0;
}

