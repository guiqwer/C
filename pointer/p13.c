#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define RANGE 100

int *alocarMemoria(int *, int);
void preencherVetor(int *, int, int, int);
void exibirVetor(int *, int);

int main()
{
    int n;
    int *px = NULL;

    // Entrada de Dados
    printf("Entre com a quantiade de elementos: ");
    scanf("%d", &n);

    // Alocar memoria
    px = alocarMemoria(NULL, n);

    // Preencher Vetor

    srand(time(NULL));

    preencherVetor(px, INI, n, RANGE);
    exibirVetor(px, n);

    // Perguntar ao usuario o novo N

    int novoN;

    printf("Digite o novo N: \n");
    scanf("%d", &novoN);

    // Realocar a memoria do novo N
    px = alocarMemoria(px, novoN);

    // Preencher o novo vetor
    preencherVetor(px, INI, novoN, RANGE);

    // exibir vetor
    exibirVetor(px, novoN);

    // limpar o vetor

    free(px);

    return 0;
}

int *alocarMemoria(int *p, int TAMANHO)
{
    int *pr;

    if (!(pr = (int *)realloc(p, TAMANHO * sizeof(int))))
    {
        printf("Não há memória disponível.");
        exit(1);
    }

    return pr;
}

void preencherVetor(int *p, int inicial, int TAMANHO, int qtd)
{
    for (int i = 0; i < TAMANHO; i++)
    {
        p[i] = inicial + rand() % qtd;
    }
}

void exibirVetor(int *p, int TAMANHO)
{
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d\n", p[i]);
    }
}