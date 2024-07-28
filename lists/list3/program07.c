#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX_RANGE 20
#define SIZE 3

float arithmeticMean(int vec[])
{
    int sum = 0;
    float media;

    for (int i = 0; i < SIZE; i++)
    {
        vec[i] = rand() % MAX_RANGE;
        sum += vec[i];
    }
    media = (float)sum / SIZE;
    return media;
}

float geometricMean(int vec[]){
    float multi = 1;
    float media;

    for (int i = 0; i < SIZE; i++)
    {
        vec[i] = rand() % MAX_RANGE;
        multi*= vec[i]; 
    }

    media = pow(multi, 1.0/3.0);
    
    return media;
    
}

int main()
{
    int array[SIZE];
    srand(time(NULL));

    float mediaArithmetic = arithmeticMean(array);
    float mediaGeometric = geometricMean(array);

    printf("Media Aritmetica %.2f\n", mediaArithmetic);
    printf("Geometry mean %.2f\n",mediaGeometric);

    return 0;
}