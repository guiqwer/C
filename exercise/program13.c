#include <stdio.h>

#define SIZEVEC 10
int biggerValue(int VEC[], int quantity)
{
    int bigger = 0;

    for (int i = 0; i < quantity; i++)
    {
        if (i == 0)
        {
            bigger = VEC[i];
        }

        if (VEC[i] > bigger)
        {
            bigger = VEC[i];
        }
    }

    return bigger;
}

int main()
{
    int mainVec[SIZEVEC] = {1, 6, 8, 9, 10, 32, 58, 91, 10, 20};

    printf("The bigger value is %d", biggerValue(mainVec, SIZEVEC));

    return 0;
}