#include <stdio.h>

#define MAX_STRING_LENGTH 100

void getInputString(char string1[], char string2[])
{
    printf("Enter the first string: ");
    fgets(string1, MAX_STRING_LENGTH, stdin);

    printf("Enter the second string: ");
    fgets(string2, MAX_STRING_LENGTH, stdin);

}

int main(){

    char firstString[MAX_STRING_LENGTH];
    char secondString[MAX_STRING_LENGTH];

    getInputString(firstString, secondString);



    return 0;
}