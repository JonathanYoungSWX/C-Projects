#include <stdio.h>

void concatenateArrays(int arr1[], int size1, int arr2[], int size2, int arr3[]) {
    // Copy elements from the first array to arr3
    for (int i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy elements from the second array to arr3
    for (int i = 0; i < size2; i++) {
        arr3[size1 + i] = arr2[i];
    }
}

int main() {
    int arr1[] = {1,3,7,5,34,9,0};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 20, 90, 5, 6, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int size3 = size1 + size2;
    int arr3[size3];

    concatenateArrays(arr1, size1, arr2, size2, arr3);

    // Print the concatenated array
    printf("Concatenated array: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
