#include <stdio.h>

// Function to compute and return the perimeter of a rectangle
int calculateRectanglePerimeter(int length, int width) {
    // Check if the length and width are non-negative
    if (length < 0 || width < 0) {
        printf("Error: Negative dimensions are not allowed.\n");
        return -1; // Throw error
    }

    // Calculate and return the perimeter of the rectangle
    return 2 * (length + width);
}

// Program starts here
int main() {
    int length=5, width=5;
    //printf("Enter the length of the rectangle: ");
    //scanf("%d", &length);

    //printf("Enter the width of the rectangle: ");
    //scanf("%d", &width);

    // Call the function to compute the perimeter
    int perimeter = calculateRectanglePerimeter(length, width);

    // Check if the perimeter calculation was successful
    if (perimeter >= 0) {
        printf("The perimeter of the rectangle is %d\n", perimeter);
    }

    return 0;
}
