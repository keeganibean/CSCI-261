/* CSCI 261 Lab 8D: Godzilla vs. MechaGodzilla
 *
 * Author: Keegan Bean
 * Collaborator: Aidan Funk
 *
 * The battle of Godzilla vs. MechaGodzilla
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

    //The output for the original Godzilla
    cout << "Godzilla" << endl;
    cout << "Name: " << godzilla.getName() << endl;
    cout << "Health: " << godzilla.getHealth() << endl;
    cout << "Power: " << godzilla.getPower() << endl;

    cout << "Mecha Godzilla:" << endl;
    cout << "Name: " << MechaGodzilla.getName() << endl;
    cout << "Health: " << MechaGodzilla.getHealth() << endl;
    cout << "Power: " << MechaGodzilla.getPower() << endl;

    //Changing "the stats" for the original Godzilla
    cout << "Change the stats of Godzilla" << endl;
    cout << "Name: ";
    getline(cin >> ws, userInput);
    cout << "Health: ";
    cin >> power;
    cout << "Power: ";
    cin >> strength;

    godzilla.setName(userInput);
    godzilla.setHealth(power);
    godzilla.setPower(strength);

    //Output for the changed Godzilla
    cout << "New Godzilla" << endl;
    cout << "Name: " << godzilla.getName() << endl;
    cout << "Health: " << godzilla.getHealth() << endl;
    cout << "Power: " << godzilla.getPower() << endl;

    //Calling the attack function for Godzilla
    godzilla.attack(MechaGodzilla);

    //Calling MechaGodzilla to kill Godzilla
    while(godzilla.getHealth() > 0 ){ //while health is greater than 0
        MechaGodzilla.attack(godzilla);
    }
    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}