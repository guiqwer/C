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

    //declaration of string in C

    char name[50]; // 49 characteres

    printf("What is your name?");
    gets(name);

    printf("Your name is %s", name);



    return 0;
}