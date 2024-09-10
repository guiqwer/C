#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

#define RANGE 100

int main()
{
    int linha, coluna;

    // Entrada de dados
    printf("Digite a quantidade de linhas : ");
    scanf("%d", &linha);

    printf("Digite a quantidade de colunas:");
    scanf("%d", &coluna);

    // Declaração matriz
    int **pm = NULL;

    // Alocação de memória
    pm = (int **)malloc(linha * sizeof(int *));

    for (int i = 0; i < linha; i++)
    {
        pm[i] = (int **)malloc(coluna* sizeof(int *));
    }

    // Popular Matriz

    srand(time(NULL));
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            pm[i][j] = rand() % RANGE;
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Endereço [%p], Valor:[%d]\t", &pm[i][j], pm[i][j]);
        }
        printf("\n");
    }

    // Maior e Menor
    int *menor, *maior;

    menor = *pm;
    maior = *pm;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (pm[i][j] < *menor)
            {
                menor = &pm[i][j];
            }

            if (pm[i][j] > *maior)
            {
                maior = &pm[i][j];
            }                    
        }
        printf("\n");
    }


    // Saída 

    printf("Maior elemento: %p\n", maior);
    printf("Menor elemento: %p", menor );

}