#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Display the multiplication table
    printf("Multiplication table for %d:\n", n);

    // Loops from 0 to 10
    for (int i = 0; i <= 10; i++) {
        // Prints n X i = n*i every loop
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

