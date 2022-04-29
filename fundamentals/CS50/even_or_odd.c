#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // int number;
    // printf("Please inter a number: ");
    // scanf("%i", &number);

    // if (number % 2 == 0)
    // {
    //     printf("The number %i is even\n.", number);
    // }
    // else
    // {
    //     printf("The number %i is odd\n.", number);
    // }

    char c;
    printf("Do you agree? (type 'y' or 'n'): ");
    scanf("%c", &c);

    // import #include <ctype.h> in order to use tolower() func
    if (tolower(c) == 'y') // if (c == 'y' || c == 'Y'){}
    {
        printf("Agreed.\n");
    }
    else if (tolower(c) == 'n') // if (c == 'y' || c == 'Y'){}
    {
        printf("Not agreed.\n");
    }
}