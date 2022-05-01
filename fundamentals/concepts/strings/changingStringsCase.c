#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // char S[] = "ABDIFATAH";

    // int i;
    // for (i = 0; S[i] != '\0'; i++)
    // {
    //     S[i] += 32;
    // }
    // printf("%s\n", S);

    // Ptogram to the user input and changes the case of a string
    char S[20];
    printf("Enter a string: ");
    // fgets(S, 20, stdin);
    scanf("%[^\n]s", S);

    int i;
    for (i = 0; S[i] != '\0'; i++)
    {
        // It's upper case when it's between 65 and 90
        if (S[i] >= 'A' && S[i] <= 'Z') // You can write numbers instead of characters
        {
            // Change it to lower case
            S[i] += 32;
        }
        // It's lower case when it's between 97 and 122
        else if (S[i] >= 'a' && S[i] <= 'z')
        {
            // Change it to upper case
            S[i] -= 32;
        }
    };

    printf("%s\n", S);

    return 0;
}