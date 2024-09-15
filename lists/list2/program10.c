#include <stdio.h>

int main() {
    for (int i = 16; i <= 90; i += 4) {
        printf("%d: %d\n", i, i * i);
    }

    return 0;
}