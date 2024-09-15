#include <stdio.h>

int main() {
    float conta, total;

    printf("Digite o valor da conta: ");
    scanf("%f", &conta);

    total = conta + (conta * 0.10);

    printf("Valor total com taxa: %.2f\n", total);

    return 0;
}
