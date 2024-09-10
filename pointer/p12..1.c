#include <stdio.h.>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define QTD 100

int main()
{
    int n;
    int *px = NULL;

    // Entrada de dados
    printf("Entre com a quantidade de elementos: \n");
    scanf("%d", &n);

    // Alocação de memória

    if (!(px = (int *)malloc(n * sizeof(int))))
    {
        printf("Memória indisponível.");
        exit(1);
    }

    //gerar dados
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        px[i] = INI + rand () % QTD;
    }

    //exibir dados

    for (int i = 0; i < n; i++)
    {
        printf("%p %d\n", &px[i], px[i]);
    }

    //usar o realloc para o novo n

    int novoN;

    printf("Entre com o novo valor de N: ");
    scanf("%d", &novoN);

    px = (int *)realloc(px, novoN * sizeof(int));

    //gerar novos dados

    for (int i = 0; i < novoN; i++)
    {
        px[i] = INI + rand () % QTD;
    }

    //exibir novamente os dados

    for (int i = 0; i < novoN; i++)
    {
        printf("%p %d\n", &px[i], px[i]);
    }

    free(px);

    return 0;
}
