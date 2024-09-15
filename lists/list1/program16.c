#include <stdio.h>

int main() {
    float valor_hora, salario_bruto, salario_liquido;
    int horas_trabalhadas;
    float desconto_inss;

    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valor_hora);
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%d", &horas_trabalhadas);
    printf("Digite o percentual de desconto do INSS (em %%): ");
    scanf("%f", &desconto_inss);

    salario_bruto = valor_hora * horas_trabalhadas;
    salario_liquido = salario_bruto - (salario_bruto * desconto_inss / 100);

    printf("Salário bruto: %.2f\n", salario_bruto);
    printf("Salário líquido: %.2f\n", salario_liquido);

    return 0;
}
