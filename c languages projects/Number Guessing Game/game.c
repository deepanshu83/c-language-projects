#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));  // Seed the random number generator with current time
    number = rand() % 100 + 1;  // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");

    // Game loop
    do {
        printf("Enter your guess (between 1 and 100): ");
        scanf("%d", &guess);  // Get user input

        attempts++;  // Increment the number of attempts

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);  // Repeat until the guess is correct

    // Ask the user if they want to play again
    char play_again;
    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &play_again);  // The space before %c skips any leftover newline character

    if (play_again == 'y' || play_again == 'Y') {
        main();  // Restart the game
    } else {
        printf("Thank you for playing! Goodbye.\n");
    }

    return 0;
}
