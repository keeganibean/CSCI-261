/* CSCI 261 A5: Hangman
 *
 * Author: Keegan
 *
 * Creating a game of hangman for the word "programming' using functions and arrays
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include "KEEGAN_HANGMAN.h"

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.
char alphabetArray[26]={};//checks if it is in the array
char spotsRemaining[11]={'_','_','_','_','_','_','_', '_', '_', '_', '_'};//whats been guessed
char myWord[11]={'p','r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g'};//secret word set to PROGRAMMING
int userChances = 7; //lives for the player
int lastUserGuess = 0; //updating the players letters
char userGuess; //intake for the guesses

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    cout << "Welcome to Hangman!!" << endl;
    cout << endl;

    while (true) { //boolean for the while statement
        //print what the player guesses
        PlayerLetters(spotsRemaining);

        //user can input lower and uppercase letters
        cout << "Your guess: ";
        cin >> userGuess;
        userGuess=(tolower(userGuess));
        if (LettersUsed(alphabetArray, userGuess, lastUserGuess)){
            //catches already guessed letters
            continue;
        }

        GoodGuess(myWord, userGuess, userChances); // checks to see if the letter is in the word
        for(int k=0; k<11; k++){
            if(myWord[k] == userGuess){
                spotsRemaining[k] = userGuess; // assigns the letter to the right spot if correct
            }
        }

        //Player loses if out of guesses (7)
        if (userChances == 0){
            cout << "You lose. Try again!";
            break;
        }
        //if player guesses my secret word the game is over
        if(HangmanWon(myWord, spotsRemaining)){
            cout << "CONGRATS! You solved the puzzle: ";
            for (int k=0; k<11; k++) {
                //prints the word
                cout << spotsRemaining[k] << " ";
            }
            break;//breaks the function
        }
    }

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}