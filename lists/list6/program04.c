#include <stdio.h>

#define NUM_ALUNOS 3

typedef struct {
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcularMedia(Aluno *a) {
    a->media = (a->nota1 + a->nota2) / 2;
}

void calcularMediaAlunos(Aluno alunos[], int n) {
    for (int i = 0; i < n; i++) {
        calcularMedia(&alunos[i]);
        printf("Média do aluno %d: %.2f\n", i + 1, alunos[i].media);
    }
}

int main() {
    Aluno alunos[NUM_ALUNOS];

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);
    }

    calcularMediaAlunos(alunos, NUM_ALUNOS);

    return 0;
}
