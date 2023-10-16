#include <stdio.h>

void replaceWithAbsolute(int *a);

int main(){
    int num1=-5;

    printf("Before the number is %d.", num1);

    replaceWithAbsolute(&num1);

    printf("\nAfter the number is %d.", num1);

    return 0;
}

void replaceWithAbsolute(int *a) {
    *a = (*a < 0) ? -*a : *a;
}