#include <stdio.h>
#include <stdlib.h>

void removeDuplicates(int arr[], int *size) {
    int i, j, k;
    for (i = 0; i < *size; i++) {
        for (j = i + 1; j < *size;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < *size; k++) {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
            } else {
                j++;
            }
        }
    }
}

void sortAscending(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void insertBeginning(int arr[], int *size, int value) {
    int i;
    (*size)++;
    for (i = *size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
}

void insertEnd(int arr[], int *size, int value) {
    (*size)++;
    arr[*size - 1] = value;
}

void insertAtPosition(int arr[], int *size, int value, int position) {
    int i;
    (*size)++;
    for (i = *size - 1; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
}

void deleteAtBeginning(int arr[], int *size) {
    int i;
    for (i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void deleteAtEnd(int arr[], int *size) {
    (*size)--;
}

void deleteAtPosition(int arr[], int *size, int position) {
    int i;
    for (i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int findLargest(int arr[], int size) {
    int i, largest = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

void reverseOrder(int arr[], int size) {
    int i, temp;
    for (i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int findSum(int arr[], int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void swapTwo(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int *arr, size = 10, i;
    arr = (int *) malloc(size * sizeof(int));
    arr[0] = 34;
    arr[1] = 5;
    arr[2] = 67;
    arr[3] = 4;
    arr[4] = 37;
    arr[5] = 23;
    arr[6] = 4;
    arr[7] = 8;
    arr[8] = 67;
    arr[9] = 10;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Largest element in the array: %d\n", findLargest(arr, size));

    reverseOrder(arr, size);
    printf("Array after reversing the order: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Sum of all elements in the array: %d\n", findSum(arr, size));

    swapTwo(&arr[0], &arr[1]);
    printf("Array after swapping elements at positions 0 and 1: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDuplicates(arr, &size);
    printf("Array after removing duplicates: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sortAscending(arr, size);
    printf("Array after sorting in ascending order: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertBeginning(arr, &size, 100);
    printf("Array after inserting 100 at the beginning: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertEnd(arr, &size, 200);
    printf("Array after inserting 200 at the end: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertAtPosition(arr, &size, 100, 3);
    printf("Array after inserting 100 at position 3: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteAtBeginning(arr, &size);
    printf("Array after deleting the first element: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteAtEnd(arr, &size);
    printf("Array after deleting the last element: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteAtPosition(arr, &size, 2);
    printf("Array after deleting element at position 2: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    free(arr);
    return 0;
}