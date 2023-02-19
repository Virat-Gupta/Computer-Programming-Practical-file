#include <stdio.h>
#include <math.h>
int main() {
    int n, i, num, divisor, num_digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Count the number of digits in the input number
    num = n;
    while (num != 0) {
        num /= 10;
        num_digits++;
    }
    num = n;
    //initialize divisor
    divisor = pow(10,num_digits-1);
    
    // Print each line of the output
    for (i = 0; i < num_digits; i++) {
        
        printf("%d\n",num);
        
        //Modify output for next line
        num = num - (num/divisor)*divisor; 
        //reduce divior
        divisor /=10;
    }

    return 0;
}




