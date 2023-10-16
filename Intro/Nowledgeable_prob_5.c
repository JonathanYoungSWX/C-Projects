#include <stdio.h>

int main(void) {
    float floatValue;
    printf("Enter decimal: ");
    scanf("%f", &floatValue);
    
    // Cast to int truncates the decimal part
    int leftOfDeci = (int) floatValue; 

    // Subtracts the integer val from the float to return the right of the decimal number
    float rightOfDeci = floatValue - leftOfDeci;

    printf("Integer part: %d\n", leftOfDeci);
    printf("Floating point value: %.2f\n", rightOfDeci);

    return 0;
}