/*
* The program randomly generates numbers   
* between 1 and 1000 for the user to guess.
*/


// intitalize needed preproccessor directives
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// defines a value off of the stack
#define MIN_NUMBER 1

//define a constant int MAX_NUMBER
const int MAX_NUMBER = 100;

//Im not sure what this is doing I know the boolean value is established to find wether the guess is correct or not
void guessGame(void); 
bool isCorrect(int, int); 


int main(void)
{
    //find a random number using time 0 as a base variable
   srand(time(0));

   //not sure
   guessGame(); 

   //return random number as 0
   return 0;
}

//void the guessGame method to end the loop
void guessGame(void)
{
    //establish needed integers
   int answer = 0; 
   int guess = 0; 
   int response = 0; 

   do {

       //answer is equal to the minimum number plus the random number divided by the max number and return the remainder
      answer = MIN_NUMBER + rand() % MAX_NUMBER;


      //print the lines needed for the guessing game
      printf("Hello, I have a number between %d and %d .\n" 
          "Can you guess my number?\n"
           "Please type your first guess.", MIN_NUMBER, MAX_NUMBER);

      //do while loop to scan, read and evaluate the number inputted by the user
      do
      {
          //scans the last printed line and checks for the isCorrect boolean to end the do/while loop
          scanf("%d", &guess);
      } while (!isCorrect(guess, answer));
         
      //use puts function to print out the string if loop ends
      puts("\nExcellent! You guessed the number!\n"
         "Would you like to play again?");

      printf("%s", "Please type ( 1=yes, 2=no ) ");
      scanf("%d", &response);

      puts("");
   } while (response == 1);
} 

//establish isCorrect boolean and needed integers
bool isCorrect(int g, int a)
{
    //boolean for if the number is found
    bool found = false;

    //if statement to print correct statement depending on user input
    if (g == a){
        found = true;
    }else  if (g < a)
      printf( "%s", "Too low. Try again.\n? " );
   else
      printf( "%s", "Too high. Try again.\n? " );

    //return found after if/ else statement
   return found;
} 

