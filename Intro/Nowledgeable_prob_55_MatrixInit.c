#include <stdio.h>

void matrixMath(int numberArr[][5], int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            numberArr[i][j] = i + j;
        }
        
    }
    
}

int main() {
    int row = 3;
    int col = 5;
    int numberArr[row][col];

    matrixMath(numberArr, row, col);

    printf("The 2D array is: \n");
    // First loop is rows
    for (int i = 0; i < row; i++)
    {
        // Second loop is cols
        for (int j = 0; j < col; j++)
        {
            printf("%d ", numberArr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}