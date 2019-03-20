#include<stdio.h>

int main(void)
{
    int n;
    int i;
    int current;
    printf("Please enter n: ");
    scanf("%d", &n);
    printf("%d\n", n);
    int fibs[n];
    for (i = 0; i < n; i++) {
        if (i < 2) {
            current = 1;
        } else {
            current = fibs[i - 1] + fibs[i - 2];
        }
        fibs[i] = current;
    }
    printf("%dth Fibonacci number is: %d\n", n, fibs[n - 1]);
    printf("%f\n", (float)fibs[n - 1] / (float)fibs[n - 2]);
    return 0;
}
