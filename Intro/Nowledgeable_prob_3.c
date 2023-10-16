#include <stdio.h>

int main(){
    double radius, area;
    
    //get radius from user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    //radius = 5;
    
    //calulate the area of the circle
    area = 3.14 * radius * radius;
    
    //display the result
    printf("the area of the circle with radius %.2lf is %.2lf\n", radius, area);
}
