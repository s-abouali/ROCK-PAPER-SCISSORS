#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int playerChoice, computerChoice;
    char *choices[] = {"Rock", "Paper", "Scissors"};
    char playAgain;

    srand(time(0));

    printf("=== ROCK PAPER SCISSORS ===\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n\n");

    do {
        printf("Enter your choice (1-3): ");
        scanf("%d", &playerChoice);

        if (playerChoice < 1 || playerChoice > 3) {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        computerChoice = (rand() % 3) + 1;

        printf("\nYou chose: %s\n", choices[playerChoice - 1]);
        printf("Computer chose: %s\n\n", choices[computerChoice - 1]);

        if (playerChoice == computerChoice) {
            printf("It's a tie!\n");
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            printf("You win!\n");
        } else {
            printf("Computer wins!\n");
        }

        printf("\nPlay again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}