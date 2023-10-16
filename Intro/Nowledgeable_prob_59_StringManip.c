#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a string
    char myString[] = "Hello, world!";

    // Calculate the string's size with strlen
    int stringSize = strlen(myString);

    // Display the string's size
    printf("String Size: %d\n", stringSize);

    // Display the first character
    printf("First Character: %c\n", myString[0]);

    // Display the last character
    printf("Last Character: %c\n", myString[stringSize - 1]);

    // Search for the character 'c' in the string using strchr(string_name, searching_for)
    char searchChar = 'c';
    char *charPosition = strchr(myString, searchChar);

    if (charPosition != NULL) {
        // Calculate the position of 'c' in the string
        int position = charPosition - myString;
        printf("Position of '%c': %d\n", searchChar, position);
    } else {
        printf("Character '%c' not found in the string.\n", searchChar);
    }

    return 0;
}
