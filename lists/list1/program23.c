#include <stdio.h>

int main() {
    int numero, invertido;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);

    invertido = (numero % 10) * 100 + ((numero / 10) % 10) * 10 + (numero / 100);

    printf("Número invertido: %d\n", invertido);

    return 0;
}
