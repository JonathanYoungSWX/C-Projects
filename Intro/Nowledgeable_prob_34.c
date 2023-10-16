#include <stdio.h>

// Function to determine the type of a character
void characterType(char c) {
    if (c >= 'A' && c <= 'Z') {
        printf("'%c' is uppercase.\n", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("'%c' is lowercase.\n", c);
    } else if (c >= '0' && c <= '9') {
        printf("'%c' is a number between 0 and 9.\n", c);
    } else {
        printf("'%c' is not an uppercase letter, lowercase letter, or a number.\n", c);
    }
}

int main() {
    char inputChar;

    printf("Enter a character: ");
    scanf(" %c", &inputChar); // Note the space before %c to consume any leading whitespace

    characterType(inputChar);

    return 0;
}
