#include <stdio.h>

int main() {
    int a, b, temp, soma = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("Somatório dos números pares entre %d e %d: %d\n", a, b, soma);
    return 0;
}
