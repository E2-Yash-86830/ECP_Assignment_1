#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int rollNumber;
    char name[50];
} Student;

void searchByRollNumber(Student students[], int count, int rollNumber) {
    for (int i = 0; i < count; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Student Found: Roll Number: %d, Name: %s\n", students[i].rollNumber, students[i].name);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", rollNumber);
}

void searchByName(Student students[], int count, const char *name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student Found: Roll Number: %d, Name: %s\n", students[i].rollNumber, students[i].name);
            return;
        }
    }
    printf("Student with Name %s not found.\n", name);
}

int main() {
    Student students[MAX_STUDENTS] = {
        {1, "Yash"},
        {2, "Rane"}
    };
    int studentCount = 2;

    searchByRollNumber(students, studentCount, 2);
    searchByName(students, studentCount, "Rane");

    return 0;
}

