#include <stdio.h>

int main() {
    int a, b, temp, count = 0;

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
        if (i % 3 == 0) {
            count++;
        }
    }

    printf("Quantidade de números divisíveis por 3 entre %d e %d: %d\n", a, b, count);
    return 0;
}
