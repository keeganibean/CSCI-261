#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include "StarInfo.h"
#include "NewStarInfo.h"

using namespace std;

int main() {

    ifstream inFS;
    vector<StarInfo> star(1);
    vector<NewStarInfo> pixel;
    int counter = 0;
    const int WIDTH = 640;
    const int LENGTH = 640;

    inFS.open("stars.txt");
    if (!inFS.is_open()) {
        cout << "File couldn't open" << endl;
        return 1;
    }

    while (!inFS.eof()) {
        star.resize(counter + 1);
        inFS >> star.at(counter).xStar;
        inFS >> star.at(counter).yStar;
        inFS >> star.at(counter).zStar;
        inFS >> star.at(counter).brightness;
        inFS >> star.at(counter).draper;
        inFS >> star.at(counter).revised;
        counter++;
    }

    inFS.close();

    counter = 0;
    for (int i = 0; i < star.size(); i++) {
        if (star.at(i).brightness <= 8.0 && star.at(i).brightness >= 0.0) {
            pixel.resize(counter + 1);
            pixel.at(counter).xStar = ((star.at(i).xStar + 1) * WIDTH / 2);
            pixel.at(counter).yStar = ((-star.at(i).yStar + 1) * LENGTH / 2);
            pixel.at(counter).brightness = star.at(i).brightness;
            counter++;

        }
    }

    for (int i = 0; i < pixel.size(); i++) {
        cout << pixel.at(i).xStar << '\t' << pixel.at(i).yStar << '\t' << pixel.at(i).brightness << endl;
    }

    return 0;
}