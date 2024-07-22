#include <stdio.h>

// Prototype of function
/*
Signature of functions

- type of return
- name
- parameters of entrance

basicly we want prototype the functions for test, for example, we roll
the code and after the main we type the arguments of the function like
in this example bellow
*/

int sum(int num1, int num2); // prototype

int main()
{
    int n1, n2, res;
    printf("Enter the first number: \n");
    scanf("%d", &n1);

    printf("Enter the second number: \n");
    scanf("%d", &n2);

    res = sum(n1, n2);

    printf("The sum of %d and %d is %d", n1, n2, res);
    return 0;
}

int sum(int num1, int num2){
    return num1 + num2;
}