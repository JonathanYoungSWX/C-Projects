#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to congratulate a student based on gender and average
void congratulateStudent(const char *gender, float average) {
    // Check if the gender is "man" (case-insensitive) and average is greater than 10
    if (strcasecmp(gender, "man") == 0 && average > 10) {
        printf("Congratulations young man :-)\n");
    }
    // Check if the gender is "woman" (case-insensitive) and average is greater than 10
    else if (strcasecmp(gender, "woman") == 0 && average > 10) {
        printf("Congratulations Miss :-)\n");
    } else {
        printf(":-(\n"); // Default message if conditions are not met
    }
}

int main() {
    char gender[20];
    float average;

    printf("Enter the student's gender (man or woman): ");
    scanf("%s", gender);

    printf("Enter the student's average: ");
    scanf("%f", &average);

    // Call the function to congratulate the student
    congratulateStudent(gender, average);

    return 0;
}
