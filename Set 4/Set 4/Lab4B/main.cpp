/* CSCI 261 Lab 4B: Polar to Cartesian and vise versa
 *
 * Author: Keegan Bean
 * //Collaborator:Aidan Funk
 *
 * Create two seperate functions using constants and doubles
 * 1. To convert from cartesian to polar
 * 2. To convert from polar to cartesian
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cmath> //for sin and cos

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.
// Function 1 goes from cartesian to polar
void cartesian2Polar(const double x, const double y, double& r, double& angle){
    r=sqrt(x*x + y*y); // equation for the radius using x and y
    angle=acos(x/r); // equation for the angle using the radius and x
}
// Function 2 goes from polar to cartesian
void polarToCartesian(const double r,const double angle, double& x, double& y){
    x=r*cos(angle);// equation to find x using radius and theta
    y =r*sin(angle);// equation to find y using radius and theta
}


int main() {

    char polarOrCartesian;// variable to decide which function to use

    double x = 0;// all variables that are used in functions
    double y = 0;
    double r = 0;
    double angle = 0;

    // Prompt the user for which way they want to convert
    cout << "Enter 1 for (r, θ) -> (x, y) or 2 for (x, y) -> (r, θ): ";
    cin >> polarOrCartesian; // pick polar or cartesian conversion

    // chooses which function
    if (polarOrCartesian == '1'){
        cout << "Enter your radius(r) and theta" << endl; // prompt user for radius and theta
        cin >> r >> angle;
        polarToCartesian(r, angle, x, y); // go from the radius and the angle to x and y
        cout << "x is: " << x << endl;
        cout << "y is: " << y << endl;
    } else if (polarOrCartesian == '2'){
        cout << "Enter your x and y coordinates: "; // prompt user for their x and y
        cin >> x >> y;
        cartesian2Polar(x, y, r, angle); // go from x and y to radius and theta
        cout << "The radius is: " << r << endl;
        cout << "Theta is: " << angle << endl;
    } else {
        // else statement executes if the user doesn't enter one or two
        cout << "invalid input";
    }
        /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}