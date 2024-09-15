#include <stdio.h>

int main() {
    int soma3 = 0, soma5 = 0;

    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0) {
            soma3 += i;
        }
    }

    for (int i = 101; i <= 200; i++) {
        if (i % 5 == 0) {
            soma5 += i;
        }
    }

    printf("Somatório de números divisíveis por 3 no intervalo [0,100]: %d\n", soma3);
    printf("Somatório de números divisíveis por 5 no intervalo ]100,200]: %d\n", soma5);

    return 0;
}
