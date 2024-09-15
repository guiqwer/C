#include <stdio.h>

int main() {
    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("Triplo: %d, Quadrado: %d, Meio: %.1f\n", 3 * x, x * x, x / 2.0);

    return 0;
}
