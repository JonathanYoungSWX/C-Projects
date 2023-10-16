#include <stdio.h>

void removeDuplicates(int arr[], int *size) {
    if (*size <= 1) {
        // No duplicates to remove for an array of size 1 or less
        return;
    }

    int newSize = 1; // Size of the updated array, initially 1. will increment in loop

    // Check each element of the original array
    for (int i = 1; i < *size; i++) {
        int isDuplicate = 0; // Flag to check if the element is a duplicate

        // Check if the current element already exists in the updated array
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break; // Element is a duplicate, no need to continue searching
            }
        }

        // If it's not a duplicate, add it to the updated array
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++; // Increase the size of the updated array
        }
    }

    // Update the size of the array after removing duplicates
    *size = newSize;
}

int main() {
    int arr[] = {1,2,3,3,4,5,5,6,7,8,8,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    removeDuplicates(arr, &size);

    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
