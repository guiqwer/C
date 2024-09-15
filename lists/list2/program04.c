#include <stdio.h>

int main() {
    int anos = 0;
    int altura_jose = 150;
    int altura_pedro = 110;

    while (altura_pedro <= altura_jose) {
        altura_jose += 2;
        altura_pedro += 3;
        anos++;
    }

    printf("Pedro será maior que José em %d anos.\n", anos);
    return 0;
}