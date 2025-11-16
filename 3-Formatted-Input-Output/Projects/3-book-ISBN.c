// base.c, by Hexenmeister, 15-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 3, Page 50)
// based on ch. 3 - proj. 3
// book-ISBN: a very basic ISBN parser

#include <stdio.h>

int main(void)
{
    //  declaration
    int gs1, group_identifier, publisher_code, item_number, check_digit;
    
    //  input
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_identifier, &publisher_code, &item_number, &check_digit);

    //  output
    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gs1, group_identifier, publisher_code, item_number, check_digit);
    return 0;
}
