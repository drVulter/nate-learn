/*
  Alleged solution for Problem 1.2
*/
#include<stdio.h>
#include<math.h> // sqrt()
#include<stdlib.h> // abs()
int main(void)
{
    // Define variables
    double a;
    double b;
    double c;
    double disc; // Discriminant
    
    // Get input
    printf("Please enter the first coefficient: ");
    scanf("%lf", &a);
    printf("Please enter the second coefficient: ");
    scanf("%lf", &b);
    printf("Please enter the third coefficient: ");
    scanf("%lf", &c);
    // Compute the discriminant
    disc = b*b - 4*a*c;

    if (disc < 0) {
        printf("The equation (%.2lf)x^2 + (%.4lf)x + (%.4lf) = 0 has no real solutions.\n", a, b, c);
    } else if (disc == 0) {
        double soln = -b / 2*a;
        printf("The equation (%.2lf)x^2 + (%.4lf)x + (%.4lf) = 0 has one repeated root:\n x = %lf.\n", a,b,c, soln);
    } else {
        double soln_one = (-b + sqrt(disc)) / 2*a;
        double soln_two = (-b - sqrt(disc)) / 2*a;
        printf("The equation (%.2lf)x^2 + (%.4lf)x + (%.4lf) = 0 has two real roots:\n\tx = %lf, %lf\n", a,b,c, soln_one, soln_two);
    }
    return 0;
}
