#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <valor1> <valor2> <operacao>\n", argv[0]);
        return 1;
    }

    float valor1 = atof(argv[1]);
    float valor2 = atof(argv[2]);
    char operacao = argv[3][0];

    if (operacao == '+') {
        printf("Resultado: %.2f\n", valor1 + valor2);
    } else if (operacao == '*') {
        printf("Resultado: %.2f\n", valor1 * valor2);
    } else {
        printf("Operação inválida. Use '+' para soma ou '*' para multiplicação.\n");
        return 1;
    }

    return 0;
}
