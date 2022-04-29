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
    printf("\nMy GPA in college is %0.2f.\n", GPA);

    int A[5];
    // int A[5] = {1, 2, 3, 4, 5};
    A[0] = 6;

    printf("The size of array is: %lu.\n", sizeof(A));

    return 0;
}