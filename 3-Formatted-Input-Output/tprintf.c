// base.c, by Hexenmeister, 14-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 3, Page 40)
// tprintf: illustrates the use of printff to print integers and floating point numbers in various formats.

#include <stdio.h>

int main(void)
{
    int i = 40;
    float x = 839.21f;
    
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}
