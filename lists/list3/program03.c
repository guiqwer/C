#include <stdio.h>

#define MAX_STRING_LENGTH 100

void getInputString(char string[])
{
    printf("Enter a word ");
    fgets(string, MAX_STRING_LENGTH, stdin);
}

int main()
{

    char string[MAX_STRING_LENGTH];
    int count = 0;

    getInputString(string);

    while (string[count] != '\0')
    {
        if (string[count] == '\n')
        {
            string[count] = '\0';
            break;
        }
        count++;
    }
    printf("This is tring have %d chars", count);
    return 0;
}
