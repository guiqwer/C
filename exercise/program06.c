#include <stdio.h>

// Three friends played the lottery. If they win, the prize must be distributed proportionally to the amount each person gave to place the bet. 
//Make a program that reads how much each bettor bet, the value of the prize and prints how much each one would win from the base prize based on the amount invested.

#define PERCENTAGE 100

int main() {
    float friend1, friend2, friend3, total, percentageF1, percentageF2, percentageF3;
    float award1, award2, award3, totalAward;
    //F1 is friend 1 etc..

    printf("Gambler one: ");
    scanf("%f", &friend1);

    printf("Gambler two: ");
    scanf("%f", &friend2);

    printf("Gambler three: ");
    scanf("%f", &friend3);

    printf("Award: ");
    scanf("%f", &totalAward);

    total = friend1 + friend2 + friend3;

    percentageF1 = (friend1 / total) * PERCENTAGE;
    percentageF2 = (friend2 / total) * PERCENTAGE;
    percentageF3 = (friend3 / total) * PERCENTAGE;

    award1 = (totalAward * percentageF1) / PERCENTAGE;
    award2 = (totalAward * percentageF2) / PERCENTAGE;
    award3 = (totalAward * percentageF3) / PERCENTAGE;

    printf("The friend one gambling %.2f, which corresponds to %.2f%%, should receive %.f\n", friend1, percentageF1, award1);
    printf("The friend two gambling %.2f, which corresponds to %.2f%%, should receive %.f\n", friend2, percentageF2, award2);
    printf("The friend three gambling %.2f, which corresponds to %.2f%%, should receive %.f\n", friend3, percentageF3, award3);

    return 0;
}
