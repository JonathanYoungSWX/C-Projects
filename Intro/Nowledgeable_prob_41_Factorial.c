#include <stdio.h>

// Function to calculate the factorial of an integer
unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 0;
    }

    unsigned long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Call the function to calculate the factorial
    unsigned long long result = factorial(n);

    if (result != 0) {
        printf("%d! = %llu\n", n, result);
    }

    return 0;
}
