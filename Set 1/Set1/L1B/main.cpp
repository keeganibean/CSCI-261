/* CSCI 261 Lab 1A: Learning how to implement ASCII art
 *
 * Author: Keegan Bean
 *
 * Print a tree and print a rabbit using cout statements and ascii characters
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    cout << "Hello world!" << endl; // print Hello world! to the screen
    cout << "   *\n" //print the tree of stars to the screen
            "  ***\n"
            " *****\n"
            "*******\n"
            "  ***" << endl;


    cout << "/\\   /\\\n" //print the rabbit to the screen
            "  o o\n"
            " =   =\n"
            "  ---" << endl;
    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}