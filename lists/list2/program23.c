#include <stdio.h>

int main() {
    int a = 5, b;

    b = ++a;  // pré-incremento
    printf("Após pré-incremento, a = %d, b = %d\n", a, b);

    a = 5;    // resetando o valor de a
    b = a++;  // pós-incremento
    printf("Após pós-incremento, a = %d, b = %d\n", a, b);

    return 0;
}
