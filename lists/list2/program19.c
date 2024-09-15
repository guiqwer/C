#include <stdio.h>

int main() {
    int a, b, temp, soma = 0, count = 0;

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
        soma += i;
        count++;
    }

    printf("A média aritmética entre %d e %d é: %.2f\n", a, b, (float)soma / count);
    return 0;
}
