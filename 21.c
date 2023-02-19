#include <stdio.h>

int compareArrays(int *arr1, int *arr2, int len) {
    // Compare each element of the two arrays using pointer arithmetic
    for (int i = 0; i < len; i++) {
        if (*(arr1 + i) != *(arr2 + i)) {
            // If any element is not identical, return 0
            return 0;
        }
    }

    // If all elements are identical, return 1
    return 1;
}

int main() {
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {1,2,3,4,5};

	int result = compareArrays(arr1,arr2,5);

	if (result == 1) printf("They are Same.");
	else printf("They are different.");
	printf("\n");
}




