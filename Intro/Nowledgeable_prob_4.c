#include <stdio.h>

int main() {
    int i, n = 5;
    double sum = 0.0;
    
    printf("Enter five numerical values:\n");

    // From 0 to 5 it will ask the user for the input and add it to sum
    for (i = 0; i < n; i++) {
        double num;
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &num);
        sum += num;
    }

    // Then it will initiate the mean as a double and divide the sum by 5
    double mean = sum / n;

    printf("The mean value of the five numbers is: %.2lf\n", mean);

    return 0;
}