#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a string
    char myString[] = "Hello, world!";

    // Print string
    printf("The original is: %s", myString);

    // Reverse the string with strrev
    printf("\nThe reverse is: %s", strrev(myString));

    return 0;
}
