// base.c, by Hexenmeister, 15-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 3, Page 50)
// product-info: based on ch. 3 - proj. 2

#include <stdio.h>

int main(void)
{
    //  declaration
    int item, day, month, year;
    float price;

    //  input
    //      item number
    printf("Enter item number: ");
    scanf("%d", &item);
    //      unit price
    printf("Enter unit price: ");
    scanf("%f", &price);
    //      date
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    //  output
    printf("Item\t\tUnit\t\tPurchase\n \t\tPrice\t\tDate\n"); // header part
    printf("%d\t\t$%7.2f\t%d/%d/%d\n", item, price, month, day, year);

    return 0;
}
