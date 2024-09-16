#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7 // Tamanho dos vetores e da matriz

// Função para gerar vetor X aleatório
void gerarVetorAleatorio(int *vetor, int n) {
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % N; // Gera números aleatórios entre [0, N-1]
    }
}

// Função para gerar o vetor Y com base em X
void gerarVetorY(int *X, int *Y, int n) {
    for (int i = 0; i < n; i++) {
        int r = rand() % 10 + 1; // Gera r no intervalo [1,10]

        if (r <= 3) {
            Y[i] = X[i];
        } else if (r <= 5) {
            Y[i] = X[i] - 1;
        } else if (r <= 7) {
            Y[i] = X[i] + 1;
        } else if (r <= 9) {
            Y[i] = X[i] - 2;
        } else {
            Y[i] = X[i] + 2;
        }

        // Ajusta Y[i] para estar dentro dos limites [0, N-1]
        if (Y[i] < 0) Y[i] = 0;
        if (Y[i] >= N) Y[i] = N - 1;
    }
}

// Função para gerar a matriz de coocorrências
void gerarMatrizCoocorrencias(int *X, int *Y, int M[N][N], int n) {
    for (int i = 0; i < n; i++) {
        M[X[i]][Y[i]]++;
    }
}

// Função para imprimir a matriz
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

    srand(time(NULL)); // Inicializa a semente para gerar números aleatórios

    // Gera o vetor X aleatório
    gerarVetorAleatorio(X, N);

    // Gera o vetor Y com base no vetor X
    gerarVetorY(X, Y, N);

    // Gera a matriz de coocorrências
    gerarMatrizCoocorrencias(X, Y, M, N);

    // Imprime a matriz de coocorrências
    printf("Matriz de Coocorrências:\n");
    imprimirMatriz(M);

    return 0;
}
