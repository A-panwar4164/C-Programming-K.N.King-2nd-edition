// 2-output.c, by Hexenmeister, 30-Nov-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 94)
// 2-output.c: this file is a program written in C in order to see what is the results values of the expression given in the exercise no. 2 

#include <stdio.h>

int main(void){
    int i, j, k;

    // part a - expectation: 1 
    i = 10; j = 5;
    printf("This is a: %d\n", !i < j);

    // part b - expectation: 1 
    i = 2; j = 1;
    printf("This is b: %d\n", !!i + !j);

    // part c - expectation: 1
    i = 5; j = 0; k= -5;
    printf("This is c: %d\n", i && j || k); 

    // part d - expectation: 1
    i = 1; j = 2; k = 3;
    printf("This is d: %d\n", i < j || k);

}
