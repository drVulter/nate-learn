/*
Alleged solution for assignment, this version takes in the
number as a double but any number format would be fine as long as you are
consistent.
*/

#include<stdio.h>

int main(void)
{
    double value; // Value to be read in and worked with

    printf("Please enter a number: ");
    scanf("%lf", &value);

    // Number games
    printf("%lf times 2 is: %lf\n", value, value * 2);
    printf("%lf + 7 = %lf\n", value, value + 7);
    printf("2(%lf)^3 + 14 - 2(%lf) = %lf\n",
	   value, value, 2*(value * value * value) + 14 - 2*(value));
    // and more if interested ...
    return 0;
}
