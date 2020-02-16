/* CSCI 261 Lab 8B: Godzilla vs. MechaGodzilla
 *
 * Author: Keegan Bean
 * Collaborator: Aidan Funk
 *
 * Editing the stats before the battle
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

    //output object values
    cout << "Godzilla" << endl;
    cout << "Name: " << godzilla.getName() << endl;
    cout << "Health: " << godzilla.getHealth() << endl;
    cout << "Power: " << godzilla.getPower() << endl;

    cout << "Mecha Godzilla" << endl;
    cout << "Name: " << MechaGodzilla.getName() << endl;
    cout << "Health: " << MechaGodzilla.getHealth() << endl;
    cout << "Power: " << MechaGodzilla.getPower() << endl;

    //prompting the user the "change the stats"
    cout << "Change the Godzilla" << endl;
    cout << "Name: ";
    getline(cin >> ws, userInput);
    cout << "Health: ";
    cin >> power;
    cout << "Power: ";
    cin >> strength;

    //changes to the new values from the user
    godzilla.setName(userInput);
    godzilla.setHealth(power);
    godzilla.setPower(strength);

    // the users godzilla output from above
    cout << "New Godzilla:" << endl;
    cout << "Name: " << godzilla.getName() << endl;
    cout << "Health: " << godzilla.getHealth() << endl;
    cout << "Power: " << godzilla.getPower() << endl;

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}