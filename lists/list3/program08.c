#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int array[], int n)
{
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }

        temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

#define MAX 100

int main()
{

    int array[MAX];
    int range;

    srand(time(NULL));

    printf("Enter a range for the array. Ex: 0 - 10 or 0 - 100");
    scanf("%d", &range);

    // array fill
    for (int i = 0; i < MAX; i++)
    {
        array[i] = rand() % range; // range for the user range
    }

    printArray(array, MAX);

    selectionSort(array, MAX);

    printf("New Array");
    printArray(array, MAX);

    return 0;
}