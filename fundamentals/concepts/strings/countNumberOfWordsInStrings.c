#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Count the number of words in a string
int main()
{
    char s[50];
    printf("Enter a word: ");
    scanf("%[^\n]", s);

    int i, word = 1; // + 1 coz word is gonna give us the number of spaces
    for (i = 0; s[i] != '\0'; i++)
    {
        // s[i - 1] != ' ' checks white space for previous character
        if (s[i] == ' ' && s[i - 1] != ' ')
        {
            word++;
        }
    };
    printf("The number of words in string is: %d\n", word);
    return 0;
}