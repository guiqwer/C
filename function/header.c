#include <stdio.h>
#include "help.h"

/*

To create a library first we need declare the same in library area
in this example we have declared help.c
is more like the POO, and in this folder we make a "program" named help.h 
to push our functions to the main program (header.c)

*/

int main (){
    int n1, n2, retS = 0, retM = 0;

    mensage();

    printf("Enter the first number: \n");
    scanf("%d", &n1);

    printf("Enter the secound number: \n");
    scanf("%d", &n2);

    retS = sum(n1, n2);
    printf("The sim of %d and %d is %d\n", n1, n2, retS);

    retM = multiplication(n1, n2);
    printf("The multiplication of %d and %d is %d\n", n1, n2, retM);

    return 0;

    
}