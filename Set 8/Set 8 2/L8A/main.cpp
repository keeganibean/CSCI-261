/* CSCI 261 Lab 8A: Godzilla
 *
 * Author: Keegan Bean
 * Collaborator: Aidan Funk
 *
 * Start the parameters for a battle between godzilla and mechagodzilla
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <string>
#include "GodzillaClass.h"

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.
Godzilla godzilla;

string userInput;
double strength;
double power;

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/


    Godzilla MechaGodzilla(userInput, strength, power);

    // all of the ouputs for the parameters in Godzilla class
    cout << "Godzilla:" << endl;
    cout << "Name: " << godzilla.getName() << endl;
    cout << "Health: " << godzilla.getHealth() << endl;
    cout << "Power: " << godzilla.getPower() << endl;

    cout << "Mecha Godzilla:" << endl;
    cout << "Name: " << MechaGodzilla.getName() << endl;
    cout << "Health: " << MechaGodzilla.getHealth() << endl;
    cout << "Power: " << MechaGodzilla.getPower() << endl;

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}
