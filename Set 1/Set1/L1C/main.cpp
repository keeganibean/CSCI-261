/* CSCI 261 Lab 1C: GEOMETRIC CALCULATIONS
 *
 * Author: Keegan Bean
 *
 * Create double variables for area, radius, and Pi
 * User input the radius
 * Calculate the area with cmath
 * Print the area with the radius that they input
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cmath>
// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** MODIFY OR INSERT CODE BELOW HERE ********/

    int length = 17;
    int width = 17;
    int height = 2;
    int volume;

    // Volume of a box is length times width times height.
    volume = length * width * height;
    // part 1
    cout << "The volume of the prism is " << volume << endl; //print full statement


    // part 2
    cout << "Enter the dimensions of your box: "; //prompt the user for dimensions
    cin >> length >> width >> height; //input those dimensions
    volume = length * width * height; //calculate volume
    cout << "The volume of your box is: " << volume << endl; //output full statement


    // part 3
    const double PI= 3.14159; //define pi
    double radius; //define radius
    double area; //define area

    cout << "Enter the radius of the circle: "; //prompt the user for the radius
    cin >> radius; //input radius

    area = PI * pow(radius, 2); //calculate area

    cout << "The area of a circle with radius " << radius << " is " << area << endl; //output full statement
    /******** MODIFY OR INSERT CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}
