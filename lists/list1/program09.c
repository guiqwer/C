#include <stdio.h>

int main() {
    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("Sucessor: %d, Antecessor: %d\n", x + 1, x - 1);

    return 0;
}
