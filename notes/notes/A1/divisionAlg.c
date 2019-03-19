#include<stdio.h>

int main(void)
{
    int n, m; // The two numbers to be inputted
    printf("Please enter a number: ");
    scanf("%d", &n); // get the first number
    printf("Please enter another number: ");
    scanf("%d", &m); // get the second number
    // Calculate q
    int q = n / m;
    // Calculate r
    int r = n % m;
    // Do the final printing
    printf("%d = %d * %d + %d\n", n, q, m, r);

    /*
      Could also have done all calculations and printing in one line, like so
      printf("%d = %d * %d + %d", n, n / m, m, n % m);
     */
    return 0;
}
