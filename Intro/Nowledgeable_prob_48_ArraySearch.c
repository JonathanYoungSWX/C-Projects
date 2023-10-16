#include <stdio.h>

// Find the position and returns the number associated with that position
int arrayPosition(int intArray[], int arrayLength, int num){
    for (int i = 0; i < arrayLength; i++) {
        if(intArray[i] == num){
            return i;
        } 
    }
    return -1;
}

int main() {
    int intArray[] = {1,3,7,5,34,9,0};
    int arrayLength = sizeof(intArray) / sizeof(intArray[0]); // Calculate the length of the array
    int num;

    printf("Enter the number you are looking for: ");
    scanf("%d", &num);

    // Calls arrayPosition() and assigns the returned value to "position"
    int position = arrayPosition(intArray, arrayLength, num);
    
    if (position != -1){
        printf("Your number, %d, is in the %d position!", num, position);
    } else {
        printf("Your number is not in the array.\n");
    }
    

    return 0;
}

