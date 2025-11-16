/* Converts a Fahrenheit temprature to Celsius */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    // variable declaration
    float fahrenheit, celsius;
    
    // getting input from user (fahrenheit)
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    // calculating the celsius equivalent
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    // showing the output to the user
    printf("Celsius equivalent: %.1f\n", celsius);
    
    // return exit code
    return 0;
}
