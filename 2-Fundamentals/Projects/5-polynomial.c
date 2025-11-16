// 5-polynomial.c , by Hexenmeister, 12-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 2, Page 34)
// calculate this: 3X^5 + 2X^4 - 5X^3 -X^2 + 7X - 6

#include <stdio.h>

int main(void)
{
    int x, result;

    printf("Please Enter the value of X: ");
    scanf("%d", &x);
    
    result = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;
    printf("Here is the result: %d \n", result);

    return 0;
}
