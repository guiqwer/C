#include <stdio.h>

/*

- Characteres
- String

in C language, string dont exist 

EX:
String > "AAAAAAA"

EX
Charactere > 'c'


*/

int main(){

    // char exemple 
    char option;

    printf("Chose a option: \n");
    printf("a - account ballance\n");
    printf("b - account extract\n");
    printf("c - account limit\n");
    scanf("%c", &option);

    switch (option)
    {
    case 'a':
        printf("Your accont is...\n");
        break;
    
    case 'b':
        printf("Your account extract is....\n");
        break;
    case 'c':
        printf("Your account limit is....\n");
        break;
    default:
        printf("Please chose a, b or c.\n");
        break;
    }

    /*
    
    table ascii testing with character mod

    
    */

    for (int i = 97; i < 122; i++)
    {
        printf("%c\n", i);
    }
    
    return 0;


}