#include <stdio.h>
#include <string.h>

int countChar(const char*, char);

int main() {
    char inputString[100];
    char searchingFor;

    printf("Enter a string: ");
    //fgets(where_the_data_is_going, Max_size_to_take, stdin_uses_console_input)
    fgets(inputString, sizeof(inputString),stdin);

    // Get char we are looking for
    printf("What are we looking for? ");
    scanf(" %c", &searchingFor);

    // Call countChar. Assign output to results
    int results = countChar(inputString, searchingFor);

    printf("The character %c is appears %d times in the string.", searchingFor, results);

    return 0;
}

// Declairation of a pointer to the string we are searching
int countChar(const char* inputString, char searchingFor){
    // Couter for number of times searchingFor is in string
    int count = 0;
    // Declares a pointer to a constant character named ptr and initializes it with the address of the first character of the inputString.
    const char* ptr = inputString;

    // This function (strchr) searches for the first occurrence of searchingFor in the string pointed to by ptr. 
    // If it finds the character, it returns a pointer to that character; otherwise, it returns NULL.
    while ((ptr = strchr(ptr, searchingFor)) != NULL)
    {
        count++;
        ptr++;
    }

    return count;
}
