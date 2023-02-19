#include <stdio.h>

// Function to perform bitwise AND
int bitwise_and(int a, int b) {
    return a & b;
}

// Function to perform bitwise OR
int bitwise_or(int a, int b) {
    return a | b;
}

// Function to perform bitwise XOR
int bitwise_xor(int a, int b) {
    return a ^ b;
}

// Function to perform bitwise NOT
int bitwise_not(int a) {
    return ~a;
}

int main() {
    int a = 5; // Binary representation: 0101
    int b = 3; // Binary representation: 0011

    // Bitwise AND
    printf("Bitwise AND of %d and %d: %d\n", a, b, bitwise_and(a, b)); // Output: 1

    // Bitwise OR
    printf("Bitwise OR of %d and %d: %d\n", a, b, bitwise_or(a, b)); // Output: 7

    // Bitwise XOR
    printf("Bitwise XOR of %d and %d: %d\n", a, b, bitwise_xor(a, b)); // Output: 6

    // Bitwise NOT
    printf("Bitwise NOT of %d: %d\n", a, bitwise_not(a)); // Output: -6 (in two's complement representation)

    return 0;
}


