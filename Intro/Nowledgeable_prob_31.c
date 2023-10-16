#include <stdio.h>
#include <stdbool.h>

// Function to calculate and return the value of an integer
bool evenOdd(int num) {
    if (num < 0) {
       num = -num; // If the number is negative, return its negation
    } 
    if (num % 2 == 0) {
        return true; // Even
    } else {
        return false; // Odd
    }
}

int main() {
    int num=-3;

    //printf("Enter an integer: ");
    //scanf("%d", &num);

    // Call the function to calculate if even or odd
    bool isEven = evenOdd(num);

    if(isEven){
        printf("The number you entered is EVEN.");
    } else {
        printf("The number you entered is ODD.");
    }
    

    return 0;
}
