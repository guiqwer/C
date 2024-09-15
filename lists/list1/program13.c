#include <stdio.h>

int main() {
    int A, B, temp;

    printf("Digite os valores de A e B: ");
    scanf("%d %d", &A, &B);

    // Troca
    temp = A;
    A = B;
    B = temp;

    printf("Após a troca, A = %d e B = %d\n", A, B);

    return 0;
}
