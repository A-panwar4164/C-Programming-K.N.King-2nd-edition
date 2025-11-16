// Name: dweight2.c
// From: C Programming: A modern Approach, 2nd edition By K. N. King
// (Ch. 2, Page 23)
// Purpose: Computes the dimensional weight of a box from input provided by the user
// Author: Hexenmeister

#include <stdio.h>

int main(void){
    int height = 1, length = 1, width = 1, volume;

    volume = height * length * width;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", ((volume + 165) / 166));

    return 0;
}
