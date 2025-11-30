// 3-output.c, by Hexenmeister, 30-Nov-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 94)
// 3-output.c: this file is a program written in C in order to see what is the results values of the expression given in the exercise no. 3 

#include <stdio.h>

int main(void){
    int i, j, k;

    // part a - expectation:    1 3 4 5
    printf("This is a: ");      // purly for design
    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d", i, j, k);
    printf("\n");               // design

    // part b - expectation:    0 7 8 9
    printf("This is b: ");      // design
    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d", i, j, k);
    printf("\n");               // design
    
    // part c - expectation:    1 8 8 9
    printf("This is c: ");      // design
    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d", i , j , k);
    printf("\n");               // design

    // part d - expectation:    1 2 1 1
    printf("This is d: ");      // design
    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);
    printf("\n");               // design
}
