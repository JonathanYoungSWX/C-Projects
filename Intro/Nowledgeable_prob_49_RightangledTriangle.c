#include <stdio.h>

int main() {
    int triangle;
    printf("Enter a number: ");
    scanf("%d", &triangle);

    // Starting at 0 and going to triangle...
    // Fist loop: i = 0, j = 0. skip j loop. Print new line from i loop.
    // Second loop i = 1, j = 0. loop j once: print "*". Print new line from i loop.
    // Third loop i = 2, j = 0. loop j twice: print "*" X 2. Print new line from i loop.
    // Repeat until i is greater than triangle

    for(int i=0; i<=triangle; i++){
        for(int j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
