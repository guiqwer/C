#include <stdio.h>

int main() {
    for (int a = 1; a <= 500; a++) {
        for (int b = a; b <= 500; b++) {
            for (int c = b; c <= 500; c++) {
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d) é uma tripla de Pitágoras\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
