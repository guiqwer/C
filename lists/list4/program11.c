#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7 // Define o tamanho dos vetores e da matriz

void gerarVetorAleatorio(int *vetor, int n) {
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % N; // Gera números aleatórios no intervalo [0, N-1]
    }
}

void gerarMatrizCoocorrencias(int *X, int *Y, int M[N][N], int n) {
    for (int i = 0; i < n; i++) {
        M[X[i]][Y[i]]++; // Incrementa a posição correspondente na matriz
    }
}

void imprimirMatriz(int M[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int X[N], Y[N], M[N][N] = {0}; // Inicializa a matriz com zeros

    srand(time(NULL)); // Semente para a geração de números aleatórios

    // Gera os vetores aleatórios X e Y
    gerarVetorAleatorio(X, N);
    gerarVetorAleatorio(Y, N);

    // Gera a matriz de coocorrências
    gerarMatrizCoocorrencias(X, Y, M, N);

    // Imprime a matriz de coocorrências
    printf("Matriz de Coocorrências:\n");
    imprimirMatriz(M);

    return 0;
}
