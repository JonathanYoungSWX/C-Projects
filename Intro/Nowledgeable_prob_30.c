#include <stdio.h>

// Function to calculate and return the absolute value of an integer
int absoluteValue(int num) {
    if (num < 0) {
        return -num; // If the number is negative, return its negation
    } else {
        return num; // If the number is non-negative, return it as is
    }
}

int main() {
    int num=-3;

    //printf("Enter an integer: ");
    //scanf("%d", &num);

    // Call the function to calculate the absolute value
    int absValue = absoluteValue(num);

    printf("The absolute value of %d is %d\n", num, absValue);

    return 0;
}
