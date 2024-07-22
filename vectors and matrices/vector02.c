#include <stdio.h>

int main()
{
    // vectors and numbers
    int numbers[10];
    numbers[0] = 1;
    numbers[1] = 3;
    numbers[2] = 5;
    numbers[3] = 7;
    numbers[4] = 9;

    // vectors and float
    float valors[5];
    for (int i = 0; i < 5; i++)
    {
        valors[i] = (float) numbers[i] / 2;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", valors[i]);
    }
    
    

    return 0;
}