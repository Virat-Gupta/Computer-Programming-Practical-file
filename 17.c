#include <stdio.h>

// function to get input for a 3x3 matrix
void get_matrix(int matrix[3][3]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// function to print a 3x3 matrix
void print_matrix(int matrix[3][3]) {
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// function to add two matrices
void add_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// function to multiply two matrices
void multiply_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    int sum;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum = 0;
            for (int k = 0; k < 3; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            result[i][j] = sum;
        }
    }
}

// function to get transpose of a matrix
void transpose_matrix(int matrix[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix[j][i];
        }
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];
    
    // get input for two matrices
    printf("Enter the first matrix:\n");
    get_matrix(matrix1);
    
    printf("Enter the second matrix:\n");
    get_matrix(matrix2);
    
    // print the matrices
    printf("Matrix 1:\n");
    print_matrix(matrix1);
    
    printf("Matrix 2:\n");
    print_matrix(matrix2);
    
    // add the matrices
    add_matrices(matrix1, matrix2, result);
    printf("Sum of the matrices:\n");
    print_matrix(result);
    
    // multiply the matrices
    multiply_matrices(matrix1, matrix2, result);
    printf("Product of the matrices:\n");
    print_matrix(result);
    
    // get transpose of the matrices
    transpose_matrix(matrix1, result);
    printf("Transpose of Matrix 1:\n");
    print_matrix(result);
    
    transpose_matrix(matrix2, result);
    printf("Transpose of Matrix 2:\n");
    print_matrix(result);
    
    return 0;
}
