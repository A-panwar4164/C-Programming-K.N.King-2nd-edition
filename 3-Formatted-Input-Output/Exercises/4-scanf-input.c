// base.c, by Hexenmeister, 15-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 3, Page 49)
// ch. 3 - exercise no.4

#include <stdio.h>

int main(void)
{
    int i, j;
    float x;
    printf("scanf(\"%%d%%f%%d\", &i, &x, &j)\n");
    printf("10.3 5 6\n");
    scanf("%d%f%d", &i, &x, &j);
    printf("int i = %d\nfloat x = %f\nint j = %d\n\n", i, x, j);
    return 0;
}
