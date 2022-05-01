#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;  // 4 bytes
    int breadth; // 4 bytes
};

int main()
{
    // Pointer to a structure
    struct Rectangle r = {10, 5};
    // How to access that strcut with a pointer

    // Declaring and initializing a pointer to a structure
    struct Rectangle *p = &r;

    // Accessing Rectangle members using normal variables
    r.length = 15;
    // accessing the Rectangle members with the pointer
    p->length = 20; // Or (*p).length = 20;

    printf("%d\n", r.length);

    Printf("************** Creating an object dynamically in heap using a pointer **********************\n");

    // Create an object of a variable type Rectangle dynamically in heap
    // 1st create a pointer to a Rectangle

    // struct Rectangle *p1;
    // p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // Or Declaring and initializing a pointer to a structure Rectangle dynamically in heap

    struct Rectangle *p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // Accesing a Rectangle members using a pointer
    p1->length = 18;
    p1->breadth = 25;
    return 0;
}