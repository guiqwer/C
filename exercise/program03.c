#include <stdio.h>

// 3. read a number and print the result of the square from that number

int main (){
    int number, square;

    printf("Enter a number: ");
    scanf("%d", &number);

    square = number * number;
    printf("%d to the power of 2 is: %d.", number, square);

    return 0;
}