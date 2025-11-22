// base.c, by Hexenmeister, 18-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 4, Page 70)
// This program will output the result of expressions from chapter 4 the exercise no. 12
// the printf function calls have been slightly modified to print the section of the exercise in question

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Part a                           // expectations
    i = 5;
    j = ++i * 3 - 2;
    printf("a) %d, %d\n", i, j);        // 6, 16

    // Part b
    i = 5;
    j = 3 - 2 * i++;
    printf("b) %d, %d\n", i, j);        // 6, -7

    // Part c
    i = 7;
    j = 3 * i-- + 2;
    printf("c) %d, %d\n", i, j);        // 6, 23

    // Part d
    i = 7;
    j = 3 + --i * 2;
    printf("d) %d, %d\n", i, j);        // 6, 15

    return 0;
}
