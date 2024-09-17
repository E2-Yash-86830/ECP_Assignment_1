#include <stdio.h>

typedef struct {
    unsigned int standard: 4;
    unsigned int gender: 1;
    unsigned int age: 6;
    char name[50];
} Student;

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        char name[50];
        unsigned int standard;
        unsigned int gender;
        unsigned int age;

        printf("Enter name for student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter standard (1 to 12) for student %d: ", i + 1);
        scanf("%u", &standard);
        printf("Enter gender (0 for male, 1 for female) for student %d: ", i + 1);
        scanf("%u", &gender);
        printf("Enter age for student %d: ", i + 1);
        scanf("%u", &age);

        students[i].standard = standard;
        students[i].gender = gender;
        students[i].age = age;
        snprintf(students[i].name, sizeof(students[i].name), "%s", name);
    }

    printf("Student Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Standard: %u, Gender: %s, Age: %u\n",
               students[i].name,
               students[i].standard,
               students[i].gender ? "Female" : "Male",
               students[i].age);
    }

    return 0;
}

