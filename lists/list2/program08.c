#include <stdio.h>

int main() {
    float valor, entrada, prestacao;

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);

    entrada = (int)(valor / 3) + (valor - (int)(valor / 3) * 3);
    prestacao = (valor - entrada) / 2;

    printf("Entrada: R$%.2f, Prestações: R$%.2f cada\n", entrada, prestacao);

    return 0;
}