#include <stdio.h>

int main() {
    int dias;
    float pagamento, salario;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    salario = dias * 50.25;

    if (dias > 20) {
        pagamento = salario * 1.30; // 30% de gratificação
    } else if (dias > 10) {
        pagamento = salario * 1.20; // 20% de gratificação
    } else {
        pagamento = salario;
    }

    pagamento -= pagamento * 0.10; // 10% de imposto de renda

    printf("Pagamento líquido: %.2f\n", pagamento);

    return 0;
}
