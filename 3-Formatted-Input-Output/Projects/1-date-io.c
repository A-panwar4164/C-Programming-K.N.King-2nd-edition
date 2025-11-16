// base.c, by Hexenmeister, 15-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 3, Page 50)
// ch.3 project no.1
// input: a date in the mm/dd/yyyy format, output: yyyymmdd format.

#include <stdio.h>

int main(void)
{
    int day, month, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You enterd the date %d%.2d%.2d\n", year, month, day);
    return 0;
}
