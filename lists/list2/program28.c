#include <stdio.h>

void esconder_bits(unsigned char X, unsigned char Y) {
    for (int i = -4; i <= 4; i++) {
        if (i != 0) {
            unsigned char novo_valor = (Y + i & 0xF0) | (X & 0x0F);
            printf("Valor ajustado em %d posições de Y: %u\n", i, novo_valor);
        }
    }
}

int main() {
    unsigned char X, Y;

    printf("Digite um valor para X: ");
    scanf("%hhu", &X);

    do {
        printf("Digite um valor para Y (maior ou igual a 5): ");
        scanf("%hhu", &Y);
    } while (Y < 5);

    esconder_bits(X, Y);

    return 0;
}
