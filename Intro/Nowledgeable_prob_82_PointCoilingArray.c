#include <stdio.h>

int main() {
    int initialArray[5][5] = {
        {1,  2,  3,  4,  5},
        {6,  7,  8,  9,  10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int convertedArray[25]; // Initialize a 1D array to store the converted elements
    int *ptr = convertedArray; // Initialize a pointer to the converted array

    int startRow = 0, endRow = 4, startCol = 0, endCol = 4;

    while (startRow <= endRow && startCol <= endCol) {
        // Traverse from left to right along the top row
        for (int i = startCol; i <= endCol; i++) {
            *ptr++ = initialArray[startRow][i];
        }
        startRow++;

        // Traverse from top to bottom along the rightmost column
        for (int i = startRow; i <= endRow; i++) {
            *ptr++ = initialArray[i][endCol];
        }
        endCol--;

        // Traverse from right to left along the bottom row
        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                *ptr++ = initialArray[endRow][i];
            }
            endRow--;
        }

        // Traverse from bottom to top along the leftmost column
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                *ptr++ = initialArray[i][startCol];
            }
            startCol++;
        }
    }

    // Print the converted array
    for (int i = 0; i < 25; i++) {
        printf("%d ", convertedArray[i]);
    }

    return 0;
}
