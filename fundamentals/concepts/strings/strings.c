#include <stdio.h>
#include <string.h>

int main()
{
    // Different ways to initialize an array of string
    // char S[5] = {'A', 'B', 'C', 'D', 'E'}; // Declaring with initialize 5 characters of strings
    // char S[] = {'A', 'B', 'C', 'D', 'E'};  // Without telling the size of the array
    // char S[] = {65, 66, 67, 68, 69};       // Initialize with ASCII values
    // char S[5] = {'A', 'B'};                // Initialize with only 2 characters, the rest will be filled with zeroes.

    // The difference of an array of characters and a string is '\0'
    // In C/C++, the size of string is known by finding NULL terminator '\0'
    char name[10] = {'J', 'o', 'h', 'n', '\0'}; // Because of '\0', now it became string instead of an array of characters
    // The length of above string is 5 coz '\0' is also takes an space in memory
    // printf("%s\n", name);

    // A better way to declare and initialize a string:
    char S[] = "Smith"; // The null terminator is automatically added to the end of the string

    // printf("%s\n", S);
    // scanf("%s\n", S);

    // Get user input and store it in a string
    char fullname[20];
    printf("Enter your name: ");
    // scanf("%s", fullname);
    // [^\n] Read until newline is given
    // scanf("%[^\n]s", fullname); // [^\n] tells to take input while it is not a newline ('\n' ).
    // gets(fullname); // Gets works the best with strings
    scanf("%s", gets(fullname));
    // stdin stands for standard input
    // the downside of fgets is that it prints newline character automatically at the end
    // fgets(fullname, 20, stdin); // fgets is used to read from file
    printf("Hello %s\n", fullname);
    return 0;
}