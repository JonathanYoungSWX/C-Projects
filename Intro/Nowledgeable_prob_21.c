#include <stdio.h>

int main() {
    int n, p;
    // Use a long long to handle larger results
    long long result = 1; 

    // Prompt the user to enter the base (n) and exponent (p)
    printf("Enter the base (n): ");
    scanf("%d", &n);

    printf("Enter the exponent (p): ");
    scanf("%d", &p);

    // Calculate n^p using a loop
    // multiplies result by n and assignes new value to result during each loop
    for (int i = 1; i <= p; i++) {
        result *= n;
    }

    // Display the result
    printf("%d raised to the power %d is %lld\n", n, p, result);

    return 0;
}
