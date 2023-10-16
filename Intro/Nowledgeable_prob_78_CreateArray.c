#include <stdio.h>
#include <stdlib.h>

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
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    

    return 0;
}
