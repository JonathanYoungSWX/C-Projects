#include <stdio.h>

// Function to compute the total time in seconds
int calculateTotalSeconds(int hours, int minutes, int seconds) {
    if (hours < 0 || minutes < 0 || seconds < 0) {
        printf("Error: Negative time values are not allowed.\n");
        return -1; // Return a sentinel value to indicate an error
    }

    // Calculate the total time in seconds
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    return totalSeconds;
}

int main() {
    int hours=1, minutes=2, seconds=3;
    //printf("Enter hours: ");
    //scanf("%d", &hours);

    //printf("Enter minutes: ");
    //scanf("%d", &minutes);

    //printf("Enter seconds: ");
    //scanf("%d", &seconds);

    // Call the function to calculate total time in seconds
    int totalSeconds = calculateTotalSeconds(hours, minutes, seconds);

    // Check if the calculation was successful
    if (totalSeconds >= 0) {
        printf("Total time in seconds: %d seconds\n", totalSeconds);
    }

    return 0;
}
