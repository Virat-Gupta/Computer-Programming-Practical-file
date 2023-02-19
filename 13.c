#include <stdio.h>
#include <math.h>

double sine(double x) {
    double term = x;
    double sum = term;
    int i = 1;
    while (fabs(term/sum) > 1e-6) {
        term = -term * x * x / (2*i) / (2*i+1);
        sum += term;
        i++;
    }
    return sum;
}

int main() {
    double x, result;
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    result = sine(x);
    printf("sin(%.2f) = %.6f\n", x, result);
    return 0;
}





