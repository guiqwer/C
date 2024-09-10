#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct  coord
{
    int x;
    int y;
}Coord;

void calcularDistancia(Coord, Coord, float *);

int main(int argc, char **argv){
    Coord c1, c2;

    //Limitando meu argc a 5 elementos. 1 contando com o nome do programa e o resto com as coordendas.
    if (argc!=5)
    {
        printf("Formato:\n\t\t %s <x1> <y1> <x2> <y2> \n \n", *argv );
        exit(1);
    }
    
    //Transformando minhas strings em numeros com o atoi ou atof e colocando na struct

    c1.x = atoi(argv[1]);
    c1.y = atoi(argv[2]);

    c2.x = atoi(argv[3]);
    c2.y = atoi(argv[4]);

    //Calcular a distância passando a variável distancia por referência
    float distancia;
    calcularDistancia(c1, c2, &distancia);

    printf("Distância entre os pontos c1(%d, %d) e c2(%d, %d): %.2f", c1.x, c1.y, c2.x, c2.y, distancia);

    return 0;
}

void calcularDistancia(Coord a, Coord b, float *dis){
    *dis = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}