#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TOOLS 100

typedef struct {
    int id;
    char nome[50];
    int quantidade;
    float custo;
} Ferramenta;

void inicializarArquivo() {
    FILE *file = fopen("hardware.dat", "wb");
    Ferramenta ferramenta = {0, "", 0, 0.0};

    for (int i = 0; i < MAX_TOOLS; i++) {
        fwrite(&ferramenta, sizeof(Ferramenta), 1, file);
    }

    fclose(file);
}

void inserirFerramenta() {
    FILE *file = fopen("hardware.dat", "rb+");
    Ferramenta ferramenta;
    int id;

    printf("Digite o ID da ferramenta (0 a %d): ", MAX_TOOLS - 1);
    scanf("%d", &id);
    fseek(file, id * sizeof(Ferramenta), SEEK_SET);

    printf("Digite o nome da ferramenta: ");
    scanf("%s", ferramenta.nome);
    printf("Digite a quantidade: ");
    scanf("%d", &ferramenta.quantidade);
    printf("Digite o custo: ");
    scanf("%f", &ferramenta.custo);
    ferramenta.id = id;

    fwrite(&ferramenta, sizeof(Ferramenta), 1, file);
    fclose(file);
}

void listarFerramentas() {
    FILE *file = fopen("hardware.dat", "rb");
    Ferramenta ferramenta;

    printf("Ferramentas no inventário:\n");
    printf("ID\tNome\t\tQuantidade\tCusto\n");

    for (int i = 0; i < MAX_TOOLS; i++) {
        fread(&ferramenta, sizeof(Ferramenta), 1, file);
        if (ferramenta.id != 0) {
            printf("%d\t%s\t\t%d\t\t%.2f\n", ferramenta.id, ferramenta.nome, ferramenta.quantidade, ferramenta.custo);
        }
    }

    fclose(file);
}

int main() {
    int opcao;

    inicializarArquivo();

    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Inserir ferramenta\n");
        printf("2. Listar ferramentas\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirFerramenta();
                break;
            case 2:
                listarFerramentas();
                break;
        }
    } while (opcao != 0);

    return 0;
}
