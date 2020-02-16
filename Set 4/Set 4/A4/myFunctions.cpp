//
// Created by Keegan Bean on 2019-02-21.
//myFucntions.cpp that includes all functions to be ran using the header and main.cpp file
//
#include <iostream>
using namespace std;
#include "myFunctions.h"

//defined variables
char whichConversion; //user chooses which calculator function
double pounds;
double kilograms;
double feet;
double meters;
double bmi;
double liters;

//converting from pounds to kilogram using the given equation
double doPoundsToKilograms(double pounds) {
    kilograms = 0.454 * pounds;
    return kilograms;
}
//converting from pounds to kilograms implemented
void poundsToKilograms() {
    do {
        cout << "Enter pounds: ";
        cin >> pounds;
    }while(pounds < 0.0); //while loop so non negative pounds
    cout << "This is equivalent to " << doPoundsToKilograms(pounds) << " kilograms." << endl;
}

//converting from feet to meters using the given equation
double doFeetToMeters(double feet) {
    meters = 0.3048 * feet;
    return meters;
}

//converting from feet to meters implemented
void feetToMeters() {
    do {
        cout << "Enter feet: ";
        cin >> feet;
    }while (feet < 0); //while loop so non negative feet
    cout << feet << " feet is equivalent to " << doFeetToMeters(feet) << " meters" << endl;
}

//calculating BMI using the equation
double doBMI(double kilograms,double meters) {
    bmi = kilograms / (meters * meters);
    return bmi;
}

//calculating BMI implemented
void bodyMassIndex() {
    do {
        cout << "Enter weight in pounds: ";
        cin >> pounds;
    } while (pounds < 0); //while loop so non negative pounds
    do {
        cout << "Enter height in feet: ";
        cin >> feet;
    } while (pounds < 0); //while loop so non negative pounds
    cout << "The Body Mass Index of a person who is " << feet << " feet tall and weighs " << pounds << " pounds is: " << doBMI(doPoundsToKilograms(pounds),doFeetToMeters(feet)) << endl;
}

//converting from meters to liters
double doMetersToLiters(double meters) {
    liters = meters/1000;
    return liters;
}

//converting from meters to liters implemented
void metersToLiters() {
    do {
        cout << "Enter cubic meters: ";
        cin >> meters;
    } while (meters < 0); //while loop to make sure meters isnt negative
    cout << meters << " meters is equivalent to " << doMetersToLiters(meters) << " liters" << endl;
}
//menu function from main.cpp pulling all the functions together
void menu() {
    do {
        //output what they should press
        cout << "\n";
        cout << "Press b to calculate BMI(Body mass index)" << endl;
        cout << "Press p to convert from pounds to kilograms" << endl;
        cout << "Press f to convert from feet to meters" << endl;
        cout << "Press m to convert from cubic meters to liters" << endl;
        cout << "Press q to quit" << endl;
        cout << "Which Conversion?: ";
        cin >> whichConversion;

//user picks convversion
        if (whichConversion == 'b' || whichConversion == 'B') {
            bodyMassIndex();
        }
        if (whichConversion == 'p' || whichConversion == 'P') {
            poundsToKilograms();
        }
        if (whichConversion == 'f' || whichConversion == 'F') {
            feetToMeters();
        }
        if (whichConversion == 'm' || whichConversion == 'M') {
            metersToLiters();
        }
        if (whichConversion == 'Q' || whichConversion == 'q') {
            break;
        }
    } while (whichConversion != 'Q' || whichConversion != 'q'); //quit if q or Q
}
