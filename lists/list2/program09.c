#include <stdio.h>

int main() {
    int fibo[20] = {1, 1};

    for (int i = 2; i < 20; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    for (int i = 0; i < 20; i++) {
        printf("%d ", fibo[i]);
    }

    printf("\n");
    return 0;
}