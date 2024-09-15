#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Não existe fatorial de número negativo.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            fatorial *= i;
        }
        printf("Fatorial de %d = %llu\n", num, fatorial);
    }

    return 0;
}