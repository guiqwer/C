#include <stdio.h>

// 2. Ask the user to enter three integer values ​​and print their sum

int main (){

    int numberOne, numberTwo, numberThree, sums;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &numberOne, &numberTwo, &numberThree);

    sums = numberOne + numberTwo + numberThree;
    
    printf("The result of the sums is: %d.", sums);

    return 0;
}