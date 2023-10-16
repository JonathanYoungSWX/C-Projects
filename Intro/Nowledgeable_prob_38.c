#include <stdio.h>

// Function to calculate the insurance deductible
double areaInCircle(double r1, double r2) {
    if(r1 < r2){
        return 3.14 * (r2 * r2 - r1 * r1);
    }else{
        printf("Enter a smaller first number and a larger second number.");
    }
    
}

int main() {
    double r1,r2;

    printf("Enter the smaller ring radius: ");
    scanf("%lf", &r1);

    printf("Enter the larger ring radius: ");
    scanf("%lf", &r2);

    // Call the function to calculate the deductible
    double area = areaInCircle(r1,r2);

    printf("The area in the circles is: %lf\n", area);

    return 0;
}
