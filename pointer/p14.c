#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 10;

int *alocarMemoria(int *, int)
void gerarVetor(int *, int, int);

int main(int argc, char *argv[]){

    if (argc !=2)
    {
        printf("Formato: %s <tamanho do vetor>", argv[0]);
        exit(1);
    }

    int n = atoi(argv[1]);

    int *p = NULL;

    p = alocarMemoria(NULL, n);
    

    srand(time(NULL));
    gerarVetor(p, n, RANGE); // passar o vetor e o tamanho;
    
}

int *alocarMemoria(int v*, int tam){
    int *p = (int*)realloc(v, tam * sizeof(int));
    return p;
}



void gerarVetor(int *vet, int tam, int rg){
    for (int i = 0; i < tam; i++)
    {
        vet[i] = rand () % 
    }
    
}