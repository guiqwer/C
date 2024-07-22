#include <stdio.h>

// Example for 

int main()
{
    // var

    int number, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        // entrance
        printf("Informe um número: ");
        scanf("%d", &number);

        // process
        sum += number;
    }

    // exit
    printf("the sum is: %d", sum);

    return 0;
}