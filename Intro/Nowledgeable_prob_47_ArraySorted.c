#include <stdio.h>
#include <stdbool.h>

// Checks evey number against the next. if any numbers are out of order it will return false. Else, true
bool sortedNum(int intArray[], int arrayLength){
    for (int i = 0; i < arrayLength; i++) {
        if(intArray[i] > intArray[i+1]){
            return false;
        } 
    }
    return true;
}

void sortArray(int intArray[], int arrayLength){
    int temp;
    for(int i = 0; i < arrayLength - 1;i++){
        for(int j = 0; j < arrayLength - i - 1; j++){
            if (intArray[j] > intArray[j+1])
            {
                temp = intArray[j];
                intArray[j] = intArray[j+1];
                intArray[j+1] = temp;
            }
            
        }
    }
}

int main() {
    int intArray[] = {1,3,7,5,34,9,0};
    int arrayLength = sizeof(intArray) / sizeof(int); // Calculate the length of the array

    // If the result of sortedNum is == true, print "in order"
    if (sortedNum(intArray, arrayLength)){
        printf("The numbers are in order");
    } else {
        
        printf("The numbers are not in order. They should be ordered: ");
        sortArray(intArray, arrayLength);
        for (int k = 0; k < arrayLength; k++)
        {
            printf("%d ",intArray[k]);
        }
        
    }
    

    return 0;
}

