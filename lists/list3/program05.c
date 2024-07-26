#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

void getInputString(char string1[], char string2[]) {
    printf("Enter the first string: ");
    fgets(string1, MAX_STRING_LENGTH, stdin);

    // Remove \n
    size_t len = strlen(string1);
    if (len > 0 && string1[len - 1] == '\n') {
        string1[len - 1] = '\0';
    }

    printf("Enter the second string: ");
    fgets(string2, MAX_STRING_LENGTH, stdin);

    len = strlen(string2);
    if (len > 0 && string2[len - 1] == '\n') {
        string2[len - 1] = '\0';
    }
}

int main() {
    char firstString[MAX_STRING_LENGTH];
    char secondString[MAX_STRING_LENGTH];

    getInputString(firstString, secondString);

    
    int count1 = 0;
    while (firstString[count1] != '\0') {
        count1++;
    }

    
    int count2 = 0;
    while (secondString[count2] != '\0') {
        firstString[count1] = secondString[count2];
        count1++;
        count2++;
    }

    firstString[count1] = '\0';

    printf("The concatenation is: %s\n", firstString);

    return 0;
}




    // size_t lengthFirstString, lengthSecondString; 

    /*

    with srcat

    strcat(firstString, secondString);

    printf("Strings together: %s\n", firstString);

    */

    /*
    
    
    
    lengthFirstString = strlen(firstString);
    lengthSecondString = strlen(secondString);

    printf("The length of first string [%s] is %zu\nThe lenght of second strings [%s] is %zu", firstString, lengthFirstString, secondString, lengthSecondString);
    */