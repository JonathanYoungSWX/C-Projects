#include <stdio.h>

int fibonacci(int n) {
    
    if (n == 0)
    {
        return 0;
    } else if (n == 1)
    {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("The %dth fibonacci number is: %d\n", n, result);

    return 0;
}



