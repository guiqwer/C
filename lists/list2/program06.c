#include <stdio.h>

int main() {
    int voto, votos_paulo = 0, votos_renata = 0, votos_branco = 0, votos_nulo = 0, total_votos = 0;

    while (1) {
        printf("Vote [5 - Paulo, 7 - Renata, 0 - Branco, negativo - Finaliza]: ");
        scanf("%d", &voto);

        if (voto < 0)
            break;

        switch (voto) {
            case 5: votos_paulo++; break;
            case 7: votos_renata++; break;
            case 0: votos_branco++; break;
            default: votos_nulo++;
        }

        total_votos++;
    }

    printf("Paulo: %.2f%%\n", (votos_paulo * 100.0) / total_votos);
    printf("Renata: %.2f%%\n", (votos_renata * 100.0) / total_votos);
    printf("Brancos: %.2f%%\n", (votos_branco * 100.0) / total_votos);
    printf("Nulos: %.2f%%\n", (votos_nulo * 100.0) / total_votos);

    if (votos_paulo > votos_renata)
        printf("Paulo foi eleito.\n");
    else if (votos_renata > votos_paulo)
        printf("Renata foi eleita.\n");
    else
        printf("Empate.\n");

    return 0;
}