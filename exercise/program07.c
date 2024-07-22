#include <stdio.h>
/*

1. Faça um programa que determine e mostre os
cincos primeiros múltiplos de 3, considerando números maiores que 0.

*/
int main(){
    int number = 1;
    int contador = 0;
    
    printf("Showing the fifth first multiple\n");
    while (contador < 5)
    {
        if(number % 3 == 0){
            printf("The number is multiple of 3 \n");
            contador+= 1;
        }

        number= 1;
    }
    
return 0;

}