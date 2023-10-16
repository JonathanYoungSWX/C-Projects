#include <stdio.h>

int incomeMath(int income){
        /*Write a program that calculates and displays the corresponding tax for a provided income based on the following rules:

    No tax for the first 10,000 euros of income.
    10% tax on the portion of income between 10,000 and 30,000 euros.
    30% tax on the portion of income between 30,000 and 60,000 euros.
    50% tax on the portion of income exceeding 60,000 euros.
    */
    int tax;   
    if (income <= 10000) {
        tax = 0.0;
    } else if (income <= 30000) { 
        // 10% tax on the portion between 20,000 and 30,000 
        tax = (income - 10000) * 0.10;
    } else if (income <= 60000) { 
        // 10% tax on the portion between 20,000 and 30,000 
        // 30% tax on the portion between 30,000 and 60,000
        tax = (20000 * 0.10) + ((income - 30000) * 0.30);
    } else {
        // 10% tax on the portion between 20,000 and 30,000
        // 30% tax on the portion between 30,000 and 60,000
        // 50% tax on income exceeding 60,000
        tax = (20000 * 0.10) + (30000 * 0.30) + ((income - 60000) * 0.50);
    }
    
    return tax;

    
}

int main() {
    double income,total;

    printf("Enter your income:");
    scanf("%lf", &income);

    total = incomeMath(income);

    printf("Total Tax: $%.2lf", total);


    return 0;
}