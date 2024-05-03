// Brandon Gurley
// Homework 1b
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define lower_limit 0
#define upper_limit 9
int main(){
	// whats first printed to the user
	printf("We're going to play a number guessing game! \n");	
	printf("This program is going to generate a 3 digit number and you will have ten guesses to guess that number correctly! \n");	
	int guessnumber=0;

    // generates random digts between 0 and 9, three times to make a three digit number
    srand( time( 0 ) );
        int digitone = lower_limit + rand() % (upper_limit - lower_limit + 1);
        int digittwo = lower_limit + rand() % (upper_limit - lower_limit + 1);
        int digitthree = lower_limit + rand() % (upper_limit - lower_limit + 1);
    
    // ensures the user will have no more than ten guesses
    while (guessnumber=<10) {
        printf("This is your number %d guess\n", ++guessnumber);
        printf("What is your guess?\n");
        printf("(Separate each digit with a space)\n");
        scanf("%d %d %d\n", &guessDigitOne, &guessDigitTwo, &guessDigitThree);
        
         // print statements for every possible  case
	    if (guessDigitOne=digitone)
	    {
	        printf("Digit One is a Match!\n")
	    }
	    if (guessDigitOne=digittwo)
	    {
	        printf("Digit One is a Hit!\n")
	    }
	    if (guessDigitOne=digitthree)
	    {
	        printf("Digit One is a Hit!\n")
	    }
	    if (guessDigitTwo=digittwo)
	    {
	        printf("Digit Two is a Match!\n")
	    }
	    if (guessDigitTwo=digitone)
	    {
	        printf("Digit Two is a Hit!\n")
	    }	
	    if (guessDigitTwo=digitone)
	    {
	        printf("Digit Two is a Hit!\n")
	    }
	    if (guessDigitThree=digitone)
	    {
	        printf("Digit Three is a Hit\n")
	    }
	    if (guessDigitTwo=digitthree)
	    {
	        printf("Digit Two is a Match\n")
	    }
	    if (guessDigitThree=digittwo)
	    {
	        printf("Digit Three is a Hit\n")
	    }
	    if (guessDigitOne=digtone && guessDigitTwo=digittwo && guessDigitThree=digitthree)
	    {
	        printf("Congratulations! You've guessed the number correctly!\n")
	        return 0;
	    }
}