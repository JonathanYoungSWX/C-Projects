#include <stdio.h>

int areaMath(double r){
    return 3.14 * (r * r);
}

int main(){
    double r,area;
    printf("Enter the radius on a circle:");
    scanf(" %lf", &r);
    area = areaMath(r);
    printf("The area is: %.2lf", area);
}