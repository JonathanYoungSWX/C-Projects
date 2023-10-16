#include <stdio.h>

// Function to calculate and return the value of an integer
 int findMax(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int main() {
    int num1 = 2, num2 = 5;

    //printf("Enter an integer: ");
    //scanf("%d", &num1);

    //printf("Enter a second integer: ");
    //scanf("%d", &num2);

    // Call the function to calculate min number
    int maxNum = findMax(num1,num2);

    printf("The max number is: %d", maxNum);
    

    return 0;
}
