#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 5, 50, 60};
    int *ptr = arr;
    int *min = arr;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (*ptr < *min) {
            *min = *ptr;
        }
        ptr++; // Move the pointer to the next element
    }

    printf("The minimum number is: %d\n", *min);

    return 0;
}
