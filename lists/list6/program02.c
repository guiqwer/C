#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nomePeca[50];
    int numeroPeca;
    float preco;
    int numeroPedido;
} Estoque;

int main() {
    Estoque e;

    // Usando fgets para garantir leitura correta da string
    printf("Digite o nome da peça: ");
    fgets(e.nomePeca, sizeof(e.nomePeca), stdin); // fgets captura o nome da peça
    e.nomePeca[strcspn(e.nomePeca, "\n")] = '\0'; // Remove a nova linha (\n) capturada pelo fgets

    printf("Digite o número da peça: ");
    scanf("%d", &e.numeroPeca);

    printf("Digite o preço da peça: ");
    scanf("%f", &e.preco);

    printf("Digite o número do pedido: ");
    scanf("%d", &e.numeroPedido);

    // Imprime os dados coletados
    printf("\nPeça: %s\nNúmero da peça: %d\nPreço: R$ %.2f\nNúmero do pedido: %d\n",
           e.nomePeca, e.numeroPeca, e.preco, e.numeroPedido);

    return 0;
}
