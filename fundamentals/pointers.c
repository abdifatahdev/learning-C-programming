#include <stdio.h>
#include <stdlib.h>

int main()
{
    // A pointer is basically a memory address
    // (type of data just like int, char, float, double, etc.)
    int age = 33;
    printf("Age's memory address: %p\n", &age); // This gives the memory address of age
    double gpa = 3.62;
    char grade = 'A';

    // When creating a pointer, we need to store
    // the memory address of a variable that is already in our program.
    int *pAge = &age; // *pAge is a pointer to age, while &age is the memory address of age
    double *pGpa = &gpa;
    char *pGrade = &grade;

    printf("Age's actual value: %d\nGpa: %.2f\nGrade: %c\n", age, gpa, grade);
    return 0;
}