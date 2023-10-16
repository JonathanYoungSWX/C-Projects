#include <stdio.h>

int power(int n, int p) {
    if (p > 1)
    {
        return n * power(n,p-1);
    }
}

int main() {
    int n,p;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Enter a positive power: ");
    scanf("%d", &p);

    int result = power(n,p);
    printf("The sum %d to the power of %d is %d\n", n, p, result);

    return 0;
}



