#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char formacao[50];
} Professor;

typedef struct {
    char nome[50];
    int codigo;
    Professor professor;
} Disciplina;

int main() {
    Disciplina d;

    // Informações da disciplina
    printf("Digite o nome da disciplina: ");
    scanf("%s", d.nome);
    printf("Digite o código da disciplina: ");
    scanf("%d", &d.codigo);

    // Informações do professor
    printf("Digite o nome do professor: ");
    scanf("%s", d.professor.nome);
    printf("Digite a idade do professor: ");
    scanf("%d", &d.professor.idade);
    printf("Digite a formação do professor: ");
    scanf("%s", d.professor.formacao);

    // Exibe os dados
    printf("\nDisciplina: %s\nCódigo: %d\n", d.nome, d.codigo);
    printf("Professor: %s\nIdade: %d\nFormação: %s\n", d.professor.nome, d.professor.idade, d.professor.formacao);

    return 0;
}
