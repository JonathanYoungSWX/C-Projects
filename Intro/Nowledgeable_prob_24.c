#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        // 1 is not prime
        return false; 
    }
    //  If "i" becomes greater than the square root of num, there is no need to continue checking
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            // Found a divisor other than 1 and itself
            return false; 
        }
    }
    // No divisors other than 1 and itself, so it's prime
    return true; 
}

// Program starts down here
int main() {
    int num;
    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is prime and display the result
    // Calls function isPrime with num 
    // If isPrime(num) == true
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    // If isPrime == false
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
