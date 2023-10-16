#include <stdio.h>

void swap(int *a, int *b);

int main(){
    int num1=5;
    int num2=10;

    printf("Before the swap: 1 is %d and 2 is %d.", num1, num2);

    swap(&num1, &num2);

    printf("\nAfter the swap: 1 is %d and 2 is %d.", num1, num2);

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}