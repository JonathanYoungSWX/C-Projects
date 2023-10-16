#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int *arr, int *size) {
    int *ptr1 = arr;
    int *ptr2 = arr + *size - 1;

    while (ptr1 < ptr2)
    {
        swap(ptr1, ptr2);
        ptr1++;
        ptr2--;
    }
    
}

int main() {
    
    int size;  

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size*sizeof(int));

    if (arr == NULL)
    {
        printf("Array memory did not allocate.");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }

    printf("The array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverse(arr, &size);

    printf("The updated array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

    free(arr);
}
