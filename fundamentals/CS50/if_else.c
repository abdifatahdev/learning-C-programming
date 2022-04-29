#include <stdio.h>

int main(void)
{
    // const variable never changed
    const int MINE = 2;
    int points;
    printf("How many points did you lose? ");
    scanf("%i", &points);

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points an me.\n");
    }
}