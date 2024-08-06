#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main()
{

    int vec[TAM][TAM];

    // recieve values of matrices
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("Type a number for the row  %d and colun %d: ", i, j);
            scanf("%d", &vec[i][j]);
        }
    }

    // print the rows and coluns
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("%d ", vec[i][j]);
        }
        printf("\n"); // new row after the row of matrices
    }

    printf("\n");

    // output the main diagonal

    printf("The main diagonal: \n");
    for (int k = 0; k < TAM; k++)
    {
        printf(" %d", vec[k][k]);
    }

    return 0;
}