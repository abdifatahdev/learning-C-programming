#include <stdio.h>

int main()
{

    char x = 'M';
    // x = "M";
    char y, z;
    y = 'A';
    z = 'L';

    int age = 33;
    float GPA;
    GPA = 4.0f;
    double exact = 2.3745695946f;

    printf("The value of X: %c", x);
    printf("\nThe value of Y: %c", y);
    printf("\nThe value of Z: %c", z);

    printf("\nAbdifatah's age is is %d years old.", age);
    printf("\nMy GPA in college is %f", GPA);
    printf("\nMy GPA in college is %0.2f", GPA);

    return 0;
}