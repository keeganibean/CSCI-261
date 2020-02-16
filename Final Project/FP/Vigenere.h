//
// Created by amfun on 4/23/2019.
//

#ifndef FINALPROJECT_VIGENERE_H
#define FINALPROJECT_VIGENERE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vigenere {
private:
    vector<string> userInput;
    vector<char> userOutput;
public:
    void encrypt();
    void decrypt();
    void readFile(ifstream &);
    void writeFile(ofstream &);
};


#endif //FINALPROJECT_VIGENERE_H
