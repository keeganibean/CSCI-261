/* CSCI 261 Lab 2B: Pretty Math Equations
 *
 * Author: Keegan Bean
 *
 * Defining and calculating complicated equations
 * Using the proper set width
 */
//use setw to add spaces later
// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cmath> //For math functions
#include <iomanip> // for set precision and set width
// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    //define variables
    double acceleration;
    double mass;
    double force;
    double width;
    double height;
    double area;

//equation #1 Newton's 2nd Law(physics)
    cout << "Hello world!" << endl;// print Hello world! to the screen
    cout << "Enter the acceleration: "; //prompt user to enter acceleration
    cin >> acceleration; //take acceleration input
    cout << "Enter the mass: "; //prompt the user to enter the mass
    cin >> mass; //take mass input
    force= mass * acceleration;

//equation #12 Area(math)
    cout << "Enter the width: "; //prompt user for width
    cin >> width; //take width input
    cout << "Enter the height: "; //prompt user for height
    cin >> height; //take height input
    area= width * height;

    cout << fixed;
    cout << "Equation #01"; //equation 1
    cout << setw(40); //make the colons line up
    cout << "Newton's 2nd Law (Physics):  ";
    cout << setw(7); //make the decimals line up
    cout << setprecision(3) << force << endl;

    cout << "Equation #12"; //equation 12
    cout << setw(40); //make the colons line up
    cout << "Area (Math)   :  ";
    cout << setw(7); //make the decimals line up
    cout << setprecision(3) << area; //print area to three decimal places

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}