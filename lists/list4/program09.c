#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 10

int main()
{

    int qtd; // declarando quantidade de elementos da array

    // Entrada usuário
    puts("Digite a quantidade de elementos: ");
    scanf("%d", &qtd);

    // Alocação dinâmica de memória
    int *array = NULL; // além de um ponteiro é uma array.
    if (!(array = (int *)malloc(qtd * sizeof(int))))
    {
        puts("Memória insuficiente.");
        exit(1);
    }

    // Declarar números pseudoaleatórios na nossa array
    srand(time(NULL));

    for (int i = 0; i < qtd; i++)
    {
        *(array + i) = rand() % RANGE;
    }

    // exibir vetor não ordenado

    printf("\n ** vetor NÃO ordenmado ** \n");
    for (int k = 0; k < qtd; k++)
    {
        printf("[%p] %d\n", array + k, *(array + k));
    }

    // ordenar vetores usando bubble sort
    for (int i = 0; i < qtd - 1; i++)
    {
        for (int j = 0; j < qtd - i - 1; j++)
        {
            if (*(array + j) > *(array + j + 1))
            {
                int temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }

    // Impressão dos elementos ordenados
    printf("Array ordenado:\n");
    for (int i = 0; i < qtd; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");

    free(array);

    return 0;
}