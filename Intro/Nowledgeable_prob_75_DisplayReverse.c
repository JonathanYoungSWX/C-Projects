#include <stdio.h>


int main(){
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr + 4;

    printf("The elements of the array are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*ptr);
        ptr--;
    }
    
    return 0;
}