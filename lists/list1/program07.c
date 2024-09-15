#include <stdio.h>

int main() {
    int horas, minutos, segundos, total;

    printf("Digite as horas, minutos e segundos: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    total = horas * 3600 + minutos * 60 + segundos;

    printf("Total em segundos: %d\n", total);

    return 0;
}
