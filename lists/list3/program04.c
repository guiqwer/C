#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

void getInputString(char string1[], char string2[])
{
    printf("Enter the first string: ");
    fgets(string1, MAX_STRING_LENGTH, stdin);

    printf("Enter the second string: ");
    fgets(string2, MAX_STRING_LENGTH, stdin);
}

void compareStrings(char string1[], char string2[])
{
    int count = 0;   
    while (string1[count] != '\0' || string2[count] != '\0')
    {
        if (string1[count] != string2[count])
        {
            printf("The strings is not equal.");
            return;
        }
        count++;
    }

    printf("The strings are equal");
}

int main()
{

    char firstString[MAX_STRING_LENGTH];
    char secondString[MAX_STRING_LENGTH];

    /*

    getInputString(firstString, secondString);

    if (strcmp(firstString, secondString) == 0)
    {
        printf("The strings are equal.");
    }
    else
    {
        printf("The strings is not equal.");
    }

    */

    getInputString(firstString, secondString);

    compareStrings(firstString, secondString);

    return 0;
}