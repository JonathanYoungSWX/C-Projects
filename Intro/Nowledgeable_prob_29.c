#include <stdio.h>

// Function to print hours, minutes, and seconds from a provided time in seconds
void printTimeFromSeconds(int totalSeconds) {
    if (totalSeconds < 0) {
        printf("Error: Negative time value is not allowed.\n");
        return;
    }

    int hours, minutes, seconds;

    // Calculate hours, minutes, and seconds
    hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);
}

int main() {
    int totalSeconds=3723;
    //printf("Enter time in seconds: ");
    //scanf("%d", &totalSeconds);

    // Call the function to print hours, minutes, and seconds
    printTimeFromSeconds(totalSeconds);

    return 0;
}
