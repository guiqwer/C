#include <stdio.h>

int main() {
    float fahrenheit;

    for (int celsius = 10; celsius <= 100; celsius += 10) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%d°C = %.2f°F\n", celsius, fahrenheit);
    }

    return 0;
}
