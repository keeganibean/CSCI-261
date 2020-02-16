//Keegan Bean Section D, Aidan Funk Section B
//Caesar and Vigenere Ciphers
//4/24/19
#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <vector>

#include "Caesar.h"
#include "Vigenere.h"

using namespace std;

int main() {
    char userChoice1;
    char userChoice2;
    int shift;

    cout << "---Caesar/Vigenere Cipher---" << endl;
    cout << "\nMake sure that the message you want to either encrypt or decrypt has been written in the file 'Input.txt'.\n" << endl;

    //makes sure the user enters only e or d, isn't case sensitive
    do {
        cout << "Would you like to encrypt or decrypt a message?(enter E for encrypt and D for decrypt)" << endl;
        cin >> userChoice1;
        userChoice1 = toupper(userChoice1);
    } while (userChoice1 != 'E' && userChoice1 != 'D');

    //makes sure the user enters only c or v, isn't case sensitive
    do {
        cout << "Would you like to use a Caesar or Vigenere cipher?(enter C for Caesar and V for Vigenere)" << endl;
        cin >> userChoice2;
        userChoice2 = toupper(userChoice2);
    } while (userChoice2 != 'C' && userChoice2 != 'V');

    if (userChoice2 == 'C') {
        //makes sure that shift is a positive number
        cout << "Enter the number you want to shift by: ";
        cin >> shift;
        cout << endl;
        while(cin.fail() || shift < 0) {
            cin.clear();
            cin.ignore();
            cout << "Enter a positive number you want to shift by: ";
            cin >> shift;
            cout << endl;
        }

        Caesar caesar;
        if (userChoice1 == 'E') {
            //encrypts the message with caesar cipher
            ifstream inFS;
            inFS.open("Input.txt");
            //makes sure file opened successfully
            if (!inFS.is_open()) {
                cout << "Couldn't open Input.txt" << endl;
                return 1;
            }
            while (!inFS.eof()) {
                caesar.readFile(inFS);
            }
            inFS.close();

            //runs encryption function
            caesar.encrypt(shift);

            ofstream outFS;
            outFS.open("Output.txt");
            if (!outFS.is_open()) {
                cout << "Couldn't open Output.txt" << endl;
                return 1;
            }
            outFS.clear();
            caesar.writeFile(outFS);
            cout << "Check 'Output.txt' to see your encrypted Caesar cipher!" << endl;
        }
        //This section decrypts the message with a Caesar cipher
        if (userChoice1 == 'D') {
            ifstream inFS;
            inFS.open("Input.txt");
            //makes sure file opens
            if (!inFS.is_open()) {
                cout << "Couldn't open Input.txt" << endl;
                return 1;
            }
            while (!inFS.eof()) {
                //reads input file
                caesar.readFile(inFS);
            }
            inFS.close();

            //runs decryption function
            caesar.decrypt(shift);

            ofstream outFS;
            outFS.open("Output.txt");
            if (!outFS.is_open()) {
                cout << "Couldn't open Output.txt" << endl;
                return 1;
            }
            outFS.clear();
            //writes to output file
            caesar.writeFile(outFS);
            cout << "Check 'Output.txt' to see your decrypted Caesar cipher!" << endl;
        }
    }
    else {
        Vigenere vigenere;
        if (userChoice1 == 'E') {
            //encrypts the message with vigenere cipher
            ifstream inFS;
            inFS.open("Input.txt");
            if (!inFS.is_open()) {
                cout << "Couldn't open Input.txt" << endl;
                return 1;
            }
            while (!inFS.eof()) {
                vigenere.readFile(inFS);
            }
            inFS.close();

            //runs encryption function
            vigenere.encrypt();

            ofstream outFS;
            outFS.open("Output.txt");
            if (!outFS.is_open()) {
                cout << "Couldn't open Output.txt" << endl;
                return 1;
            }
            outFS.clear();
            //writes to output file
            vigenere.writeFile(outFS);
            cout << "Check 'Output.txt' to see your encrypted Vigenere cipher!" << endl;
        }
        //This section decrypts the message with a vigenere cipher
        if (userChoice1 == 'D') {
            ifstream inFS;
            inFS.open("Input.txt");
            if (!inFS.is_open()) {
                cout << "Couldn't open Input.txt" << endl;
                return 1;
            }
            while (!inFS.eof()) {
                vigenere.readFile(inFS);
            }
            inFS.close();

            //runs decryption function
            vigenere.decrypt();

            ofstream outFS;
            outFS.open("Output.txt");
            if (!outFS.is_open()) {
                cout << "Couldn't open Output.txt" << endl;
                return 1;
            }
            outFS.clear();
            //writes info to output file
            vigenere.writeFile(outFS);
            cout << "Check 'Output.txt' to see your decrypted Vigenere cipher!" << endl;
        }
    }

    return 0;
}