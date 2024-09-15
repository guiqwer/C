#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    for (int i = 1; i <= 10; i += 2) {
        printf("Fatorial de %d = %d\n", i, fatorial(i));
    }
    return 0;
}
