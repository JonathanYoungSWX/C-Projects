#include <stdio.h>


int main(){
    int arr[7] = {10,20,30,40,50,60,70};
    int *ptr = arr;
    int sum = 0;

    
    for (int i = 0; i < 7; i++)
    {
        sum += *ptr;
        ptr++;
    }

    printf("The sum of the 7 numbers is: %d", sum);
    
    return 0;
}