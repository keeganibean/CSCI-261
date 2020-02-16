//
// Created by amfun on 4/23/2019.
//

#ifndef FINALPROJECT_CAESAR_H
#define FINALPROJECT_CAESAR_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Caesar {
private:
    vector<string> userInput;
    vector<char> userOutput;
public:
    void encrypt(int);
    void decrypt(int);
    void readFile(ifstream &);
    void writeFile(ofstream &);
};


#endif //FINALPROJECT_CAESAR_H
