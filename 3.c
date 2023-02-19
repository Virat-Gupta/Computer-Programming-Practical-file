#include <stdio.h>

int main() {
    int num = 10;
    int right_shifted_num, left_shifted_num;
    
    // right shift by 1 effectively divides the number by 2
    right_shifted_num = num >> 1;
    
    // left shift by 1 effectively multiplies the number by 2
    left_shifted_num = num << 1;
    
    printf("The original number is: %d\n", num);
    printf("Right shifted number is: %d\n", right_shifted_num);
    printf("Left shifted number is: %d\n", left_shifted_num);
    
    return 0;
}





