#include <stdio.h>

void descending(int);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    descending(num);
    return 0;
}

void descending(int num){
    for (num; num > 0; num--)
    {
        printf("%d",num);
    }
    
}

