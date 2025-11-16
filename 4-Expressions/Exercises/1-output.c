// base.c, by Hexenmeister, 16-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 4, Page 68)
// ch. 4 - exercise no. 1

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Part a
    i = 5; j = 3;
    printf("a -> %d %d\n", i / j, i % j);       // expectation: 1, 2

    // Part b
    i = 2; j = 3;
    printf("b -> %d\n", (i + 10) % j );         // expectation: 0

    // Part c
    i = 7; j =8; k = 9;
    printf("c -> %d\n", (i + 10) % k / j);      // expectation: 1

    // Part d
    i = 1; j = 2; k = 3;
    printf("d -> %d\n", (i + 5) % (j + 2) / k);  // expectation: 0

    return 0;
}
