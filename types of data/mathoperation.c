#include <stdio.h>

/*

sum +
subtract =
multiplication *
division /
mod (rest) %

*/

int main(){
    int num1, num2;

    float res;

    printf("Type num1: \n");
    scanf("%d", &num1);

    printf("Type num2: \n");
    scanf("%d", &num2);

    //sum
    res = num1 + num2;
    printf("The sum is: %d\n", (int)res);

    //subtract
    res = num1 - num2;
    printf("The subtract is: %d\n", (int)res);
    
    //multiplication
    res = num1 * num2;
    printf("The multiplication is: %d\n", (int)res);

    //division 
    res = (float) num1 / (float) num2; //cast
    printf("The division is: %.2f\n", res);

    //mod par or 

    if (num1 % 2 == 0)
    {
        printf("Pair");
    } else {
        printf("Odd");
    }
    
}
