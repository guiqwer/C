#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 100

int main()
{

    char *vec;
    int count = 0;

    puts("Enter the string: ");
    fgets(vec, LEN, stdin);

    while (vec[count] != '\0' && vec[count] != '\n')
    {
        count++;
    }

    // output

    printf("Length of the string: %d\n", *pCount);

    free(vec);

    return 0;
}