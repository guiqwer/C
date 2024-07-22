#include <stdio.h>

#define VECTOR_SIZE 10

int main()
{
    int VEC[VECTOR_SIZE];

    printf("Enter %d integers:\n", VECTOR_SIZE);

    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        scanf("%d", &VEC[i]);
    }

    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        if (VEC[i] < 0)
        {
            VEC[i] = 0;
        }

        printf("Vector[%d] and your valor %d\n", i, VEC[i]);
    }

    return 0;
}