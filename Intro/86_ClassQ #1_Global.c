#include <stdio.h>

int arr[] = {34, 5, 67, 4, 37, 23, 4, 8, 67, 10};
int n = sizeof(arr) / sizeof(arr[0]);

void findLargest(int arr[], int n);
void reverseOrder(int arr[], int n);
int findSum(int arr[], int n);
void swapTwo(int *a, int *b);
void removeDups(int arr[], int *n);
void sortAscending(int arr[], int n);

int main() {

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    findLargest(arr, n);

    reverseOrder(arr, n);
    printf("\nArray in reverse order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum = findSum(arr, n);
    printf("\nSum of array elements: %d\n", sum);

    swapTwo(&arr[0], &arr[1]);
    printf("\nArray after swapping first and last elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDups(arr, &n);
    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sortAscending(arr, n);
    printf("\nArray after sorting in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void findLargest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest element in array: %d\n", largest);
}

void reverseOrder(int arr[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int findSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

void swapTwo(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void removeDups(int arr[], int *n) {
    int i, j, k;
    for (i = 0; i < *n; i++) {
        for (j = i + 1; j < *n;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < *n; k++) {
                    arr[k] = arr[k + 1];
                }
                (*n)--;
            } else {
                j++;
            }
        }
    }
}

void sortAscending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
