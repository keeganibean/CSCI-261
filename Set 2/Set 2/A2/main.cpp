/* CSCI 261 Assignment 2: Triangles
 *
 * Author: Keegan Bean
 *
 * More complete description here...
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cmath>
#include <iomanip>

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.
double vertex1X; //vertexes of X and Y below
double vertex1Y;
double vertex2X;
double vertex2Y;
double vertex3X;
double vertex3Y;;
double distance12X; // distance between the two vertexes listed for X or Y
double distance12Y;
double distance13X;
double distance13Y;
double distance23X;
double distance23Y;
double length1; // Side lengths
double length2;
double length3;
double triangleArea; //Area of the triangle
double p; // one half the perimeter(global variable p)
double trianglePerimeter; //Triangle's perimeter
// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/
    // part 1 User inputs
cout << "Enter the coordinates of the first vertex: "; //prompt user for input
cin >> vertex1X >> vertex1Y; //take input
cout << "Enter the coordinates of the second vertex: ";
cin >> vertex2X >> vertex2Y;
cout << "Enter the coordinates of the third vertex: ";
cin >> vertex3X >> vertex3Y;
cout << endl;

// part 2 Side Lengths
cout << "The side lengths are: "; //output the words
distance12X = (vertex2X-vertex1X); //equations for distance between the individual points
distance12Y = (vertex2Y-vertex1Y);
distance13X = (vertex3X-vertex1X);
distance13Y = (vertex3Y-vertex1Y);
distance23X = (vertex3X-vertex2X);
distance23Y = (vertex3Y-vertex2Y);
length1 = sqrt((pow(distance12X,2.0)+(pow(distance12Y,2.0)))); //distance formula from algebra between two points
length2 = sqrt((pow(distance13X,2.0)+(pow(distance13Y,2.0))));
length3 = sqrt((pow(distance23X,2.0)+(pow(distance23Y,2.0))));
p = ((length1+length2+length3)/2);
triangleArea = sqrt(p*(p-length1)*(p-length2)*(p-length3));
trianglePerimeter = (length1+length2+length3);

    cout << " " << fixed << setprecision(3) << length1; //output length to three decimal places
    cout << " " << fixed << setprecision(3) << length2;
    cout << " " << fixed << setprecision(3) << length3;
    cout << endl;
// part 3 Is this a triangle?
    if (length1+length2 > length3 && length2+length3 > length1 && length1+length3 > length2) //are the lengths able to make a triangle
        // output that they form a triangle and the triangle stats
        //part 4 Triangle Stats
        cout << "These sides do form a triangle." <<  "\n" << "\n"<< "The perimeter is: " << fixed << setprecision(3) << trianglePerimeter << "\n"<< "The area is: " << fixed << setprecision(3) << triangleArea << endl;
    else // They do not form a triangle
        cout << "These sides do not form a triangle. Have a nice day." << endl;


    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}