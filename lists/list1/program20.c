#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    printf("%d %s múltiplo de %d\n", a, (a % b == 0) ? "é" : "não é", b);

    return 0;
}
