//
// Created by amfun on 4/23/2019.
//

#include "Caesar.h"
#include <fstream>
#include <iostream>
#include <cctype>

using namespace std;

void Caesar::encrypt(int shift) {
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
    for (int i = 0; i < userOutput.size(); i++) {
        if (isalpha(userOutput.at(i))) {
            //makes sure that it only changes alphabetical characters and not punctuation or spaces
            for (int j = 0; j < shift; j++) {
                if (userOutput.at(i) == 'Z' || userOutput.at(i) == 'z') {
                    userOutput.at(i) = userOutput.at(i) - 25;
                }
                else {
                    userOutput.at(i) = userOutput.at(i) + 1;
                }
            }
        }
    }
}

void Caesar::decrypt(int shift) {
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
    for (int i = 0; i < userOutput.size(); i++) {
        //makes sure that it only changes alphabetical characters and not punctuation or spaces
        if (isalpha(userOutput.at(i))) {
            for (int j = 0; j < shift; j++) {
                if (userOutput.at(i) == 'A' || userOutput.at(i) == 'a') {
                    userOutput.at(i) = userOutput.at(i) + 25;
                }
                else {
                    userOutput.at(i) = userOutput.at(i) - 1;
                }
            }
        }
    }
}

void Caesar::readFile(ifstream &inFS) {
    userInput.resize(userInput.size() + 1);
    inFS >> userInput.at(userInput.size() - 1);
}
void Caesar::writeFile(ofstream &outFS) {
    for (int i = 0; i < userOutput.size(); i++) {
        outFS << userOutput.at(i);
    }
}