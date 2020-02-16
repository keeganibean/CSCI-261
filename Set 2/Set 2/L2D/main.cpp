/* CSCI 261 Lab 2D: RPS: State Your Choice
 *
 * Author: Keegan Bean
 *
 * Including an or statement to cover the user inputting a lowercase p, r, or s.
 * Outputting who chose which in the game.
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cstdlib> //For rand()

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

string choice;
int randomNumber;

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    cout << "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R or S)" << endl;
        cout << "Player: ";

        cin >> choice;

        //if else for the users choice
        if (choice == "R" || choice =="r") //R or r
        {
            cout << "Player chose Rock" << endl;
        }

        else if (choice == "P" || choice == "p") // P or p
        {
            cout << "Player chose Paper" << endl;
        }
        else if (choice == "S" || choice =="s") // S or s
        {
            cout << "Player chose Scissors" << endl;
        }
        else {
            cout << "Must input P, R, or S" << endl; // if user inputs something invalid
            return 0;
        }

    srand(time(0));
    randomNumber = rand() % 3; //"random number" function
        if (randomNumber == 0) // if else for what the computer chose randomly
        {
        cout << "Computer chose Rock" << endl;
        }

        if (randomNumber == 1)
        {
        cout << "Computer chose Paper" << endl;
        }

        if (randomNumber == 2)
        {
        cout << "Computer chose Scissors" << endl;
        }

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}