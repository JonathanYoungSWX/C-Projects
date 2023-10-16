#include <stdio.h>

int main() {
    int stdAvg;

    printf("Enter the student's score: ");
    scanf("%d", &stdAvg);
    

    // Finds the user score based on the input
    if (stdAvg < 10){
        printf("Failed.");
    } else if (stdAvg >= 12 && stdAvg < 14){
        printf("Fairly Good.");
    } else if (stdAvg >= 14 && stdAvg < 16){
        printf("Good.");
    } else if (stdAvg >= 16 && stdAvg < 20){
        printf("Very Good.");
    }else{
        printf("-");
    }

    return 0;
}