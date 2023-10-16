#include <studio.h>
#include <math.h>

int main(void){
    float floatValue;
    printf("Enter decimal:");
    scanf("%f", &floatValue);
    int leftOfDeci = (int)floor(floatValue);
    
    printf("Integer part: %d\n", leftOfDeci);
    printf("Floating point value: %.5f\n", floatValue);
    
}