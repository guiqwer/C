#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int n1 = 5, n2 = 10, aux = 0;
    int *pN1, *pN2, *pAux;

    pN1 = &n1;
    pN2 = &n2;
    pAux = &aux;

    // show the numbers

    printf("Numero 1: %d\n", *pN1);
    printf("Numero 2: %d\n", *pN2);

    printf("\n");
    // change numbers
    *pAux = *pN1;
    *pN1 = *pN2;
    *pN2 = *pAux;

    // show the change numbers
    puts("Numbers change\n");

    printf("Numero 1: %d\n", *pN1);
    printf("Numero 2: %d\n", *pN2);

    return 0;
}