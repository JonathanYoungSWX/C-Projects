#include <stdio.h>

int main() {
    int num1, num2, num3, num4, max;

    //printf("Enter a number: ");
    //scanf("%lf", &num);
    //printf("Enter a second number: ");
    //scanf("%lf", &num2);
    //printf("Enter a third number: ");
    //scanf("%lf", &num3);
    //printf("Enter a fourth number: ");
    //scanf("%lf", &num4);

    num1 = 6;
    num2 = 7;
    num3 = -2;
    num4 = 4;

    max = num1;

    // This logic will find the largest number and assign it to max
    if (num2 > max)
    {
        max = num2;
    }  
    if (num3 > max)
    {
        max = num3;
    }
    if (num4 > max)
    {
        max = num3;
    }

    printf("The largest number is: %d\n", max);
}


// Optional code with for loop
/*
#include <stdio.h>

int main() {
    int numbers[] = {6, 7, -2, 4};
    int max = numbers[0]; // Assume the first number is the maximum

    for (int i = 1; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        if (numbers[i] > max) {
            max = numbers[i]; // Update max if a larger number is found
        }
    }

    printf("The largest number is: %d\n", max);
    return 0;
}
*/
