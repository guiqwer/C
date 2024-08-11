#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 10

int main()
{

    int **matriz = NULL;

    int linha, coluna;

    printf("Digite o número de linhas:\n");
    scanf("%d", &linha);

    printf("Digite o número de colunas:\n");
    scanf("%d", &coluna);

    // alocação de memoria
    if (!(matriz = (int **)malloc(linha * coluna * sizeof(int **))))
    {
        printf("Memória Inválida.");
        exit(1);
    }

    // armazenar matriz com srand

    srand(time(NULL));
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            *(*(matriz + i) + j) = rand() % RANGE;
        }
    }

    // printar matriz
    for (int i = 0; i < linha; i++)
    {
        for (int k = 0; k < coluna; k++)
        {
            printf("%d\t", *(*(matriz + i) + k));
        }
        printf("\n");
    }

    printf("\n");

    // maior e menor

    int maior = 0, menor;  // Maior começa com 0 porque qualquer valor dentro da nossa matriz vai ser maior que 0;
    //menor começa com lixo por que qualquer valor da nossa matriz vai ser menor, ja que o range é 10
 
    int *pMaior = &maior , *pMenor = &menor;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (*(*(matriz + i) + j) > *pMaior)
            {
                maior = *(*(matriz + i) + j);
            }

            if (*(*(matriz + i) + j) < *pMenor)
            {
                menor = *(*(matriz + i) + j);
            }
        }
    }

    printf("Maior %d\n", *pMaior); 
    printf("Menor %d", *pMenor);


    free(matriz);

    return 0;
}
