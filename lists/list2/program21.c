#include <stdio.h>

int main() {
    int num, invertido = 0, temp, original;

    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        temp = num % 10;
        invertido = invertido * 10 + temp;
        num /= 10;
    }

    if (original == invertido) {
        printf("%d é um palíndromo.\n", original);
    } else {
        printf("%d não é um palíndromo.\n", original);
    }

    return 0;
}
