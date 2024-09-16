#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

float calcularMedia(int *vetor, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vetor[i];
    }
    return (float)soma / n;
}

int calcularMediana(int *vetor, int n) {
    qsort(vetor, n, sizeof(int), comparar); // Ordena o vetor
    if (n % 2 == 0) {
        return (vetor[n/2 - 1] + vetor[n/2]) / 2;
    } else {
        return vetor[n/2];
    }
}

int calcularModa(int *vetor, int n) {
    int moda = vetor[0], frequenciaModa = 1, frequenciaAtual = 1;

    for (int i = 1; i < n; i++) {
        if (vetor[i] == vetor[i - 1]) {
            frequenciaAtual++;
        } else {
            frequenciaAtual = 1;
        }
        if (frequenciaAtual > frequenciaModa) {
            frequenciaModa = frequenciaAtual;
            moda = vetor[i];
        }
    }
    return moda;
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

    // Calcula média, mediana e moda
    float media = calcularMedia(vetor, n);
    int mediana = calcularMediana(vetor, n);
    int moda = calcularModa(vetor, n);

    printf("\nMédia: %.2f\n", media);
    printf("Mediana: %d\n", mediana);
    printf("Moda: %d\n", moda);

    free(vetor);
    return 0;
}
