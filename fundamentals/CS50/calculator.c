#include <stdio.h>

int main(void)
{

    /*
    Data Types:
    bool
    double
    float
    int
    long
    string
    */

    /*
    Format Codes (format specifiers):
    %c for char
    %f for float or double
    %i for integer
    %li for long interger
    %s for string
    %d for decimal
    */
    int x;
    int y;
    printf("x: ");
    scanf("%i", &x);
    printf("y: ");
    scanf("%i", &y);
    int z = x + y;
    printf("%i\n", z);
}