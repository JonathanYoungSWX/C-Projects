#include <stdio.h>

// Function to calculate and return the value of an integer
 int findMin(int num1, int num2) {
    return num1 > num2 ? num2 : num1;
}

int main() {
    int num1 = 2, num2 = 1;

    //printf("Enter an integer: ");
    //scanf("%d", &num1);

    //printf("Enter a second integer: ");
    //scanf("%d", &num2);

    // Call the function to calculate min number
    int minNum = findMin(num1,num2);

    printf("The smaller number is: %d", minNum);
    

    return 0;
}
