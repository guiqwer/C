#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcularErroMedioQuadratico(int *A, int *B, int n) {
    double somaErro = 0.0;
    for (int i = 0; i < n; i++) {
        somaErro += pow((A[i] - B[i]), 2);
    }
    return somaErro / n;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <tamanho dos vetores>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    int *A = (int *)malloc(n * sizeof(int));
    int *B = (int *)malloc(n * sizeof(int));

    // Preenche os vetores A e B com números aleatórios
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 100;
        B[i] = rand() % 100;
        printf("A[%d] = %d, B[%d] = %d\n", i, A[i], i, B[i]);
    }

    // Calcula o Erro Médio Quadrático (EMQ)
    double emq = calcularErroMedioQuadratico(A, B, n);
    printf("\nErro Médio Quadrático (EMQ): %.2f\n", emq);

    free(A);
    free(B);
    return 0;
}
