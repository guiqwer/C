#include <stdio.h>
#include <stdlib.h>

#define TAM 12
int main()
{
    char *entradaUsuario;

    if (!(entradaUsuario = (char *)malloc(TAM * sizeof(char))))
    {
        printf("Memória Inválida");
        exit(1);
    }

    printf("Entre com uma palavra de até 11 caraceteres");
    fgets(entradaUsuario, TAM, stdin);

    char substituirCaractere;
    printf("Escolha o caractere a ser substituido por x");
    substituirCaractere = getchar();

    for (int i = 0; i < TAM; i++)
    {
        if (substituirCaractere == *(entradaUsuario + i))
        {
            *(entradaUsuario + i) = 'x';
        }
    }

    printf("Texto Codificado %s", entradaUsuario);

    free(entradaUsuario);

    return 0;
}