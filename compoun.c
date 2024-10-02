#include <stdio.h>
#include <math.h>

int main() {
    double P, r, A;
    int n, t;

    // User inputs
    printf("Enter the principal amount (P): ");
    scanf("%lf", &P);
    printf("Enter the annual interest rate (r in percentage): ");
    scanf("%lf", &r);
    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%d", &n);
    printf("Enter the number of years the money is invested or borrowed (t): ");
    scanf("%d", &t);

    // Convert the annual interest rate from percentage to decimal
    r = r / 100;

    // Calculate compound interest
    A = P * pow((1 + r/n), n*t);

    printf("The amount after %.2f years is: %.2f\n", (double)t, A);
    printf("The compound interest earned is: %.2f\n", A - P);

    return 0;
}