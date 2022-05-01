#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Valid password is only letters and numbers are allowed but special characters are not allowed

// Function checks whether the string is valid or not
int isValid(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 48 && s[i] <= 57))) // Here, I can also use '0' and '9' instead of 48 and 57
        {
            return 0; // return false
        }
    }
    return 1; // return true
}
int main()
{
    // password = Ani?321
    // Valid string/password is only letters and numbers are allowed but special characters are not allowed
    char s[50];
    printf("Enter a word: ");
    scanf("%[^\n]", s);

    // When you hard coding the string insead of taking input from user,
    // you need to set a pointer to the string
    // char *s = "Ani/321";

    if (isValid(s))
    {
        printf("Valid string/password\n");
    }
    else
    {
        printf("Invalid string/password\n");
    }

    return 0;
}