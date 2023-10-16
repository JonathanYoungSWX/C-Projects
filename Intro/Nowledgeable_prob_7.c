#include <stdio.h>

int main(void){
    int hours,minutes,seconds,totalSeconds;
    printf("Enter the hours:");
    scanf("%i",&hours);
    printf("Enter the minutes:");
    scanf("%i",&minutes);
    printf("Enter the seconds");
    scanf("%i",&seconds);
    
    //hours = 1, minutes = 2, seconds = 3;

    // Calulates the seconds. 
    // Hours * 3600 
    // Minutes * 60 
    // Add seconds
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    printf("The time in seconds is: %d\n",totalSeconds);  
}