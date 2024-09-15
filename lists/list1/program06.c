#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = 62.1 * altura - 44.7;
    } else {
        printf("Sexo inválido!\n");
        return 1;
    }

    printf("Peso ideal: %.2f\n", peso_ideal);

    return 0;
}
