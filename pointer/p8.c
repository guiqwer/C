#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 10

int main()
{

    // Declaração de variáveis

    int *vetorX = NULL, *vetorY = NULL, *vetorK = NULL, vetorV[2]; // k = soma dos vetores.
    int tam;

    printf("Digite o tamanho dos vetores x e y:\n");
    scanf("%d", &tam);

    // alocação dinamica dos vetores

    if (!(vetorX = (int *)malloc(tam * sizeof(int))))
    {
        printf("Memoria inválida.");
        exit(1);
    }

    if (!(vetorY = (int *)malloc(tam * sizeof(int))))
    {
        printf("Memória inválida.");
        exit(1);
    }

    if (!(vetorK = (int *)malloc(tam * sizeof(int))))
    {
        printf("Memória inválida.");
        exit(1);
    }

    // preenchimento dos vetores com números pseudoaleatorios

    srand(time(NULL));
    for (int i = 0; i < tam; i++)
    {
        *(vetorX + i) = rand() % RANGE;
        *(vetorY + i) = rand() % RANGE;
    }

    // k recebendo a soma dos vetores;

    for (int i = 0; i < tam; i++)
    {
        *(vetorK + i) = *(vetorX + i) + *(vetorY + i);

        if (!(*(vetorK + i) % 2))
        {
            *(vetorV) = (vetorX + i);
            *(vetorV + 1) = (vetorY + i);
            break;
        }
    }

    printf("Endereço de X e Y que forma o primeiro elemento par de K\n1°Endereço: %p\n2°Endereço: %p", *(vetorV + 0), *(vetorV+ 1));

    free(vetorX);
    free(vetorY);
    free(vetorK);

    return 0;
}