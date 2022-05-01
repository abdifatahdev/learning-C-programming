#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[50];
    printf("Enter a word: ");
    scanf("%[^\n]", s);

    char rev[50];

    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    i -= 1;
    int j;
    for (j = 0; i >= 0; i--, j++)
    {
        rev[j] = s[i];
    }
    rev[j] = '\0';
    printf("Reversed word: %s\n", rev);

    return 0;
}