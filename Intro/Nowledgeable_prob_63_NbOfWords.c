#include <stdio.h>
#include <string.h>

char firstLetter(const char*);

int main() {
    char inputString[100];
    

    printf("Enter a string: ");
    //fgets(where_the_data_is_going, Max_size_to_take, stdin_uses_console_input)
    fgets(inputString, sizeof(inputString),stdin);

    // Call spaceFinder. Assign output to results
    firstLetter(inputString);

    return 0;
}

char firstLetter(const char* inputString){
    char acronym[100];
    int acronymIndex = 1;
    if (inputString[0] != '\0')
    {
        acronym[0] = inputString[0];
    }
    

    int length = strlen(inputString);

    for (int i = 0; i < length; i++)
    {
        if(inputString[i] == ' '){
            acronym[acronymIndex] = inputString[i+1];
            acronymIndex++;
        }
    }

    // Null-terminate the acronym to make it a valid C string
    acronym[acronymIndex] = '\0';
    
    printf("The acronym for: %s \n is: %s", inputString, acronym);
}
