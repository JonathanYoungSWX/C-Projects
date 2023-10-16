#include <stdio.h>

int main(void){
    int perimeter,length,width;
    printf("Enter the length:");
    scanf("%i",&length);
    printf("Enter the width:");
    scanf("%i",&width);
    
    // Calculates the perimeter of the rectangle 
    perimeter = 2*(length + width);
    printf("The perimeter is %i\n",perimeter);

    
}