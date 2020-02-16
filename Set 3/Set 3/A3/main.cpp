/* CSCI 261 Assignment 3: Guess The Number
 *
 * Author: Keegan Bean
 *
 * Prompt the user to input upper and low limits then have them guess
 * numbers between there telling them if they are close or far and high or low
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cstdlib> // For rand()

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.
int lowNumber;
int highNumber;
int randNum;
int userGuess; //input the users guess
int loopNumber=0; //loop counter
const int TOO_HIGH_DIFFERENCE = 25; //constant for high number
const int TOO_CLOSE_DIFFERENCE = 5; //constant for close number

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    cout << "Hold onto your pants, we're about to play guess-the-numbah!" << endl;
    cout << "Enter the lowest possible number: "; //prompt user
    cin >> lowNumber;//input
    cout << endl; //new line for spacing
    cout << "Enter the highest possible number: "; //prompt user
    cin >> highNumber;//input
    if (highNumber-lowNumber < 100)//checking if the range is big enough
    {
        cout << "High number must be at least 100 more than the low number." << endl;
        cout << endl; //new line for spacing
        cout << "Enter the highest possible number: ";
        cin >> highNumber; //the high limit
    }
    randNum = rand()%(highNumber-lowNumber + 1) + lowNumber; //random number
    do { //run the loop while they haven't guessed yet
        cout << endl;

        cout << "Pick a number between " << lowNumber << " and " << highNumber << ": ";
        cin >> userGuess;
        //if else statements for the different results of guessing
        if (lowNumber > userGuess || highNumber < userGuess) {
            cout << "Invalid guess." << endl;
            continue; //keep going though invalid

        }
        else if (userGuess<randNum) {
            cout << "Too low!";
        }
        else if (userGuess>randNum) {
            cout << "Too high!";
        }
        if (userGuess!=randNum) {
            if(abs(userGuess-randNum) <= TOO_CLOSE_DIFFERENCE) {
                cout << " Ooooh you're close!";
            }
            if (abs(userGuess-randNum) >=TOO_HIGH_DIFFERENCE) {
                cout << " Not even close!";
            }
        }
        loopNumber+=1;
        cout << endl;
    } while (userGuess!=randNum);
    cout << "That's right! You won the game in " << loopNumber << " tries."; //they won





    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}