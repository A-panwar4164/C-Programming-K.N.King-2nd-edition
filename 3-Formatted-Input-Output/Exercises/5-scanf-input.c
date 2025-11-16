// base.c, by Hexenmeister, 15-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 3, Page 49)
// ch. 3 - exercise no.4

#include <stdio.h>

int main(void)
{
    int i;
    float x, y;
    printf("scanf(\"%%f%%d%%f\", &x, &i, &y)\n");
    printf("12.3 45.6 789\n");
    scanf("%f%d%f", &x, &i, &y);
    printf("float x = %f\nint i = %d\nfloat y = %f\n", x, i, y);
    return 0;
}
