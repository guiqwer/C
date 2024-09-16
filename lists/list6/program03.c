#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *vetor;
    int quantidade;
    float media;
} Dados;

void calcularMedia(Dados *d) {
    int soma = 0;
    for (int i = 0; i < d->quantidade; i++) {
        soma += d->vetor[i];
    }
    d->media = (float)soma / d->quantidade;
}

int main() {
    Dados d;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &d.quantidade);

    d.vetor = (int *)malloc(d.quantidade * sizeof(int));

    // Preenche o vetor com valores aleatórios
    for (int i = 0; i < d.quantidade; i++) {
        d.vetor[i] = rand() % 100;
        printf("vetor[%d] = %d\n", i, d.vetor[i]);
    }

    calcularMedia(&d);
    printf("Média do vetor: %.2f\n", d.media);

    free(d.vetor);
    return 0;
}
