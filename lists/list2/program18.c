#include <stdio.h>

int main() {
    unsigned long long graos = 1, soma = 1;

    for (int i = 2; i <= 64; i++) {
        graos *= 2;
        soma += graos;
    }

    printf("O número total de grãos no tabuleiro é: %llu\n", soma);
    return 0;
}
