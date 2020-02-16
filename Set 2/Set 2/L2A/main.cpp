
/* CSCI 261 Lab 2A: Math Equations
 *
 * Author: Keegan Bean
 *
 * Defining and calculating simple equations
 */
//use setw to add spaces later
// The include section adds extra definitions from the C++ standard library.
#include <iostream>
#include <cmath> //for math functions
// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    //define variables
    double stress; //variables needed for the equations
    double force;
    double acceleration;
    double distance;
    double x;
    double y;

    //equation 1
    cout << "Enter the force and acceleration: "; //prompting the user for input
    cin >> force >> acceleration; //taking the inputs from user
    stress = force/acceleration; //actual equation
    cout << "The stress on the object is: " << stress << endl; //printing to the screen

    //equation 2
    cout << "Enter x and y: "; //prompt the user for inputs
    cin >> x >> y; //takinf user inputs from user
    distance = sqrt((pow(x,2)+(pow(y,2)))); //distance equation
    cout << "The distance between x and y is: " << distance << endl; //returning the answer

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}