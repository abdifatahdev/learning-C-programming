#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Accessing memory addresses
    int age = 33;
    double gpa = 3.5;
    char grade = 'A';

    // printing out all the above data types and corresponding their memory addresses
    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

    printf("\n");
    printf("The address of age in memory is: %p.\n", &age); // %p prints the memory address(pointer)
    // If I wanna print the actual value of age, I can use the following:
    printf("The actual value of my age is: %d.\n", age);
    return 0;
}