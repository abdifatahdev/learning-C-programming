#include <stdio.h>
#include <stdlib.h>

struct Regtangle
{
    int length; // 4 bytes
    int breath; // 4 bytes
};

// We can also declare the struct outside the main function like this:
// struct Regtangle r1, r2, r3;

// We can also declare the struct outside the main function like this:
// struct Regtangle
// {
//     int length; // 4 bytes
//     int breath; // 4 bytes
// }r1, r2, r3;

// Another struct
struct Card
{
    int face;  // 4 bytes
    int shape; // 4 bytes
    int color; // 4 bytes
};

int main()
{
    // Defining an instance of the Regtangle struct
    // struct Regtangle r;

    // Declare and Initialize struct variables simultaneously
    struct Regtangle r = {10, 5};

    // Accessing and modifying the members of the struct
    r.length = 15;
    r.breath = 10;

    // Print the size of the struct
    printf("Size of the struct: %lu bytes.\n", sizeof(r));

    // Print out the area of Rectangle
    printf("The area of the rectangle is : %d\n", r.length * r.breath);

    // // Defining an instance of the Card struct
    // struct Card c;
    // c.face = 1;
    // c.shape = 0;
    // c.color = 0;

    // Declare and Initialize struct variables simultaneously
    struct Card c = {1, 0, 0};
    printf("Face : %d\nShape: %d\nColor: %d\n", c.face, c.shape, c.color);

    // Creating deck of cards
    // Array of structures
    struct Card deck1[52]; // It will take 52 * 12 = 624 bytes

    // We can also initialize the deck of cards using the following code:
    // Declare and initailise array of structures
    struct Card deck2[52] = {
        {1, 0, 0},
        {2, 0, 0},
        {1, 1, 0},
        {2, 1, 0},
    };

    // Print the size of the struct
    printf("Size of the card struct: %lu bytes.\n", sizeof(deck2));

    // Accessing each card of members individually
    printf("1st Face: %d\n1st Shape: %d\n1st Color: %d\n", deck2[0].face, deck2[0].shape, deck2[0].color);

    return 0;
}