#include <stdio.h>

// 5. read four notes, calculate the arithmetic mean and print the result.

#define NUMBER_OF_GRADE 4

int main (){
    float grade1, grade2, grade3, grade4, average = 0;

    printf("Type your 4 grade: ");
    scanf("%f %f %f %f", &grade1, &grade2, &grade3, &grade4);

    average = (grade1 + grade2 + grade3 + grade4) / NUMBER_OF_GRADE;

    printf("Your average is: %.2f.", average);
    
    return 0;

}