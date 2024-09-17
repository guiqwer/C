#include <stdio.h>

int main() {
    FILE *file;
    char nome[50];
    int idade;
    char email[50];
    int numUsuarios, i;

    // Abre ou cria o arquivo CSV
    file = fopen("usuarios.csv", "a");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Quantos usuários deseja cadastrar? ");
    scanf("%d", &numUsuarios);

    for (i = 0; i < numUsuarios; i++) {
        printf("Digite o nome do usuário: ");
        scanf("%s", nome);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o email: ");
        scanf("%s", email);

        // Grava no arquivo CSV
        fprintf(file, "%s,%d,%s\n", nome, idade, email);
    }

    fclose(file);
    printf("Dados salvos com sucesso em usuarios.csv\n");

    return 0;
}
