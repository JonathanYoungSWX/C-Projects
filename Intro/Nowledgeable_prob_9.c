#include <stdio.h>

int main() {
    double number, absoluteNumber;

    printf("Enter a number: ");
    scanf("%lf", &absoluteNumber);

    // Sample input
    //number = -7;

    // If number is less than 0 it needs to be modified. If it's 0 or greater, it's in the absolute state
    if (number < 0)
    {
        // -number returns the negation of the value of number
        absoluteNumber = -number;
        printf("The absolute value is: %.2lf\n", absoluteNumber);
    }else{
        printf("The absolute value is: %.2lf\n", number);
    }  
}