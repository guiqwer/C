#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 10

typedef struct vetor
{
    int tamanho;
    int *pData; // vetor
} vetor;

int *alocarMemoria(int);
void preencherVetor(int *, int, int);
void imprimirVetor(vetor);
void calcularDiferenca(vetor, vetor, int *, int);

int main(int argc, char *argv[])
{
    vetor v1, v2, dif;

    if (argc != 2)
    {
        printf("Formato \n\t\t %s <tamanho do vetor> \n\n", *argv);
        exit(1);
    }

    v1.tamanho = atoi(argv[1]);
    v2.tamanho = atoi(argv[1]);
    dif.tamanho = atoi(argv[1]);

    v1.pData = alocarMemoria(v1.tamanho);
    v2.pData = alocarMemoria(v2.tamanho);
    dif.pData = alocarMemoria(dif.tamanho);

    srand(time(NULL));

    preencherVetor(v1.pData, v1.tamanho, RANGE);
    printf("Vetor 1\n");
    imprimirVetor(v1);

    preencherVetor(v2.pData, v2.tamanho, RANGE);
    printf("Vetor 2\n");
    imprimirVetor(v2);

    calcularDiferenca(v1, v2, dif.pData, dif.tamanho);
    printf("Diferença entre os vetores\n");
    imprimirVetor(dif);

    free(v1.pData);
    free(v2.pData);
    free(dif.pData);

    return 0;
}

int *alocarMemoria(int t)
{
    int *p = (int *)malloc(t * sizeof(int));
    return p;
}

void preencherVetor(int *vet, int tam, int rg)
{
    for (int i = 0; i < tam; i++)
    {
        vet[i] = rand() % rg;
    }
}

void imprimirVetor(vetor v)
{
    for (int i = 0; i < v.tamanho; i++)
    {
        printf("%d\n", v.pData[i]);
    }
}

void calcularDiferenca(vetor a, vetor b, int *vetDif, int tam){
    for (int i = 0; i < tam; i++)
    {
        vetDif[i] = a.pData[i] - b.pData[i];
    }
}
