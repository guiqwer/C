#include <stdio.h>

int main() {
    int x;

    // a) x = 7 + 3*6/2-1
    x = 7 + 3 * 6 / 2 - 1;
    printf("x = %d\n", x);

    // b) x = 2%2 + 2*2-2/2;
    x = 2 % 2 + 2 * 2 - 2 / 2;
    printf("x = %d\n", x);

    // c) x = (3 * 9 * (3 + (9*3/ (3) ) ) );
    x = (3 * 9 * (3 + (9 * 3 / 3)));
    printf("x = %d\n", x);

    return 0;
}
