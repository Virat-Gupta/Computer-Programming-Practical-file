#include <stdio.h>
#include <math.h>

int main() {
    double principal, interest, amount;
    int years = 10;
    double rate = 7.75/100.0; // Convert interest rate to decimal

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    // Calculate the amount with simple interest
    interest = principal * rate * years;
    amount = principal + interest;

    // Print the result
    printf("After %d years, the fixed deposit amount with a principal of %.2lf and an interest rate of %.2lf is: %.2lf\n", years, principal, rate*100, amount);

    return 0;
}








