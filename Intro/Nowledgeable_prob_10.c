#include <stdio.h>

int main() {
    int number;

    //printf("Enter a number: ");
    //scanf("%lf", &number);

    number = 6;

    // Uses MOD division to detect even or odd. Any odd will return 1. Even will return
    if (number % 2 == 1)
    {
        printf("The number is odd");
    }else{
        printf("The number is even");
    }  
}