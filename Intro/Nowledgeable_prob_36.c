#include <stdio.h>

// Function to perform an operation on two integers
int performOperation(int leftPart, char operator, int rightPart) {
    int result;

    switch (operator) {
        case '+':
            result = leftPart + rightPart;
            break;
        case '-':
            result = leftPart - rightPart;
            break;
        case '*':
            result = leftPart * rightPart;
            break;
        case '/':
            if (rightPart != 0) {
                result = leftPart / rightPart;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 0; // Return 0 to indicate an error
            }
            break;
        default:
            printf("Error: Invalid operator '%c'. Supported operators are +, -, *, and /.\n", operator);
            return 0; // Return 0 to indicate an error
    }

    return result;
}

int main() {
    int leftPart, rightPart;
    char operator;

    printf("Enter an integer: ");
    scanf("%d", &leftPart);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leading whitespace

    printf("Enter another integer: ");
    scanf("%d", &rightPart);

    // Call the function to perform the operation
    int result = performOperation(leftPart, operator, rightPart);

    // Check if the operation was successful
    if (result != 0) {
        printf("Result: %d\n", result);
    }

    return 0;
}
