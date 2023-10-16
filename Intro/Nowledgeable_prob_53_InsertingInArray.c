#include <stdio.h>
#include <stdlib.h> // Include this for malloc

void sortArray(int newArray[], int newSize);


int* insertElement(int* originalArray, int originalLength, int n) {
    int newSize = originalLength + 1;
    int* newArray = (int*)malloc(newSize * sizeof(int));

    // Copy elements from the old array
    for (int i = 0; i < originalLength; i++) {
        newArray[i] = originalArray[i];
    }

    // Insert element
    newArray[newSize - 1] = n;

    sortArray(newArray, newSize);

    return newArray;
}

void sortArray(int newArray[], int newSize) {
    int temp;
    for (int i = 0; i < newSize - 1; i++) {
        for (int j = 0; j < newSize - i - 1; j++) {
            if (newArray[j] > newArray[j + 1]) {
                temp = newArray[j];
                newArray[j] = newArray[j + 1];
                newArray[j + 1] = temp;
            }
        }
    }
}

int main() {
    int originalArray[] = {1, 3, 7, 5, 34, 9, 0};
    int originalLength = sizeof(originalArray) / sizeof(int); // Calculate the length of the array
    int n;

    printf("Enter a number to be added: ");
    scanf("%d", &n);

    int* newArray = insertElement(originalArray, originalLength, n);
    int newSize = originalLength + 1;

    // Print the results
    printf("\nHere is the array with your number added and sorted: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArray[i]);
    }

    // Free the dynamically allocated memory
    free(newArray);

    return 0;
}
