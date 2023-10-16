#include <stdio.h>
#include <ctype.h>

int main() {
    char userChar;

    printf("Enter a char: ");
    scanf("%c", &userChar);

    // Sample input
    //userChar = "H";

    // Uses the built in functions of ctype.h to test for isupper, islower, or isdigit
    if (isupper(userChar)){
        printf("Uppercase!");
    } else if (islower(userChar)){
        printf("Lowercase!");
    } else if (isdigit(userChar)){
        printf("Number!");
    } else {
        printf("-");
    }

    return 0;
}