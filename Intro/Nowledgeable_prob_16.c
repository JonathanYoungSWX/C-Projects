#include <stdio.h>

int main() {
    float deduct, damage;

    printf("Etner the total cost of damage:");
    scanf("%f", &damage);

    deduct = damage * .10;

    // Returns 10% of damage total
    if (deduct <= 500 && deduct >= 10)
    {
        printf("Deductable is: $%.2f", deduct);

    // If total deduct is greater than 500 it returns 500
    } else if (deduct > 500)
    {
        printf("Deductable is: $500");
    
    // Anything that isn't between 10 and 500 or greater than 500 will return 10
    } else {
        printf("Deductable is: $10");
    }
    

    return 0;
}