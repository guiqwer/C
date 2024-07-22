#include <stdio.h>

#define MAX_STRING_LENGTH 100

void getInputString(char string[])
{
    printf("Enter a word: \n");
    fgets(string, MAX_STRING_LENGTH, stdin);
}

char getInputCharacter()
{
    char character;
    printf("Enter a character: \n");
    character = getchar();
    return character;
}

int isCharacterInString(char character, char string[])
{
    for (int i = 0; i < MAX_STRING_LENGTH; i++)
    {
        if (character == string[i])
        {
            return 1;
        }
    }

    return 0;
}

int main()
{

    char string[MAX_STRING_LENGTH];
    char character;
    int found = 0;

    getInputString(string);
    
    character = getInputCharacter();

    found = isCharacterInString(character, string);

    if (found)
    {
        printf("The character %c is found in the string.", character);
    }
    else
    {
        printf("The character %c is not found in the string.", character);
    }

    return 0;
}