#include <stdio.h>

void flatten(int flattened[], int numberArr[][5], int row, int col){
    int index=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            flattened[index++] = numberArr[i][j];
        }
        
    }
    
}

int main() {
    int row=3;
    int col=5;
    int numberArr[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    int transLength = row * col;
    int flattened[transLength];
    

    flatten(flattened, numberArr, row, col);

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

    printf("Flattened: \n");
    for (int i = 0; i < transLength; i++)
    { 
       printf("%d ", flattened[i]);  
    }
    
    
    return 0;
}