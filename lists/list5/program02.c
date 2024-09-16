#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <tamanho do vetor>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    int *vetor = (int *)malloc(n * sizeof(int));

    // Preenche o vetor com números aleatórios
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 100;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Encontra o menor valor
    int *menor = &vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] < *menor) {
            menor = &vetor[i];
        }
    }

    printf("Menor valor: %d, Endereço: %p\n", *menor, (void *)menor);

    free(vetor);
    return 0;
}
