/*#include <stdio.h>

int main() {
    double x, y, x1, y1, x2, y2;

    // Prompt the user to enter the coordinates of points A and B
    printf("Enter the coordinates of point A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of point B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Prompt the user to enter the coordinates of point P
    printf("Enter the coordinates of point P (x y): ");
    scanf("%lf %lf", &x, &y);

    // Check if point P is inside the rectangle
    // If x greater than or equal to x1 AND x less than or equal to x2
    // AND y greater than or equal to y1 AND y less than or equal to y2
    // OR If x less than or equal to x1 AND x greater than or equal to x2
    // AND y less than or equal to y1 AND y greater than or equal to y2
    if ((x >= x1 && x <= x2) && (y >= y1 && y <= y2) || (x <= x1 && x >= x2) && (y <= y1 && y >= y2)) {
        printf("Point P is inside the rectangle.\n");
    } else {
        printf("Point P is outside the rectangle.\n");
    }

    return 0;
}*/

#include <stdio.h>
#include <math.h>
int main() {
    double x, y, x1, y1, x2, y2;

    // Prompt the user to enter the coordinates of points A and B
    printf("Enter the coordinates of point A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of point B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Prompt the user to enter the coordinates of point P
    printf("Enter the coordinates of point P (x y): ");
    scanf("%lf %lf", &x, &y);
    

    // Check if point P is inside the rectangle
    // If x is greater than or equal to the minimum x-coordinate (x1 or x2)
    // and less than or equal to the maximum x-coordinate (x1 or x2)
    // and y is greater than or equal to the minimum y-coordinate (y1 or y2)
    // and less than or equal to the maximum y-coordinate (y1 or y2)
    if ((x >= fmin(x1, x2) && x <= fmax(x1, x2)) &&
        (y >= fmin(y1, y2) && y <= fmax(y1, y2))) {
        printf("Point P is inside the rectangle.\n");
    } else {
        printf("Point P is outside the rectangle.\n");
    }

    return 0;
}

