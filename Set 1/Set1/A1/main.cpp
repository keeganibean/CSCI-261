/* CSCI 261 Assignment 1: Hello World and ASCII Art
 *
 * Author: XXXX (_INSERT_YOUR_NAME_HERE_)
 *
 * print your own self made ascii smiley face
 * print three facts about yourself using 3 properly defined variables
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    cout << "Ready to code!! Wait, I need to fill it all in myself?" << endl;
// part 1
     cout << "   * * *" << "\n"; // several different cout statements lining up to make a smiley face
     cout << " *       *" << "\n";
     cout << "*   O O   *" << "\n";
     cout << "*    <    *" << "\n";
     cout << "*  \\___/  *" << "\n";
     cout << " *       *" << "\n";
     cout << "   * * *" << endl;

// part 2

    cout << "\n" << "Hello World!" << endl;
    const int AGE=19; //constant integer for age
    const double MARATHON=26.2; // constant double for the length of a marathon since it has decimals
    const int WEIGHT=174; // constant integer for weight class since it is to the full pound

    cout << "I am " << AGE << " years old." << endl; // cout for age fact
    cout << "I have ran a marathon which is " << MARATHON << " miles." <<endl; //cout for marathon fact
    cout << "My weight class is " << WEIGHT << " pounds." << endl; // cout for weight class fact
    cout << "Goodbye!" << endl; //last line before return 0


    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}