#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Valor absoluto: %d\n", valor < 0 ? -valor : valor);

    return 0;
}
