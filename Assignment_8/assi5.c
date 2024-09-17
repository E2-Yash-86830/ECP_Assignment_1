#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int rollNumber;
    char name[50];
} Student;

void sortByRollNumber(Student students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (students[i].rollNumber > students[j].rollNumber) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void sortByName(Student students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    Student students[MAX_STUDENTS] = {
        {2, "Yash"},
        {1, "Rane"}
    };
    int studentCount = 2;

    sortByRollNumber(students, studentCount);
    printf("Students sorted by Roll Number:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll Number: %d, Name: %s\n", students[i].rollNumber, students[i].name);
    }

    sortByName(students, studentCount);
    printf("Students sorted by Name:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll Number: %d, Name: %s\n", students[i].rollNumber, students[i].name);
    }

    return 0;
}

