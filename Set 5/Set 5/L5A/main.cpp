/* CSCI 261 Lab 5A: Input & Print An Array
 *
 * Author: Keegan Bean
 *
 * Take 15 whole numbers from a user input and store them in an array
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

int fifteenInts[15]; //creating the array for the 15 integers

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/
    cout << "Hey! Witness my first array mojo!" << endl; // first array


    cout << "Enter 15 numbers and I will tell you what they are." << endl; //prompt user for numbers

    // Assign values for each index in the array fifteenInts
    for (int i=0; i<15; i++) { //for loop for a 15 index array
        cout << "Number " << i+1 << ": "; //outputs the prompt for the user to input the number to which index
        cin >> fifteenInts[i]; //take inputs 15 times(i)
        //catch invalid inputs using cin.fail, cin.clear, and cin.ignore
        if (cin.fail()) {
            while(cin.fail()) {
                cout << "Input must be an integer" << endl;
                cin.clear(); //clears input
                cin.ignore(100, '\n'); //new line
                cout << "Number " << i+1 << ": ";//takes input again
                cin >> fifteenInts[i];//outputs if valid
            }
        }
    }

    cout << "The numbers are: ";
    //
    for (int i=0; i<15; i++) { //for loop for a 15 index array
        cout << fifteenInts[i] << " "; //output each number with a space in between
    }

    cout << "\n"; //new line at the end
    cout << "Have a nice day!"; // politeness


    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}