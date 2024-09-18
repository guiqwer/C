#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    // Usando operador ternário para determinar par ou ímpar
    printf("%d é %s\n", num, (num % 2 == 0 ? "par" : "ímpar"));
    
    return 0;
}
