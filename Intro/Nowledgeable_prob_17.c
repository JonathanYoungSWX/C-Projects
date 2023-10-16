#include <stdio.h>

int main() {
    double r1, r2, ringArea;

    printf("Enter the radius of the larger circle (r1): ");
    scanf("%lf", &r1);

    printf("Enter the radius of the smaller circle (r2): ");
    scanf("%lf", &r2);

    // Calculate the area of the ring if r1 is smaller than r2
    if (r1 >= r2) {
        ringArea = 3.14 * (r1 * r1 - r2 * r2);
    
    // Throws error if r1 isn't smaller than r2
    } else {
        printf("Error: r1 must be greater than r2.\n");
        return 1;
    }

    // Display the area of the ring
    printf("Area of the ring: %.2lf square units\n", ringArea);

    return 0;
}