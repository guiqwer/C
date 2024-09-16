#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetorAleatorio(int *vetor, int n) {
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % n; // Gera números aleatórios entre [0, N-1]
    }
}

void gerarMatrizCoocorrencias(int *X, int *Y, int M[][7], int n) {
    for (int i = 0; i < n; i++) {
        M[X[i]][Y[i]]++; // Incrementa a posição correspondente na matriz
    }
}

void imprimirMatriz(int M[][7], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N = 7;
    int X[N], Y[N];
    int M[7][7] = {0}; // Inicializa a matriz com zeros

    srand(time(NULL)); // Semente para a geração de números aleatórios

    // Gera os vetores aleatórios X e Y
    gerarVetorAleatorio(X, N);
    gerarVetorAleatorio(Y, N);

    // Gera a matriz de coocorrências
    gerarMatrizCoocorrencias(X, Y, M, N);

    // Imprime a matriz de coocorrências
    printf("Matriz de Coocorrências:\n");
    imprimirMatriz(M, N);

    return 0;
}
