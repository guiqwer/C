#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 10

typedef struct aluno
{
    float nota1;
    float nota2;
    float nota3;
    float media;
} aluno;

void calcularMedia(aluno *, int);

int main()
{

    int qtdAlunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    aluno *vetAluno;

    vetAluno = (int)malloc(qtdAlunos * sizeof(aluno));

    srand(time(NULL));

    for (int i = 0; i < qtdAlunos; i++)
    {
        vetAluno[i].nota1 = rand() % RANGE;
        vetAluno[i].nota2 = rand() % RANGE;
        vetAluno[i].nota3 = rand() % RANGE;
    }

    calcularMedia(vetAluno, qtdAlunos);

    for (int k = 0; k < qtdAlunos; k++)
    {
        puts("===");
        printf("Media do Aluno %d : %.2f\n", k + 1, vetAluno[k].nota1);
        printf("Media do Aluno %d : %.2f\n", k + 1, vetAluno[k].nota2);
        printf("Media do Aluno %d : %.2f\n", k + 1, vetAluno[k].nota3);
        printf("Média: %.2f\n", vetAluno[k].media);
    }

    return 0;
}

void calcularMedia(aluno *vetor, int qtd)
{
    for (int i = 0; i < qtd; i++)
    {
        vetor[i].media = ((vetor[i].nota1 + vetor[i].nota2 + vetor[i].nota3) / 3);
    }
}