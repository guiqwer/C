#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
8. Escreva um programa que busque um caractere fornecido em uma string utilizando ponteiros.
*/

int main()
{
    // Declarar string e o ponteiro apontando para a string
    char string[LEN];
    char *pString = string;

    // Input do usuário
    printf("Entre com uma string: \n");
    fgets(string, LEN, stdin);

    // Remove o caractere de nova linha, se presente
    size_t length = strlen(string);
    if (length > 0 && string[length - 1] == '\n')
    {
        string[length - 1] = '\0';
    }

    // Declaração da variável caractere e o ponteiro apontado para o caractere
    char caractere;
    char *pCaractere = &caractere;

    // Input do usuário do caractere
    printf("Entre com um caractere: \n");
    caractere = getchar();

    // Limpar o buffer de entrada
    int c;
    while ((c = getchar()) != EOF && c != '\n')
        ;

    // Declarar variável achou e a variavel count
    int achou = 0;
    int count = 0;

    //contar tamanho da string
    while (*(pString + count) != '\0')
    {
        count++;
    }

    //percorrer string comparando
    for (int i = 0; i < count; i++)
    {
        if (*pCaractere == *(pString + i))
        {
            achou = 1;
            break;
        }
    }

    //output se o caracete está ou não na string
    if (achou)
    {
        printf("O caractere '%c' está na string.\n", *pCaractere);
    }
    else
    {
        printf("O caractere '%c' não está na string.\n", *pCaractere);
    }

    return 0;
}
