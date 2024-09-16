#include <stdio.h>
#include <stdlib.h>

void encontrarExtremos(int *vetor, int n, int **menor, int **maior) {
    *menor = &vetor[0];
    *maior = &vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] < **menor) {
            *menor = &vetor[i];
        }
        if (vetor[i] > **maior) {
            *maior = &vetor[i];
        }
    }
}

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

    int *menor, *maior;
    encontrarExtremos(vetor, n, &menor, &maior);

    printf("Menor valor: %d, Endereço: %p\n", *menor, (void *)menor);
    printf("Maior valor: %d, Endereço: %p\n", *maior, (void *)maior);

    free(vetor);
    return 0;
}
