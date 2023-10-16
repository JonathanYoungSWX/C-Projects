#include <stdio.h>

int main() {
    int timeInSeconds, hours, minutes, seconds;

    printf("Enter a time value in seconds: ");
    scanf("%d", &timeInSeconds);

    // Sample input
    //timeInSeconds = 3723;

    // Divide timeInSeconds / 3600.  Remainder is lost and returned value = hours
    hours = timeInSeconds / 3600;

    // Divide timeInSeconds % 3600 and update value of timeInSeconds. Only remainder is returned. 
    // New value is minutes and seconds
    timeInSeconds %= 3600;

    // Divide timeInSeconds / 60.  Remainder is lost and returned value = minutes
    minutes = timeInSeconds / 60;

    // Divide timeInSeconds % 60. Only remainder is returned and that = seconds
    seconds = timeInSeconds % 60;

   
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}