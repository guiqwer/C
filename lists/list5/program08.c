#include <stdio.h>
#include <stdlib.h>

void binarizarMatriz(int **M, int **S, int linhas, int colunas, int t) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            S[i][j] = (M[i][j] > t) ? 1 : 0;
        }
    }
}

void imprimirMatriz(int **M, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas, t;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);
    printf("Digite o limiar (t): ");
    scanf("%d", &t);

    int **M = (int **)malloc(linhas * sizeof(int *));
    int **S = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        M[i] = (int *)malloc(colunas * sizeof(int));
        S[i] = (int *)malloc(colunas * sizeof(int));
    }

    // Preenche a matriz M com valores aleatórios
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            M[i][j] = rand() % 100;
            printf("M[%d][%d] = %d ", i, j, M[i][j]);
        }
        printf("\n");
    }

    // Binariza a matriz M em S
    binarizarMatriz(M, S, linhas, colunas, t);

    printf("\nMatriz binarizada (S):\n");
    imprimirMatriz(S, linhas, colunas);

    // Libera memória
    for (int i = 0; i < linhas; i++) {
        free(M[i]);
        free(S[i]);
    }
    free(M);
    free(S);

    return 0;
}
