#include <stdio.h>

int sumOfNumbers(int n) {
    if (n == 1)
    {
        return 1;
    } else {
        return n + sumOfNumbers(n-1);
    }
    
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int result = sumOfNumbers(n);
    printf("The sum of numbers from 1 to %d is %d\n", n, result);

    return 0;
}



