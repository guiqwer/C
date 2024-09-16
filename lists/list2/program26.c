#include <stdio.h>

int main() {
    printf("Decimal\tBinário\t\tOctal\tHexadecimal\n");
    for (int i = 1; i <= 256; i++) {
        printf("%d\t%#b\t%#o\t%#X\n", i, i, i, i); 
    }
    return 0;
}
