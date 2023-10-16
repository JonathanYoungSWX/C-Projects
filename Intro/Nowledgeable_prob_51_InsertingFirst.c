#include <stdio.h>
#include <stdlib.h>

int* insertElement(int* originalArray, int originalLength, int n){
    int newSize = originalLength + 1;
    int* newArray = (int*)malloc(newSize * sizeof(int));

    // Copy elements from old array
    for (int i = 0; i < originalLength; i++)
    {
        newArray[i+1] = originalArray[i];
    }

    // Insert element
    newArray[0] = n;

    
    return newArray;
}

int main() {
    int originalArray[] = {1,3,7,5,34,9,0};
    int originalLength = sizeof(originalArray) / sizeof(originalArray[0]); // Calculate the length of the array
    int n;

    printf("Enter a number to be added to the end of the array: ");
    scanf("%d", &n);

    printf("Original Array: ");
    for (int i = 0; i < originalLength; i++)
    {
        printf("%d ",originalArray[i]);
    }

    int* newArray = insertElement(originalArray, originalLength, n);

    printf("New array: ");
    for (int j = 0; j < originalLength + 1; j++)
    {
        printf("%d ", newArray[j]);
    }
    
    // Clear out memeory for the arrays now that we are done with them
    //free(originalArray);
    free(newArray);

    return 0;
    
}
