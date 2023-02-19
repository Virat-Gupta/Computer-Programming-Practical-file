#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(ptr = arr; ptr < arr + n; ptr++) {
        scanf("%d", ptr);
    }

    printf("The elements of the array in reverse order are: ");
    for(ptr = arr + n - 1; ptr >= arr; ptr--) {
        printf("%d ", *ptr);
    }
    printf("\n");

    return 0;
}




