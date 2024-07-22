#include <stdio.h>

#define SIZE_VEC 15
void scannerNumbers(float numbers[])
{
    for (int i = 0; i < SIZE_VEC; i++)
    {
        scanf("%f", &numbers[i]);
    }
}

float sumSmallerMoreBigger(float numbers[])
{
    float Bigger = numbers[0];
    float Smaller = numbers[0];

    for (int i = 0; i < SIZE_VEC; i++)
    {

        if (i == 0)
        {
            Bigger = numbers[i];
            Smaller = numbers[i];
        }

        if (numbers[i] > fBigger)
        {
            Bigger = numbers[i];
        }

        if (numbers[i] < fSmaller)
        {
            Smaller = numbers[i];
        }
    }

    float Sum = fBigger + fSmaller;

    return Sum;
}

int main()
{

    float VEC[SIZE_VEC];

    printf("Enter 15 numbers: \n");

    scannerNumbers(VEC);

    float sum = sumSmallerMoreBigger(VEC);

    printf("The sum of the smaller and bigger is %2.0f", sum);

    return 0;
}