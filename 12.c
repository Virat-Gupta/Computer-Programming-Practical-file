#include <stdio.h>

int main() {
    int m, i = 2, a = 1, b = 1, c;
    
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &m);
    
    printf("%d %d ", a, b); // print the first two Fibonacci numbers
    
    do {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        i++;
    } while (i < m);
    
    printf("\n");
    
    return 0;
}



