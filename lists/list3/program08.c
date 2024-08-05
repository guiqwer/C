#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int array[], int TAM)
{
    int i, j, minIndex, temp;

    for (i = 0; i < TAM - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < TAM; j++)
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

void bubbleSort(int arr[], int TAM){
    int i, j, temp;

    for (i = 0; i < TAM -1 ; i++)
    {
        for (j = 0; j < TAM - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
            
        }
        
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