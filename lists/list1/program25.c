#include <stdio.h>

int main() {
    int total_segundos, horas, minutos, segundos;

    printf("Digite o tempo total em segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("%d horas, %d minutos, %d segundos\n", horas, minutos, segundos);

    return 0;
}
