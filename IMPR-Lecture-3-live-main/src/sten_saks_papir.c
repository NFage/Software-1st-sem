#include <stdio.h>
#include <process.h>

int main(void)
{
    char hand1, hand2;
    int player1wins, draw;
    printf("Use the following characters: 'r' for rock 's' for scissors, 'p' for paper.\n");
    printf("Input hand of the players > ");
    scanf("%c%c", &hand1, &hand2);
    printf("got input '%c' and '%c'\n", hand1, hand2);

    if(hand1 != 'r' && hand1 != 's' && hand1 != 'p' || hand2 != 'r' && hand2 != 's' && hand2 != 'p'){
       printf("Provide legal input, r, s, or p.");
       exit(1000000);
    }

    player1wins =
            (hand1 == 'r' && hand2 == 's') ||
            (hand1 == 's' && hand2 == 'p') ||
            (hand1 == 'p' && hand2 == 'r');

    draw =
            (hand1 == 'r' && hand2 == 'r') ||
            (hand1 == 's' && hand2 == 's') ||
            (hand1 == 'p' && hand2 == 'p');

    // Report on winner
    if(player1wins){
        printf("Player 1 wins\n");
    } else if (draw){
        printf("It was a draw\n");
    } else {
        printf("Player 2 wins\n");
    }

    return 0;
}