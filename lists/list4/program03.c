#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUsuario;
    int *pNumeroUsuario = &numeroUsuario;
    int menor = 100;
    int *pMenor = &menor;

    while (1)
    {
        printf("Digite um número entre 0 e 99 (ou -1 para sair): \n");
        scanf("%d", &numeroUsuario);

        if (*pNumeroUsuario == -1)
        {
            exit(1);
        }

        if (*pNumeroUsuario < 0 || *pNumeroUsuario > 99)
        {
            printf("Número inválido. Tente novamente");
            continue;
        }

        if (*pNumeroUsuario < *pMenor)
        {
            *pMenor = *pNumeroUsuario;
        }

        printf("O menor número até agora é %d\n", *pMenor);
    }

    printf("O programa foi fechado.");

    return 0;
}