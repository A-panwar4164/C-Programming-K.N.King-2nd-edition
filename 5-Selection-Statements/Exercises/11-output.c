// 11-output.c, by Hexenmeister, 30-Nov-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 95)
// 11-output.c: this file is a program written in C in order to see what is the results values of the expression given in the exercise no. 1

#include <stdio.h>

int main(void){
    int area_code;

    printf("Please Enter Area Code: ");
    scanf("%d", &area_code);
    
    switch (area_code){
        case 229: printf("Albany\n"); break;
        case 404: printf("Atlanta\n"); break;
        case 470: printf("Atlanta\n"); break;
        case 478: printf("Macon\n"); break;
        case 678: printf("Atlanta\n"); break;
        case 706: printf("Columbus\n"); break;
        case 762: printf("Columbus\n"); break;
        case 770: printf("Atlanta\n"); break;
        case 912: printf("Savannah\n"); break;
        default:  printf("Area code not recognized.\n");
    }

    return 0;
}
