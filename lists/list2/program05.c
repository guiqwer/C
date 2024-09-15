#include <stdio.h>

int main() {
    int num, maior, menor, primeiro = 1;

    while (1) {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);

        if (num == 0)
            break;

        if (primeiro) {
            maior = menor = num;
            primeiro = 0;
        } else {
            if (num > maior)
                maior = num;
            if (num < menor)
                menor = num;
        }
    }

    if (!primeiro)
        printf("Maior número: %d, Menor número: %d\n", maior, menor);

    return 0;
}