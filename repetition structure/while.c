#include <stdio.h>

// Example while

int main()
{

    // var
    int number, sum = 0;

    while (number != 0)
    {
        // entrance
        printf("type a number: ");
        scanf("%d", &number);

        // process
        sum += number;
    }

    // exit
    printf("the sum is: %d", sum);
    return 0;
}