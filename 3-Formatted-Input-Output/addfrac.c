// base.c, by Hexenmeister, 14-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 3, Page 46)
// addfrac: add two fractions

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    // Input
    printf("Enter first fraction (i.e. x/y): ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction (i.e. x/y): ");
    scanf("%d/%d", &num2, &denom2);
    
    // Calculation
    result_num = (num1 * denom2) + (num2 * denom1);
    result_denom = denom1 * denom2;

    // Output
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
