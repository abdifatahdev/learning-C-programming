#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    // Define different atributes of the student
    char name[20];
    int age;
    double gpa;
    char major[20];
};

int main()
{
    // Create an instance of the Student struct
    struct Student student1;            // student1 is like a container for the different atributes of the student
    strcpy(student1.name, "Abdifatah"); // strcpy is basically string copy function.
    student1.age = 33;
    student1.gpa = 3.62;
    strcpy(student1.major, "Computer Science");

    printf("Student name: %s\nStudent Age: %d\nStudent GPA: %.2f\nStudent major: %s\n", student1.name, student1.age, student1.gpa, student1.major);

    return 0;
}