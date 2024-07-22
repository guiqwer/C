#include <stdio.h>

int main()
{
    int number;
    int bigger, smaller;

    for (int i = 0; i < 10; i++)
    {
        printf("Type a number: ");
        scanf("%d", &number);

        // first loop
        if (i == 0)
        {
            bigger = number;
            smaller = number;
        }

        if (number > bigger)
        {
            bigger = number;
        }

        if (number < smaller)
        {
            smaller = number;
        }
    }

    printf("%d\n", bigger);
    printf("%d\n", smaller);
}