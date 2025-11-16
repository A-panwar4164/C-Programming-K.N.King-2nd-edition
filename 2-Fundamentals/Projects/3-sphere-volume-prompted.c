// 2-sphere-valume.c, by Hexenmeister, 12-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 2, Page 32)
// Calculate the volume of a sphere.

#include <stdio.h>
#define PI 3.14f

int main(void)
{
    int radius;
    printf("Please Enter The Radius Of The Sphere: ");
    scanf("%d", &radius);

    float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);
    printf("The volume for a sphere with radius of %d is %.2f\n", radius, volume);
    return 0;
}
