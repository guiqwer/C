#include <stdio.h>

int main() {
    int num, digito, contador = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    while (num != 0) {
        digito = num % 10;
        if (digito == 7) {
            contador++;
        }
        num /= 10;
    }

    printf("O número de dígitos 7 é: %d\n", contador);
    return 0;
}
