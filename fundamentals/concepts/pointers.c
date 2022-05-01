#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // Data varaiable
    int a = 10;
    // Address varaiable (pointer) AKA declaration of a pointer
    int *p;
    // Assignment or initialization
    p = &a;
    // Accessing the value of A varaiable
    printf("%d\n", a);

    // Accessing the value of A varaiable using the pointer
    // Dereferencing
    printf("%d\n", *p);

    ///////////////////////////////
    // How to access HEAP memory using a pointer

    // Declare a pointer
    // int *p;
    // Allocate memory in Heap
    // Create array of size 10 in heap.
    // How to get memory in heap using malloc()
    p = (int *)malloc(5 * sizeof(int)); // This function allocates 5 ints of memory in heap

    printf("\n******************** Create a pointer to an array ********************* \n");
    ///////////////////////////////
    // Pointer to an array
    int A[5] = {2, 4, 6, 8, 10};
    // Declare a pointer
    int *ptr;
    // Assign the address of A to p
    ptr = A; // Don't use Ampersand when you initialise a pointer within an array
    // You may use:
    // ptr = &A[0];

    // Accessing all the elements of A using the pointer
    for (int i = 0; i < 5; i++)
    {
        // Accesing without a pointer
        // printf("%d\n", A[i]);
        // Accesing the elements of A using the pointer
        printf("%d\n", ptr[i]);
    }

    printf("\n******************** Using a pointer, we can create an array in heap ********************* \n");
    // Using a pointer, we can create an array in heap
    // Declare a pointer
    int *ptr2;
    // Allocate memory in Heap
    ptr2 = (int *)malloc(5 * sizeof(int)); // This function allocates 5 ints of memory in heap
    // Initialize the array
    ptr2[0] = 10;
    ptr2[1] = 20;
    ptr2[2] = 30;
    ptr2[3] = 40;
    ptr2[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr2[i]);
    }

    // Deallocate the heap memory
    // When you dynamically allocate memory in heap, you must deallocate it
    free(ptr2); // Heap memory should be deallocated using free()

    printf("\n******************** The size of pointer in memory ********************* \n");
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    // Whatever the data type of pointer is, every pointer takes same amount of memory
    // The latest compilers, pointers are taking 8 bytes of memory in 64 bit machines
    printf("Size of int: %lu\nSize of char: %lu\nSize of float: %lu\nSize of double: %lu\nSize of struct: %lu\n", sizeof(p1), sizeof(p2), sizeof(p3), sizeof(p4), sizeof(p5));

    // printf("%d\n", *p);
    return 0;
}