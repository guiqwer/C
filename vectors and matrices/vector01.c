#include <stdio.h>

/*

vectors part 1

array
ex
char name [50];


*/

int main()
{
    // vectors and strings

    char name[50];
    printf("What is your name? \n");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s\n", name);

    // vectors and characteres

    char letters[26];
    int count = 0;
    // A to Z in ASCII table
    for (int i = 97; i <= 122; i++)
    {
        letters[count] = i;
        count += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d == %c\n", letters[i], letters[i]);
    }
    
    return 0;
}