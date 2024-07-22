#include <stdio.h>

// decision structure if, else, else if

#define ADULT 18
#define ELDERLY 60

int main(){

    int age;
    printf("What is you age?\n");
    scanf("%d", &age);

    if (age < ADULT){
        printf("You are minor of age.\n");
    }
    else if (age >= ADULT && age <= ELDERLY) {
    printf("You are an adult.\n");
    } else{
        printf("You are elderly.\n");
    }

    printf("Your age is: %d old.", age);

    return 0;
}