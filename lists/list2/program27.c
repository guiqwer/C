#include <stdio.h>

int main() {
    int num, maior = -2147483648, menor = 2147483647;  // Valores iniciais extremos para garantir a comparação
    while (1) {
        printf("Digite um número (número negativo par para sair): ");
        scanf("%d", &num);

        if (num < 0 && num % 2 == 0) {
            break;
        }

        if (num > maior) {
            maior = num;
        }

        if (num < menor) {
            menor = num;
        }
    }

    if (maior != -2147483648 && menor != 2147483647) {
        printf("O produto do maior (%d) pelo menor (%d) é: %d\n", maior, menor, maior * menor);
    } else {
        printf("Nenhum número válido foi inserido.\n");
    }

    return 0;
}
