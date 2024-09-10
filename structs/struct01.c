#include <stdio.h>
#include <string.h>


struct stAluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int anoNascimento;
};

int main(){

    struct stAluno aluno1;

    printf("Informe a matricula do aluno: ");
    fgets(aluno1.matricula, 10, stdin);

    printf("Informe o nome do aluno: ");
    fgets(aluno1.nome, 100, stdin);

    printf("Informe o curso do aluno");
    fgets(aluno1.curso, 50, stdin);

    printf("Informe o ano de nascimento do aluno");
    scanf("%d", &aluno1.anoNascimento);


    printf("========== Dados do Aluno ==========\n");
    printf("Matricula: %s\n", aluno1.matricula);
    printf("Nome: %s\n", aluno1.nome);
    printf("Curso: %s\n", aluno1.curso);
    printf("Ano de Nascimento: %d\n", aluno1.anoNascimento);

    return 0;
}