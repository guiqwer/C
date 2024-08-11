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

    // Media
    int soma; // armazenar os números
    for (int j = 0; j < qtd; j++)
    {
        soma += *(array + j);
    }

    float media = soma / qtd;

    // Mediana utilizando o algorítmo de ordenação por seleção (arimética de ponteiros.)
    int aux;
    for (int i = 0; i < qtd - 1; i++)
    {
        for (int j =i+1; j < qtd; j++)
        {
            if (*(array + i) > *(array + j))
            {
                aux = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = aux;
            }
        }
    }

    // Exibit vetor ordenado

    printf("\n ** Vetor Ordenado **  \n");
    for (int k = 0; k < qtd; k++)
    {
        printf("[%p] %d\n", array + k, *(array + k));
    }

    float mediana;

    if (qtd % 2)
    {
        mediana = *(array + (qtd / 2));
    }
    else
    {
        mediana = (float)(*(array + (qtd / 2)) + *(array+ (qtd / 2) - 1)) / 2;
    }

    free(array);

    //Saída
    printf("\n");
    printf("Média: %.2f\n", media);
    printf("Mediana; %.2f", mediana);

    return 0;
}
