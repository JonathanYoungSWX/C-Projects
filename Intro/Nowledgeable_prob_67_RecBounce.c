#include <stdio.h>

static void bounce(int n) {
    if (n <= 0) {
        printf("%d ", n);
        return;
    }

    printf("%d ", n);
    bounce(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    bounce(n);

    return 0;
}



