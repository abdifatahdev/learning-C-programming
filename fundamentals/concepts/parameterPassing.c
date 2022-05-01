#include <stdio.h>
#include <stdlib.h>

/*
    1. Paramers passing
       a. pass by value (C/C++)
       b. pass by address (C/C++)
       c. pass by reference (only C++)
*/

void passByValueSwap(int x, int y) // x and y here are called formal parameters
{
    int temp;
    temp = x;
    x = y;
    y = temp; // Formal parameters are did the job for swapping
};

// Call by address uses pointers to swap values
// Pointers can take addresses from actual parameters.
void passByAddressSwap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
};

int main()
{
    // Pass by value
    /*
       In pass by value, any changes done from formal parameters
       will not reflected in the actual parameters.
       .... We should use pass by value:
            1. When you don't have to modify the actual parameters.
            2. When a function is returning some results.
            Example: creating a function that adds two numbers, then
            pass by value is suitable.

    */
    int a, b;
    a = 10;
    b = 20;
    // The swap function did not reflected in the actual parameters
    passByValueSwap(a, b);             // a and b here are called actual parameters
    printf("A = %d \nB = %d\n", a, b); // The values are still the same(swap didn't reflected here)

    // Pass by address

    printf("******** Pass by address uses pointers ********\n");
    int x, y;
    x = 10;
    y = 20;
    // Actual parameters should send the addresses of the actual parameters
    passByAddressSwap(&x, &y);
    printf("X = %d \nY = %d\n", x, y); // Here swap the values happened
    return 0;
}

// Important note in C++: The machine code is Monolithic program though the source is procedural/modular program.