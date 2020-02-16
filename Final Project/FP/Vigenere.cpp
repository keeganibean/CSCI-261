//
// Created by amfun on 4/23/2019.
//

#include "Vigenere.h"
#include <fstream>
#include <iostream>
#include <cctype>

using namespace std;

void Vigenere::encrypt() {
    //puts all letters individually into a vector
    for (int i = 0; i < userInput.size(); i++) {
        for (int j = 0; j < userInput.at(i).size(); j++) {
            userOutput.resize(userOutput.size() + 1);
            userOutput.at(userOutput.size() - 1) = userInput.at(i).at(j);
        }
        userOutput.resize(userOutput.size() + 1);
        userOutput.at(userOutput.size() - 1) = ' ';
    }
    //converts all characters to encrypted letter, recycling back to beginning of alphabet
    int counter = 1;
    for (int i = 0; i < userOutput.size(); i++) {
        if (counter == 5) {
            counter = 1;
        }
        if (isalpha(userOutput.at(i))) {
            //counter makes sure that it alternatates which code to do
            if (counter == 1) {
                for (int j = 0; j < 25; j++) {
                    if (userOutput.at(i) == 'Z' || userOutput.at(i) == 'z') {
                        userOutput.at(i) = userOutput.at(i) - 25;
                    } else {
                        userOutput.at(i) = userOutput.at(i) + 1;
                    }
                }
            }
            if (counter == 2) {
                for (int j = 0; j < 14; j++) {
                    if (userOutput.at(i) == 'Z' || userOutput.at(i) == 'z') {
                        userOutput.at(i) = userOutput.at(i) - 25;
                    } else {
                        userOutput.at(i) = userOutput.at(i) + 1;
                    }
                }
            }
            if (counter == 3) {
                for (int j = 0; j < 17; j++) {
                    if (userOutput.at(i) == 'Z' || userOutput.at(i) == 'z') {
                        userOutput.at(i) = userOutput.at(i) - 25;
                    } else {
                        userOutput.at(i) = userOutput.at(i) + 1;
                    }
                }
            }
            if (counter == 4) {
                for (int j = 0; j < 10; j++) {
                    if (userOutput.at(i) == 'Z' || userOutput.at(i) == 'z') {
                        userOutput.at(i) = userOutput.at(i) - 25;
                    } else {
                        userOutput.at(i) = userOutput.at(i) + 1;
                    }
                }
            }
            counter++;
        }
    }
}

void Vigenere::decrypt() {
    //puts all letters individually into a vector
    for (int i = 0; i < userInput.size(); i++) {
        for (int j = 0; j < userInput.at(i).size(); j++) {
            userOutput.resize(userOutput.size() + 1);
            userOutput.at(userOutput.size() - 1) = userInput.at(i).at(j);
        }
        userOutput.resize(userOutput.size() + 1);
        userOutput.at(userOutput.size() - 1) = ' ';
    }
    //converts all characters to decrypted letter, recycling back to end of alphabet
    int counter = 1;
    for (int i = 0; i < userOutput.size(); i++) {
        if (counter == 5) {
            counter = 1;
        }
        //makes sure that it only changes alphabetical characters and not punctuation or spaces
        if (isalpha(userOutput.at(i))) {
            //counter makes sure it uses correct cipher key
            if (counter == 1) {
                for (int j = 0; j < 25; j++) {
                    if (userOutput.at(i) == 'A' || userOutput.at(i) == 'a') {
                        userOutput.at(i) = userOutput.at(i) + 25;
                    } else {
                        userOutput.at(i) = userOutput.at(i) - 1;
                    }
                }
            }
            if (counter == 2) {
                for (int j = 0; j < 14; j++) {
                    if (userOutput.at(i) == 'A' || userOutput.at(i) == 'a') {
                        userOutput.at(i) = userOutput.at(i) + 25;
                    } else {
                        userOutput.at(i) = userOutput.at(i) - 1;
                    }
                }
            }
            if (counter == 3) {
                for (int j = 0; j < 17; j++) {
                    if (userOutput.at(i) == 'A' || userOutput.at(i) == 'a') {
                        userOutput.at(i) = userOutput.at(i) + 25;
                    } else {
                        userOutput.at(i) = userOutput.at(i) - 1;
                    }
                }
            }
            if (counter == 4) {
                for (int j = 0; j < 10; j++) {
                    if (userOutput.at(i) == 'A' || userOutput.at(i) == 'a') {
                        userOutput.at(i) = userOutput.at(i) + 25;
                    } else {
                        userOutput.at(i) = userOutput.at(i) - 1;
                    }
                }
            }
            counter++;
        }
    }
}

void Vigenere::readFile(ifstream &inFS) {
    userInput.resize(userInput.size() + 1);
    inFS >> userInput.at(userInput.size() - 1);
}
void Vigenere::writeFile(ofstream &outFS) {
    for (int i = 0; i < userOutput.size(); i++) {
        outFS << userOutput.at(i);
    }
}