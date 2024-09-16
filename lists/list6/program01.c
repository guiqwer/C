#include <stdio.h>

typedef struct {
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcularMedia(Aluno *a) {
    a->media = (a->nota1 + a->nota2) / 2;
}

int main() {
    Aluno a;

    printf("Digite a primeira nota: ");
    scanf("%f", &a.nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &a.nota2);

    calcularMedia(&a);

    printf("A média do aluno é: %.2f\n", a.media);

    return 0;
}
