// broker.c, by Hexenmeister, 23-Nov-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 81)
// broker.c: Calculates a broker's comission

#include <stdio.h>

int main(void){
    // declaration
    float commission, value;

    // input
    printf("Enter value of trade: ");
    scanf("%f", &value);

    // calculation
    if (value < 2500)
        commission = 30.00f + (value * .017f);
    else if (value < 6250)
        commission = 56.00f + (value * .0066f);
    else if (value < 20000)
        commission = 76.00f + (value * .0034f);
    else if (value < 50000)
        commission = 100.00f + (value * .0022f);
    else if (value < 500000)
        commission = 155.00f + (value * .0011f);
    else 
        commission = 255.00f + (value * .0009f);

    if (commission < 39.00f)
        commission = 39.00f;

    // output
    printf("Commission: $%.2f\n", commission);

    return 0;
} 
