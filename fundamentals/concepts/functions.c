#include <stdio.h>
#include <stdlib.h>
/*
    1. What are functions?
    2. Paramers passing
       a. pass by value (C/C++)
       b. pass by address (C/C++)
       c. pass by reference (only C++)
*/

// Writing all code inside the main function called "Monolithic programming"
// Breaking a program into a smaller pieces of functions and using those functions inside the main function
// that integrates all together called "Modular/Produral programming"
// C langauge is a procedural/ modular programming language

// Creating a function that adds two numbers returning the result
int add(int a, int b) // This called prototype/signature of a function
// a and b is called formal parameters
{
    // Inside is called declaration and definition of a function
    int c = a + b;
    return c;
};

int main()
{
    int x, y, z;
    x = 10;
    y = 5;
    // Call add function inside the main function
    z = add(x, y); // x and x are called actual parameters

    printf("Sum is %d\n", z);
    return 0;
}