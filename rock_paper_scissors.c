#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int player, computer; // Declare integer variables for player and computer choices

  printf("Rock, Paper, Scissors\n"); // Prints the game title
  printf("Choose 1 for rock, 2 for paper and 3 for scissors: \n"); // Prompt the player for their choice
  scanf("%d", &player); // Reads and stores the player's choice from the input

  //random number generator to get different choices each time the game is played
  srand(time(NULL));
  computer = rand() % 3 + 1; // Generate a random number between 1 and 3 for the computer's choice

  printf("You chose: %d\n", player); // Prints the player's choice
  printf("Computer chose: %d\n", computer); // Prints the computer's choice

  // Checks if it's tie
  if (player == computer) {
    printf("It's a tie!\n");
  }
  // Checks if the player won
  else if ((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2)) {
    printf("You win!\n");
  }
  // if the player lost it prints you lost
  else {
    printf("You lose!\n");
  }
  return 0; 
}