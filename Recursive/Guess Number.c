/*Exercise: Number Guessing Game
Create a simple number guessing game where the computer selects a random number between 1
and 100, and the player has to guess the number. The program should provide feedback to the
player after each guess, indicating whether the guess was too high, too low, or correct. The player
should continue guessing until they guess the correct number.
Here are the steps to follow for this exercise:
1. Generate a random number between 1 and 100.
2. Prompt the player to enter their first guess.
3. Use a loop to continue prompting the player for guesses until they guess the correct number.
4. Inside the loop, compare the player's guess to the random number and provide feedback
(e.g., "Too high," "Too low," or "Correct!").
5. Keep track of the number of guesses the player has made.
6. When the player guesses the correct number, display a congratulatory message along with
the number of guesses it took them.
We suppose here that the provided numbers are valid (in the correct range and do not contain
characters)*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
// create variable to store the random number between 1 and 100
	int random_number;

// reset random number generators
	srand(time(NULL));
	
// generate a random number and take its modulo with 100 and add one 
// now we have a number between 1 and 100
	random_number = (rand() % 100) + 1;
	
// Ask for the first input from user
	printf("Guess the number between 1 and 100\n");
	
// create variable to store user's guessed number and number of tries
	int user_guess, tries = 0;
	
// start do while loop of the game
	do{
	   
// take input from the user 
	   scanf("%d", &user_guess);
	   
// if the guess is larger than the random number
	   if(user_guess > random_number){
	       
// tell the user the guess is greater than the number
	       printf("The number you entered is greater");
	       tries++;
	       
	   }
// else if the guess is smaller than the random number
	   else if(user_guess < random_number){
	       
// tell the user the guess is smaller than the number
	       printf("The number you entered is smaller");
	       tries++;
	       
	   }
// else the guess is equal to the random number
	   else{
	       
// user won the game
	       printf("Correct Guess, in %d tries!", tries);
	       
	   }
	    
	}
	while(user_guess != random_number);
	
	return 0;
}