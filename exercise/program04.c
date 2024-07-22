#include <stdio.h>

// 4. Write a program that reads three values ​​and presents as a result the sum of the squares of the values ​​read.
int main (){

    int numberOne, numberTwo, numberThree, sums, powerSums1, powerSums2, powerSums3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &numberOne, &numberTwo, &numberThree);

    powerSums1 = numberOne * numberOne;
    powerSums2 = numberTwo * numberThree;
    powerSums3 = numberThree * numberThree;
    sums = powerSums1 + powerSums2 + powerSums3;

    
    printf("The result of the sums is: %d.", sums);

    return 0;
}