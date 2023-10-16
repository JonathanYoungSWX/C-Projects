#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the entered number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial using a for loop
        // multiplies factorial by n and assignes new value to factorial during each loop
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Display the factorial
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}
