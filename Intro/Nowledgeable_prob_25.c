#include <stdio.h>

int main(){
    double r,area;
    printf("Enter the radius on a circle:");
    scanf(" %lf", &r);

    // PI * r^2
    area = 3.14 * (r * r);

    printf("The area is: %.2lf", area);
}