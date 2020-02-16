//
// Created by Keegan Bean on 2019-04-01.
//

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <ios>
#include "KeegansFunctions.h"

using namespace std;

bool CountedWords(string wordCheck, vector<WordCount> &addWords, int &index) { //boolean for the words we know
    if(addWords.size()==0) {
        return false;
    }
    else {
        for (int c = 0; c < addWords.size(); c++) { //adding words
            if (wordCheck == addWords.at(c).word) {
                index = c; //setting the index equal to c
                return true;
            }
        }
        return false;
    }
}
