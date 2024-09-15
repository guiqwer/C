#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Produto: %d\n", a * b);
    printf("Diferença: %d\n", a - b);
    printf("Quociente: %d\n", a / b);
    printf("Resto: %d\n", a % b);

    return 0;
}
