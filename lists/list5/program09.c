#include <stdio.h>
#include <stdlib.h>

int somarDiagonalPrincipal(int **M, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += M[i][i];
    }
    return soma;
}

int main() {
    int n;

    printf("Digite o tamanho da matriz quadrada (N): ");
    scanf("%d", &n);

    int **M = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        M[i] = (int *)malloc(n * sizeof(int));
    }

    // Preenche a matriz com valores aleatórios
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = rand() % 100;
            printf("M[%d][%d] = %d ", i, j, M[i][j]);
        }
        printf("\n");
    }

    // Soma da diagonal principal
    int soma = somarDiagonalPrincipal(M, n);
    printf("\nSomatório da diagonal principal: %d\n", soma);

    if (soma % 2 == 0) {
        printf("O somatório é par.\n");
    } else {
        printf("O somatório é ímpar.\n");
    }

    // Libera memória
    for (int i = 0; i < n; i++) {
        free(M[i]);
    }
    free(M);

    return 0;
}
