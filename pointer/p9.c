#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 10

int main()
{
    // declaração variáveis
    int *matrizX;
    int *matrizY;

    int linhas, colunas;

    int t;

    // alocação de memoria

    printf("Digfite o número de linhas\n");
    scanf("%d", &linhas);

    printf("Digite o número de colunas:\n");
    scanf("%d", &colunas);

    printf("Digite o valor de T\n:");
    scanf("%d", &t);

    if (!(matrizX = (int *)malloc(linhas * colunas * sizeof(int))))
    {
        printf("Memória Inválida");
        exit(1);
    }

    if (!(matrizY = (int *)malloc(linhas * colunas * sizeof(int))))
    {
        printf("Memória Inválida");
        exit(1);
    }

    srand(time(NULL));

    for (int i = 0; i < (linhas * colunas); i++)
    {
        *(matrizX + i) = rand() % RANGE;
    }

    for (int i = 0; i < (linhas * colunas); i++)
    {
        if (*(matrizX + i) > t)
        {
            *(matrizY + i) = 1;
        }
        else
        {
            *(matrizY + i) = 0;
        }
    }

    printf("Matriz y:\n");
    printf("\n");
    for (int i = 0; i < (linhas * colunas); i++)
    {
        printf("%d\t", *(matrizY + i));
        if (!((i + 1) % colunas))
        {
            printf("\n");
        }
    }

    free(matrizX);
    free(matrizY);

    return 0;
}