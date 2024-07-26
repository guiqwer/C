#include <stdio.h>

#define MAX_STRING_LENGTH 100

void getInputString(char string1[])
{
    printf("Enter the first string: ");
    fgets(string1, MAX_STRING_LENGTH, stdin);

    // Remove \n
    size_t len = strlen(string1);
    if (len > 0 && string1[len - 1] == '\n')
    {
        string1[len - 1] = '\0';
    }
}

int main()
{
    char string[MAX_STRING_LENGTH];

    getInputString(string);

    int count1 = 0;

    while (string[count1] != '\0')
    {
        count1++;
    }

    int length = count1;

    for (int i = 0; i < length / 2; i++)
    {
        char temp = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = temp;
    }

    printf("String inverted %s", string);

    return 0;
}