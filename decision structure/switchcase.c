#include <stdio.h>
/*

we use switch in cases where have a big structure or confusing of if/else/if else

Example bellow

*/

#include <stdio.h>

int main()
{
    int value;

    printf("Type a value in this range (1-7): ");
    scanf("%d", &value);

    switch (value)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid Value\n");
    }

    return 0;
}
