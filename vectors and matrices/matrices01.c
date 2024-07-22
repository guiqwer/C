#include <stdio.h>

/*

matrices part 1

matrices
ex
char name [3][50];
3 name with 50 characters
multidimensional


*/

int main()
{
    // vectors and strings

    char name[3][50];
    for (int i = 0; i < 3; i++)
    {
        printf("What is your name? \n");
        fgets(name[i], sizeof(name[i]), stdin);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("%s", name[i]);
    }
    
    
    return 0;
}