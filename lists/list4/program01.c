#include <stdio.h>

int main(){
    int n1, n2, sum = 0;

    printf("Enter the first number: \n");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    int *pSum = &sum;
    int *pN1 = &n1;
    int *pN2 = &n2;

    sum = *pN1 + *pN2;

    printf("The sum is %d and your andress [%p]", *pSum, pSum);
}