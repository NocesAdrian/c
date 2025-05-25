#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int MIN = 1;
    int MAX = 100;
    srand(time(0));
    int randomNumber = (rand() % MAX) + MIN;

    int guess = 0;
    int totalGuess = 0;

    int Guesses[100];

    do {
        printf("Enter your Guess (1 - 100): ");
        scanf("%d", &guess);
        
        if (guess < MIN || guess > MAX) {

            printf("You can only guess 1 - 100~~\n");
            continue;

        }

        Guesses[totalGuess] = guess;
        totalGuess++;

        if (guess == randomNumber) {
        
            printf("\n##########################\n");
            printf("CORRECT!\n");
            printf("answer: %d\n", randomNumber);
            printf("number of guess: %d\n", totalGuess);
            printf("##########################\n");
            printf("\nSUMMARY OF ALL GUESSES: \n");

            for (int i = 0; i < totalGuess; i++) {
                printf("%d\n", Guesses[i]);
            }
            
        } else {

            if (guess < randomNumber) {
                printf("to low~~\n");
            } else {
                printf("to high~~\n");
            }
        
        }
    } while(guess != randomNumber);

    return 0;
}