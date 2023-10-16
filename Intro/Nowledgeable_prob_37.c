#include <stdio.h>

// Function to calculate the insurance deductible
double calculateDeductible(double damageAmount) {
    // Define the minimum and maximum deductible amounts
    double minDeductible = 10.0;
    double maxDeductible = 500.0;

    // Calculate the deductible as 10% of the damage amount
    double deductible = damageAmount * 0.10;

    // Ensure the deductible is within the allowed range
    if (deductible < minDeductible) {
        return minDeductible;
    } else if (deductible > maxDeductible) {
        return maxDeductible;
    } else {
        return deductible;
    }
}

int main() {
    double damageAmount;

    printf("Enter the amount of damage: ");
    scanf("%lf", &damageAmount);

    // Call the function to calculate the deductible
    double deductible = calculateDeductible(damageAmount);

    printf("Insurance Deductible: %.2lf euros\n", deductible);

    return 0;
}
