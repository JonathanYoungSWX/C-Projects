#include <stdio.h>

int main() {
    int leftPart, rightPart;
    char oper;
    double result;

    printf("Enter the left integer: ");
    scanf(" %d", &leftPart);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &oper); 

    printf("Enter the right integer: ");
    scanf(" %d", &rightPart);

    // Switches the input for oper to a math function
    // Each case computes the result depending on the input of oper 
    switch (oper)
    {
    case '+':
        result = (double)leftPart + rightPart;
        break;
    case '-':
        result = (double)leftPart - rightPart;
        break;
    case '*':
        result = (double)leftPart * rightPart;
        break;
    case '/':
        // Catches zero division
        if (rightPart != 0){
            result = (double)leftPart / rightPart;
        } else {
            printf("Error: Division by zero!");
            return 1;
        }
        break;
    default:
        printf("Error: Invalid operator '%c'", oper);
        break;
    }

    printf("Result: %.2lf", result);

    return 0;
}