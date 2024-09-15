#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, media_aritmetica, media_geometrica;

    printf("Digite três números em ponto flutuante: ");
    scanf("%f %f %f", &a, &b, &c);

    media_aritmetica = (a + b + c) / 3;
    media_geometrica = pow(a * b * c, 1.0 / 3);

    printf("Média aritmética: %.2f\n", media_aritmetica);
    printf("Média geométrica: %.2f\n", media_geometrica);

    return 0;
}
