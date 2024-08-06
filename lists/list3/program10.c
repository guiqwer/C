#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define RANGE 10

int main()
{

    int vec[TAM][TAM];

    // recieve values of matrices

    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            vec[i][j] = rand() % RANGE;
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

    // count if the number of user are in matrices

    int userChoice;
    int count = 0;

    puts("Enter a number for verify if its in the matrices: ");
    scanf("%d", &userChoice);

    for (int k = 0; k < TAM; k++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (userChoice == vec[k][j])
            {
                count += 1;
            }
            else
            {
                puts("The number not exist in the matrices.");
                exit(1);
            }
        }
    }

    // output

    printf("The number %d pops up %d times", userChoice, count);

    return 0;
}
