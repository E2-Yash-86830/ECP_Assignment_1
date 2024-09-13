#include <stdio.h>

typedef struct {
    int roll_number;
    char name[100];
    float marks;
} Student;

void accept_student_info(Student *student) {
    printf("Enter roll number: ");
    scanf("%d", &student->roll_number);
    printf("Enter name: ");
    scanf(" %[^\n]", student->name);
    printf("Enter marks: ");
    scanf("%f", &student->marks);
}

void print_student_info(const Student *student) {
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student->roll_number);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n", student->marks);
}

int main() {
    Student student;

    accept_student_info(&student);
    print_student_info(&student);

    return 0;
}

