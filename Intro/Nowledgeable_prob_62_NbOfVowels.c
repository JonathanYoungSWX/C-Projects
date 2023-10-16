#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Function to check if a character is a vowel (case-insensitive)
bool isVowel(char ch) {
    char lowercaseCh = tolower(ch); // Convert the character to lowercase
    return (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u');
}

// Function to count vowels in a string
int countVowels(const char* str) {
    int count = 0;
    int strLength = strlen(str);

    for (int i = 0; i < strLength; i++) {
        if (isVowel(str[i])) {
            count++;
        }
    }

    return count;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int vowelCount = countVowels(inputString);

    printf("\nNumber of vowels in the string: %d\n", vowelCount);

    return 0;
}
