#include <stdio.h>

int main() {
    char charArray[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!'};
    int arrayLength = sizeof(charArray) / sizeof(char); // Calculate the length of the array

    // Print the concatenated characters
    printf("Concatenated word: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%c", charArray[i]);
    }
    printf("\n");

    return 0;
}
