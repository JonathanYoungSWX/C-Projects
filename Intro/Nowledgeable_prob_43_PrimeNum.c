#include <stdio.h>
#include <stdbool.h>

// Function to check if an integer is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false; // 1 and non-positive numbers are not prime
    }
    
    if (n == 2) {
        return true; // 2 is prime
    }
    
    if (n % 2 == 0) {
        return false; // Even numbers greater than 2 are not prime
    }

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false; // Found a divisor other than 1 and itself
        }
    }

    return true; // No divisors other than 1 and itself were found
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Call the function to check if the integer is prime
    bool prime = isPrime(n);

    if (prime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
