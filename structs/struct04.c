#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    float nota1;
    float nota2;
    float nota3;
    float media;
}al1;

void calcularMedia(al1 *);

int main(){
    //usar o tipo al1 e a variavel
    al1 a1;
    //ponteiro para o struct
    al1 *p = NULL;

    // meu ponteiro esta apontando para a variavel a1
    p = &a1;

    // agora posso declara as notas da seguinte forma:
    // a1.nota1= 9.0;
    // a1.nota2= 5.0;
    // a1.nota3 = 10.0;
    // ou
    // (*p).nota1 = 9.0;
    // (*p).nota2 = 5.0;
    // (*p).nota3 = 10.0;

    p->nota1 = 9.0;
    p->nota2 = 5.0;
    p->nota3 = 10.0;

    //no lugar de calcular a media utilizando a1.media = calcularmedia(a1);
    // faremos por referencia
    // como é um vetor não precisamos utilizar >&<
    calcularMedia(p);

    printf("Media: %.2f", a1.media);
}


void calcularMedia(al1 *vet){
    vet->media = ((vet->nota1 + vet->nota2 + vet->nota3) / 3);
}