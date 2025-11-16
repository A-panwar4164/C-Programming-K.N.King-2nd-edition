// base.c, by Hexenmeister, 15-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 3, Page 50)
// this program, gets a phone number in the form (xxx) xxx-xxxx and displays it in the form xxx.xxx.xxxx

#include <stdio.h>

int main(void)
{
    // declaration
    int first, second, third;

    // input
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first, &second, &third);

    // output
    printf("You entered %.3d.%.3d.%.4d\n", first, second, third);

    return 0;
}
