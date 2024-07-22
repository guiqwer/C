#include <stdio.h>

#define VECTOR_SIZE 6
int main()
{
    int sum = 0;
    int A[VECTOR_SIZE] = {1, 0, 5, -2, -5, 7 };

    sum = A[0] + A[1] + A[5];

    printf("Sum is %d\n", sum);

    A[4] = 100;


    for (int i = 0; i < 6; i++)
    {

        printf("Vector[%d] and your valor %d\n", i, A[i]);
    }

    return 0;
}