// base.c, by Hexenmeister, 15-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 3, Page 50-51)
// takes in numbers from 1 to 16 in any order then print the sum of the rows, columns, diagonals.

/*
   this magic square shown here appears in a 1514 engraving by artist and mathematician Albert Dürer. (Note that the middle numbers in the last row give the date of the engraving.)
    16  3   2   13
    5   10  11  8
    9   6   7   12
    4   15  14  1
*/

#include <stdio.h>

int main(void)
{
    // declaration
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
    int r_sum1, r_sum2, r_sum3, r_sum4;
    int c_sum1, c_sum2, c_sum3, c_sum4;
    int d_sum1, d_sum2;

    // input
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16);
    
    // calculation
    /*
       a1 a2 a3 a4      > r_sum1
       a5 a6 a7 a8      > r_sum2
       a9 a10 a11 a12   > r_sum3
       a13 a14 a15 a16  > r_sum4
        v   v   v   v
  c_sum 1   2   3   4

        d_sum1 = a1 + a6 + a11 + a16
        d_sum2 = a4 + a7 + a10 + a13 
    */
    r_sum1 = a1 + a2 + a3 + a4;
    r_sum2 = a5 + a6 + a7 + a8;
    r_sum3 = a9 + a10 + a11 + a12;
    r_sum4 = a13 + a14 + a15 + a16;

    c_sum1 = a1 + a5 + a9 + a13;
    c_sum2 = a2 + a6 + a10 + a14;
    c_sum3 = a3 + a7 + a11 + a15;
    c_sum4 = a4 + a8 + a12 + a16;

    d_sum1 = a1 + a6 + a11 + a16;
    d_sum2 = a4 + a7 + a10 + a13;

    // output
    printf("\n\t%.2d %.2d %.2d %.2d\n\t%.2d %.2d %.2d %.2d\n\t%.2d %.2d %.2d %.2d\n\t%.2d %.2d %.2d %.2d\n", a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16); // shows the square
    printf("\nRow sums:\t%.2d %.2d %.2d %.2d\n", r_sum1, r_sum2, r_sum3, r_sum4);
    printf("Column sums:\t%.2d %.2d %.2d %.2d\n", c_sum1, c_sum2, c_sum3, c_sum4);
    printf("Diagonal sums:\t%.2d %.2d\n", d_sum1, d_sum2);

}
