#include <stdio.h>

// Function to display the multiplication table for a given integer
void multiplicationTable(int n, int limit) {
    for (int i = 0; i <= limit; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int n, limit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Enter the limit for the table: ");
    scanf("%d", &limit);

    // Call the function to display the multiplication table
    multiplicationTable(n, limit);

    return 0;
}
