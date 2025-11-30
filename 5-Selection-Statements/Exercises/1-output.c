// 1-output.c, by Hexenmeister, 29-Nov-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 93)
// 1-output.c: this file is a program written in C in order to see what is the results values of the expression given in the exercise no. 1

#include <stdio.h>

int main(void) {
    // declaration
    int i, j, k;

    // part a - expected output: 1
    i = 2; j = 3;
    k = i * j == 6;
    printf("This is a: %d\n", k);    
     
    // part b - expected output: 1
    i = 5; j = 10; k = 1;
    printf("This is b: %d\n", k > i < j);

    // part c - expected output: 1
    i = 3; j = 2; k = 1;
    printf("This is c: %d\n", i < j == j < k);

    // part d - expected output: 0
    i = 3; j = 4; k = 5;
    printf("This is d: %d\n", i % j + i < k);

    return 0;
}
    
