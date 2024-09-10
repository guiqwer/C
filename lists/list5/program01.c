#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){ //argv é um vetor de stirngs
    
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    
    printf("Teste");

}