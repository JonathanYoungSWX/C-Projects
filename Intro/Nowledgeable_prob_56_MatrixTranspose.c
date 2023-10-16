#include <stdio.h>

void matrixMath(int transpose[][3], int numberArr[][5], int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = numberArr[i][j];
        }
        
    }
    
}

int main() {
    int row=3;
    int col=5;
    int numberArr[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    int transpose[5][3];

    /*printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of cols: ");
    scanf("%d",&col);*/

    matrixMath(transpose, numberArr, row, col);

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

    printf("Transposed: \n");
    for (int i = 0; i < col; i++)
    {
        // Second loop is cols
        for (int j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}