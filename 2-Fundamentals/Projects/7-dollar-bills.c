// base.c, by Hexenmeister, 14-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 2, Page 34-35)
// dollar-bills: takes a amount of dollars and outputs how to pay that amount using the smallest number of $20, $10, $5 and $1 bills.

#include <stdio.h>

int main(void)
{
    int amount=0, twenty_bills=0, ten_bills=0, five_bills=0;
    
    // Input: get the amount
    printf("Enter a dollor amount: ");
    scanf("%d", &amount);

    // Calculations
    twenty_bills = amount / 20;
    amount = amount % 20;
    ten_bills = amount / 10;
    amount = amount % 10;
    five_bills = amount / 5;
    amount = amount % 5; // this would also be the one_bills

    // Output: show the results
    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", twenty_bills, ten_bills, five_bills, amount);
    
    return 0;
}
