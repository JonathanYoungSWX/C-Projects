#include <stdio.h>

int main() {
    int intArray[] = {1,3,7,5,34,9,0};
    int arrayLength = sizeof(intArray) / sizeof(int); // Calculate the length of the array
    int min = intArray[1];
    
    for (int i = 0; i < arrayLength; i++) {
        if(intArray[i] < min){
            min = intArray[i];
        }
    }

    printf("The minimum number is: %d", min);

    return 0;
}

