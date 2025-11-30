// 4-output.c, by Hexenmeister, 30-Nov-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 94)
// 4-output.c: This is a representive program for the answer of the exercise no. 4
// there are several ways to achieve the goal in mind. this program contains the Book's author solution. in addition, i've included my own solution too. just in case a curious learner is looking for an alternative.

#include <stdio.h>

int main(void){
    int i = 1, j = 2;

    // K.N. King solution - provided on his website
    printf("Expression: (i > j) - (i < j)\n");
    printf("     Value: %d\n",(i > j) - (i < j));
    
    // Hexenmeister's (my) solution
    printf("Expression: (i > j ? 1 : (i == j ? 0 : -1 ))\n");
    printf("     Value: %d\n", (i > j ? 1 : (i == j ? 0 : -1 )) );

    return 0;
}
