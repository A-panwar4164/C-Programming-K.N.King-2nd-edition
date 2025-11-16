// base.c, by Hexenmeister, 15-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 3, Page 49)
// ch. 2 - exercise no.2 

#include <stdio.h>

int main(void)
{
    float number1 = 2.50f;

    printf("a -> %-8.1e\n", number1);
    printf("b -> %10.6e\n", number1);
    printf("c -> %-8.3f\n", number1);
    printf("d -> %6.0f\n", number1);

    return 0;
}
