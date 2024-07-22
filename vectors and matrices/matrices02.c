#include <stdio.h>

int main()
{
    // vectors and numbers
    int numbers[2][2];
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[1][0] = 3;
    numbers[1][1] = 4;

    for (int i = 0; i < 2; i++) // row
    {
        for (int j = 0; j < 2; j++) // colun
        {
            printf("Numbers in position[%d][%d] %d\n", i, j, numbers[i][j]);
        }
    }

    float valors[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Type a number for the row  %d and colun %d: ", i, j);
            scanf("%f", &valors[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Numbers in position [%d][%d]: %.2f\n", i, j, valors[i][j]);
        }
    }

    return 0;
}