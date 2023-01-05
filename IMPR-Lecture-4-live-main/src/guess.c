
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * A small game where the user must guess a (random) number between 1 and 20.
 * The player can guess multiple times, but at the end the number of guesses must be reported.
 * If the user guesses a number outside of [1,20], then the user can guess again, and the invalid guess is not counted.
 *
 * Bonus: Report after each guess if the user was above or below the number.
 */

int main(void)
{
    int number;
    int guess;
    int won;
    // remember to initialize random!
    srand((unsigned) time(0));
    number = rand();

    number = 1 + (number % 20);
    while (won == 0) {
        printf("Input you guess> \n");
        scanf(" %d", &guess);

        while (guess > 21 || guess < 0) {
            printf("Try again.");
            scanf("%d", &guess);
        }

        // what is the random number?
        printf("Random number = %d, guess = %d\n", number, guess);
        if (guess == number) {
            printf("You won!");
            won = 1;
        } else if (guess < number) {
            printf("You number is too low.");
            scanf("%d", &guess);
            won = 0;
        } else {
            printf("Your number is too high.");
            scanf("%d", &guess);
            won = 0;
        }
    }
    return 0;
}