#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessChecker(int, int);

int main() {
    int n;
    // Seed the random number generator with the current time
    srand(time(NULL));

    // To generate a random number within a specific range, you can use the modulo operator
    int min = 1;
    int max = 100;
    int random = (rand() % (max - min + 1)) + min;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    guessChecker(n, random);

    return 0;
}

void guessChecker(int n, int random){
    for (int i = 9; i > 0; i--)
    {
        if (n > random)
        {
            printf("Your guess was too high. \nYou have %d guesses left. \nEnter a positive integer: ",i);
            scanf("%d", &n);
        } else if (n < random)
        {
            printf("Your guess was too low. \nYou have %d guesses left. \nEnter a positive integer: ",i);
            scanf("%d", &n);
        } else {
            printf("Congrats! You guessed the number in %d guesses!", 10 - i);
            break;
        }
        
        
    }
    
    printf("You didn't guess the random number: %d in under 10 guesses. You suck!", random);
}




