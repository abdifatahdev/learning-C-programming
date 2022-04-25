#include <stdio.h>

#define LENGTH 10
#define WIDTH 25
#define NEWLINE '\n'

int main()
{
    int area;
    area = LENGTH * WIDTH;

    printf("The area is: %d", area);

    printf("%c", NEWLINE);
    printf("The sky is blue %c", NEWLINE);
    printf("Roses are red %c", NEWLINE);

    return 0;
}