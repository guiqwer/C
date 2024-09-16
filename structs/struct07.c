#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    float nota1;
    float nota2;
    float media;
} aluno;

void calcularMedia(aluno *);

    int main(int argc, char *argv[])
{

    aluno a1;

    if (argc != 3)
    {
        printf("Formato = <nota1> <nota2> ");
        exit(1);
    }

    a1.nota1 = atof(argv[1]);
    a1.nota2 = atof(argv[2]);

    calcularMedia(&a1);

    printf("Media = %2.f", a1.media);
}

void calcularMedia(aluno *aluno1)
{
    aluno1->media = ((aluno1->nota1 + aluno1->nota2) / 2);
}