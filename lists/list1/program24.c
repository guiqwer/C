#include <stdio.h>

int main() {
    int x, n;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Resultado: %d\n", x << n);  // Multiplica x por 2^n

    return 0;
}
