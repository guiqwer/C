#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o dividendo: ");
    scanf("%f", &num1);

    while (1) {
        printf("Digite o divisor (não pode ser 0): ");
        scanf("%f", &num2);

        if (num2 != 0) {
            printf("Resultado: %.2f\n", num1 / num2);
            break;
        } else {
            printf("O divisor não pode ser zero. Tente novamente.\n");
        }
    }

    return 0;
}