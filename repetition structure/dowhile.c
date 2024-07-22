#include <stdio.h>

// do while

int main()
{

    // var
    int number, sum = 0;

    do
    {
        // entrance
        printf("type a number: ");
        scanf("%d", &number);

        // process
        sum += number;

    } while (number != 0);

    // exit
    printf("the sum is: %d", sum);
    return 0;
}