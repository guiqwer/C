#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    printf("Digite o comprimento, largura e altura: ");
    scanf("%f %f %f", &comprimento, &largura, &altura);

    volume = comprimento * largura * altura;

    printf("Volume da caixa: %.2f\n", volume);

    return 0;
}
