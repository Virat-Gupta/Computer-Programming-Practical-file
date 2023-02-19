#include <stdio.h>

void merge_sorted_arrays(int A[], int m, int B[], int n, int C[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }
    
    while (i < m) {
        C[k++] = A[i++];
    }
    
    while (j < n) {
        C[k++] = B[j++];
    }
}

int main() {
    int A[] = {1, 3, 5, 7, 9};
    int B[] = {2, 4, 6, 8, 10};
    int m = 5, n = 5;
    int C[m + n];
    
    merge_sorted_arrays(A, m, B, n, C);
    
    printf("Merged array C: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    
    return 0;
}





