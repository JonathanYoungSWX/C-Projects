#include <stdio.h>
#include <stdlib.h>

void insertAtEnd(int *arr, int *size, int newValue) {
    arr[*size] = newValue;  // Insert the new value at the current size index
    (*size)++;             // Increment the size of the array
}

int main() {
    int size = 6;
    int *arr = (int *)malloc(size * sizeof(int)); // Allocate memory for the array
    int append;
    
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10; // Initialize with values (e.g., 10, 20, 30, ...)
    }
    

    printf("The array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter a number to append to the end: ");
    scanf("%d", &append);

    insertAtEnd(arr, &size, append);

    printf("The updated array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
