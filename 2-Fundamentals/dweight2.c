// Name: dweight2.c
// From: C Programming: A modern Approach, 2nd edition By K. N. King
// (Ch. 2, Page 23)
// Purpose: Computes the dimensional weight of a box from input provided by the user
// Author: Hexenmeister

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void){
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &weight);

    volume = height * length * weight;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
