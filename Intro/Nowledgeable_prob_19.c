#include <stdio.h>

int main() {
    double x1, y1, x2, y2, length, width;

    // Prompt the user to enter the coordinates of points A and B
    printf("Enter the coordinates of point A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of point B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate the length and width of the rectangle
    // Length = absolute value of x1-x2
    // Width = absolute value of y1-y2
    if (x1 > x2) {
        length = x1 - x2;
    } else {
        length = x2 - x1;
    }

    if (y1 > y2) {
        width = y1 - y2;
    } else {
        width = y2 - y1;
    }

    // Display the calculated length and width
    printf("Length of the rectangle: %.2lf units\n", length);
    printf("Width of the rectangle: %.2lf units\n", width);

    return 0;
}