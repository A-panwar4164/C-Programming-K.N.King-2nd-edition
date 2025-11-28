// date.c, by Hexenmeister, 28-Nov-2025 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 89)
// date.c: Takes date input in the mm/dd/yy format and prints it out in the Legal Form (Dated this Nth day of Month, Year.) 
    
#include <stdio.h>

int main(void){
    // declaration
    int day, month, year;

    // input
    printf("Enter date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    // printf in the Legal Form
    printf("Dated this ");

    // printf the "Nth" part
    switch (day) {
        case 1: case 21: case 31:
            printf("%dst", day); break;
        case 2: case 22:
            printf("%dnd", day); break;
        case 3: case 23:
            printf("%drd", day); break;
        default:
            printf("%dth", day); break;
    }

    // printf the " day of " part
    printf(" day of ");

    // printf the "Month" part
    switch (month) {
        case 1:  printf("January");     break;
        case 2:  printf("February");    break;
        case 3:  printf("March");       break;
        case 4:  printf("April");       break;
        case 5:  printf("May");         break;
        case 6:  printf("June");        break;
        case 7:  printf("July");        break;
        case 8:  printf("August");      break;
        case 9:  printf("September");   break;
        case 10: printf("October");     break;
        case 11: printf("November");    break;
        case 12: printf("December");    break;

    }

    // printf the " Year." part
    printf(" 20%.2d.\n", year);

    return 0;
}
