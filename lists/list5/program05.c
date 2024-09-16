#include <stdio.h>
#include <stdlib.h>

float somarVetor(float *vetor, int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <tamanho do vetor>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    float *vetor = (float *)malloc(n * sizeof(float));

    // Preenche o vetor com valores aleatórios
    for (int i = 0; i < n; i++) {
        vetor[i] = (float)rand() / (float)(RAND_MAX / 100);
        printf("vetor[%d] = %.2f\n", i, vetor[i]);
    }

    float soma = somarVetor(vetor, n);
    printf("Soma dos elementos: %.2f\n", soma);

    free(vetor);
    return 0;
}
