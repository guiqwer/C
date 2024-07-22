#include <stdio.h>

#define VECTOR 10
#define MAX_NUM 10

int main() {
    int vetor[VECTOR];
    int count[MAX_NUM + 1] = {0}; 

    printf("type %d numbers(between 0 and %d):\n", VECTOR, MAX_NUM);
    
    for (int i = 0; i < VECTOR; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] < 0 || vetor[i] > MAX_NUM) {
            printf("invalid number, enter a number between 0 and %d.\n", MAX_NUM);
            i--;
            continue; 
        }
        
        count[vetor[i]]++;
    }
    printf("\nNumber\tQuanty\n");
    for (int i = 0; i <= MAX_NUM; i++) {
        printf("%d\t%d\n", i, count[i]);
    }

    return 0;
}
