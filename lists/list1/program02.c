#include <stdio.h>

int main() {
    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("Hexadecimal: %X\n", x);
    printf("Octal: %o\n", x);

    return 0;
}
