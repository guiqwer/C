#include <stdio.h>
#include <stdlib.h>

#define LEN 100

int main() {
    char string1[LEN];
    char string2[LEN];
    char *pString1 = string1;
    char *pString2 = string2;

    printf("Digite uma frase: ");
    fgets(pString1, LEN, stdin);

    int count = 0;
    while (*(pString1 + count) != '\0') {
        *(pString2 + count) = *(pString1 + count);
        count++;
    }
    *(pString2 + count) = '\0'; // Adiciona o terminador nulo

    printf("String 2: %s", pString2);

    return 0;
}
