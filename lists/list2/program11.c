#include <stdio.h>

int main() {
    int a, b, i, temp;

    printf("Digite o limite A: ");
    scanf("%d", &a);
    printf("Digite o limite B: ");
    scanf("%d", &b);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for (i = a; i <= b; i++) {
        if (i % 4 == 0) {
            printf("%d: %d\n", i, i * i);
        }
    }

    return 0;
}
