#include <stdio.h>

int main() {
    double pi = 0;
    int sinal = 1;

    for (int i = 1; i <= 1000; i += 2) {
        pi += sinal * (4.0 / i);
        sinal = -sinal;
        printf("Aproximação de π com %d termos: %.15f\n", (i + 1) / 2, pi);
    }

    return 0;
}
