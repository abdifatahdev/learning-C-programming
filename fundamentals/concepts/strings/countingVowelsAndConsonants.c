#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Counting the number of vowels and consonants in a sentence
int main()
{
    char word[50];
    printf("Enter a word: ");
    scanf("%[^\n]", word);

    int i, vowels = 0, consonants = 0;
    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' ||
            word[i] == 'i' || word[i] == 'o' ||
            word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' ||
            word[i] == 'O' || word[i] == 'U')
        {
            vowels++;
            printf("%c is a vowel\n", word[i]);
        }
        // Count if it's consonant, it must be within the range of alphabets
        // Otherwise the spaces and special characters will be counted as consonants
        else if ((word[i] >= 65 && word[i] <= 90) ||
                 (word[i] >= 97 && word[i] <= 122))
        {
            consonants++;
            printf("%c is a consonant\n", word[i]);
        }
    };
    printf("The number of vowels is: %d\n", vowels);
    printf("The number of consonants is: %d\n", consonants);

    return 0;
}