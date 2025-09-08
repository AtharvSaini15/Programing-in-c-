#include <stdio.h>
 int main()
 {
    printf("Name - Atharv Saini\nSAP ID - 590028677\ncourse - BCA\nBatch - 6");
    printf("\n----------------------\n");
    float principal, rate, time, amount;
    int n;
    // Input
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);
    // Convert rate from percentage to decimal
    rate = rate / 100;
    // Compound Interest Calculation
    amount = principal * ((1 + rate / n), n * time);
    // Output
    printf("Compound Interest = %.2lf\n", amount - principal);
    printf("Total Amount = %.2lf\n", amount);
    return 0;
 }