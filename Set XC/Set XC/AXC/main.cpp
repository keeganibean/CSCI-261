/* CSCI 261 Lab AXC: People Validator
 *
 * Author: Keegan Bean
 *
 * Output different types of people based on their heights
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <string>
#include <fstream>
#include "Person.h"


// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

//SelectionSort from previous lab
void selectionSort(int validationCount, Person *&validationPtr);
int validationCount = 0; // number of valid partners
int *validationPtrCount = &validationCount; // uses a pointer to reference valid count
Person potentialPartner; // declares potential partner

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    ifstream file("PersonFile.dat"); // declare ifstream object and open the file

    // Display the error message if the file cant be opened
    if ( file.fail() ) {
        cerr << "Error opening the input file";
        exit(1);
    }

    while(!file.eof()) { //while loop until end of file
        if (!file.fail()) { //error
            //Potential Partner stuff
            potentialPartner.input(file);
            if (potentialPartner.validate()) {
                *validationPtrCount = *validationPtrCount + 1; //increases the count
            }
        } else {
            cerr << "error while reading file";
            return -1;
        }
    }

    cout << *validationPtrCount << endl; // pointer to validCount, outputs value of validCount

    //for extra point of EC
    Person *validPtr; // Person to pointer
    validPtr = new Person[*validationPtrCount]; // Searches for the person in the array

    file.clear(); //Clear file
    file.seekg(0,ios::beg); //Beginning of file

    int elementOffset = 0; //offset amount

    while(!file.eof()) { //do for the entirety of the file
        potentialPartner.input(file); //Input to potentialParnter
        if(potentialPartner.validate()) { //if potential partner is valid then continue
            validPtr[elementOffset] = potentialPartner;
            elementOffset++; //change the offset from 0
        } else {
            potentialPartner.output(cout); // if invalid then output
        }
    }

    selectionSort(validationCount, validPtr); //sort by the persons height

    //smallest
    cout << "Smallest Height: ";
    (validPtr)->output(cout);
    //median
    cout << "Median Height: ";
    (validPtr + (validationCount / 2))->output(cout);
    //largest
    cout << "Largest Height: ";
    (validPtr + validationCount - 1)->output(cout);

    file.close(); //closes file at the end of output

    delete[] validPtr;

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}

//Calling the function
void selectionSort(int validCount, Person *&validPtr) { //sorts by height
    double tempVal;
    for (int i = 0; i < validCount - 1; i++) {
        for (int j = i + 1; j < validCount; j++) {
            //move the smallest to the front using selection sort
            if ((validPtr + j)->outputHeight() < (validPtr + i)->outputHeight()) {
                tempVal = (validPtr + i)->outputHeight();
                (validPtr + i)->inputHeight((validPtr + j)->outputHeight());
                (validPtr + j)->inputHeight(tempVal);
            }
        }
    }
}