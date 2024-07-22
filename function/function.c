#include <stdio.h>

void mensage()
{
    printf("Welcome!\n");
}

int sum(int num1, int num2)
{
    int res = num1 + num2;
    return res;
    // the result needs become the same type of our function
}

void next_character(char character)
{
    printf("%c", character + 1);
}

int main()
{
    mensage();

    /*
    i dont need resolves like that

    int result = sum(4 ,5);

    is more faster this way>
    
    */
    printf("Sum : %d\n", sum(4, 5));

    char ex = 97; // a in table ASCII

    next_character(ex);

    return 0;
}