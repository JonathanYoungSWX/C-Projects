#include <stdio.h>

// Function to calculate the power of an integer
long long power(int n, int p) {
    long long result = 1;

    if (p < 0) {
        printf("Error: Negative exponent is not supported.\n");
        return 0;
    }

    for (int i = 0; i < p; i++) {
        result *= n;
    }

    return result;
}

int main() {
    int n, p;

    printf("Enter an integer (n): ");
    scanf("%d", &n);

    printf("Enter an exponent (p): ");
    scanf("%d", &p);

    // Call the function to calculate n^p
    long long result = power(n, p);

    if (result != 0) {
        printf("%d^%d = %lld\n", n, p, result);
    }

    return 0;
}
