/* CSCI 261 Lab 2C: RPS: Human vs. Computer
 *
 * Author: Keegan Bean
 *
 * Take input from user and return what they chose in rock, paper, scissors
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

char choice;
int randomNumber;

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    cout << "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R or S)" << endl; //welcome the player
    cout << "Player: "; //prompt for input
    cin >> choice; //take input
    cout << "Player chose " << choice << endl;
    srand(time(0)); //random prerequisites
    randomNumber = rand() % 2 + 0; //random number function
    cout << "computer chose " << randomNumber; //output computer

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}