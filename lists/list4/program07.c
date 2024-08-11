#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

7.  Escreva um programa que concatene duas strings utilizando ponteiros


*/

#define LEN 100
int main()
{

    // declaração de variáveis
    char string1[LEN];
    char string2[LEN];
    char *pString1 = string1;
    char *pString2 = string2;

    // input do usuário
    printf("Entre com a primeira string:\n ");
    fgets(string1, LEN, stdin);

    printf("Entre com a segunda string?:\n ");
    fgets(string2, LEN, stdin);

    // Remove o caractere de nova linha, se presente
    char *newline = strchr(string1, '\n');
    if (newline)
        *newline = '\0';

    newline = strchr(string2, '\n');
    if (newline)
        *newline = '\0';

    // percorrer a primeria string e pegar o comprimento dela
    int count1 = 0;
    while (*(pString1 + count1) != '\0')
    {
        count1++;
    }

    // concatenar a string1 com a string 2
    int count2 = 0;
    while (*(pString2 + count2) != '\0')
    {
        *(pString1 + count1) = *(pString2 + count2);
        count1++;
        count2++;
    }

    // colocar o \0 no final da string
    *(pString1 + count1) = '\0';

    // output
    printf("String concatenada %s", string1);

    return 0;
}