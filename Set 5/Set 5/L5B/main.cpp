/* CSCI 261 Lab 5B: Find the Array Max
 *
 * Author: Keegan Bean
 *
 * Continue Lab 5A and output the max and min of the array
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

int fifteenInts[15]; //creating the array for the 15 integers
int minimumNum;
int maximumNum;

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

    //Lab 5B: Maximum and Minimum
    //set the maximum and minimum to zero
    maximumNum=fifteenInts[0];
    minimumNum=fifteenInts[0];

    for (int i=0; i<15; i++) { //for loop testing for min value
        if (minimumNum>fifteenInts[i]) {
            minimumNum=fifteenInts[i];
        }
    }

    for (int i=0; i<15; i++) { //for loop testing for max value
        if (maximumNum<fifteenInts[i]){
            maximumNum=fifteenInts[i];
        }
    }

    cout << "The largest number is: " << maximumNum << endl;
    cout << "The smallest number is: " << minimumNum << endl;
    cout << "Gaze at my awesome!";



    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}