// 4-tax.c, by Hexenmeister, 12-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 2, Page 34)
// This Program takes the amount (in dollars and cents (e.i. 20.12$) and prints the added tax amount (5%)).

#include <stdio.h>
#define RATE 0.05f

int main(void)
{
    float amount, after_tax;

    printf("Enter an amount: $ ");
    scanf("%f", &amount);

    after_tax = amount * (1 + RATE);
    printf("with tax added: $%.2f\n", after_tax);

    return 0;
}
