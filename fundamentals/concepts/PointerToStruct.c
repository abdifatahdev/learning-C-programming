#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;  // 4 bytes
    int breadth; // 4 bytes
};

int main()
{

    // Declaring a normal variable of type Rectangle
    struct Rectangle r = {10, 5};

    // This is how to access the normal variable using dot operator
    printf("%d\n", r.length);
    printf("%d\n", r.breadth);

    // Declaring and initializing a pointer to a structure
    struct Rectangle *p = &r;
    // This is how to access a pointer to a structure using arrow operator
    printf("%d\n", p->length);
    printf("%d\n", p->breadth);

    printf("******* Creating an object of Rectangle dynamically in heap using a pointer ******\n");
    // Create an object of Rectangle dynamically in heap using a pointer
    // struct Rectangle *p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    // You can also directly write how much memory does malloc function will take like this
    struct Rectangle *p1 = (struct Rectangle *)malloc(8); // Malloc function returns a pointer type of void
    p->length = 15;
    p->breadth = 7;

    // This is how to access a pointer to a structure using arrow operator
    printf("%d\n", p->length);
    printf("%d\n", p->breadth);
    return 0;
}