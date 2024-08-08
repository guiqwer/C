#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 10

int main()
{

    int *vec = NULL;
    int qtd;

    puts("Enter a number of array: ");
    scanf("%d", &qtd);

    if (!(vec = (int *)malloc(qtd * sizeof(int))))
    {
        puts("Memória indisponível");
        exit(1);
    }

    srand(time(NULL));
    for (int i = 0; i < qtd; i++)
    {
        *(vec + i) = rand() % RANGE;
        printf("Adress [%p], Value [%d]\n", vec + i, *(vec + i));
    }

    free(vec);

    return 0;
}