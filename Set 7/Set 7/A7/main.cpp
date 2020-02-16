#include <iostream>
#include <fstream>
#include <cctype>
#include <vector>
//headers
#include "OriginalStar.h"
#include "NewStar.h"
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main() {

    //same order as quiz 6
    //in and out
    ifstream inFS;
    ofstream outFS;
    vector<OriginalStar> star(1);
    vector<NewStar> pixels;
    //variables
    int count = 0;
    const int LENGTH = 640;
    const int WIDTH = 640;
    const double BRIGHTEST_STAR = 8.0; //between 0.0 and 8.0
    int shadeOfGray; //color

    //open files
    inFS.open("stars.txt"); //opens the stars.txt
    if (!inFS.is_open()) { //if it cant open
        cout << "Error opening input file" << endl;
        return 1; //breaks if the file cannot open
    }
    //edits files
    //writes the file into a vector
    while (!inFS.eof()) { //as long as it isn't the end of file
        star.resize(count + 1);
        inFS >> star.at(count).xPixel; //x coordinate
        inFS >> star.at(count).yPixel; //y coordinate
        inFS >> star.at(count).zPixel; //z coordinate
        inFS >> star.at(count).brightness; //controls brightness with const int
        //both for star placement
        inFS >> star.at(count).modified;
        inFS >> star.at(count).placed;
        count = count + 1;
    }
    inFS.close(); //closes file

    count = 0;
    for (int i = 0; i < star.size(); i++) {
        if (star.at(i).brightness <= 8.0 && star.at(i).brightness >= 0.0) { //changes x and y coordinates
            pixels.resize(count + 1);
            //copies the brightness for both axes
            pixels.at(count).xPixel = ((star.at(i).xPixel + 1) * WIDTH / 2);
            pixels.at(count).yPixel = ((-star.at(i).yPixel + 1) * LENGTH / 2);
            pixels.at(count).brightness = star.at(i).brightness;
            count = count + 1;

        }
    }

    outFS.open("ModifiedStars.txt");
    if (!outFS.is_open()) { //if it cant open
        cout << "Error opening input file" << endl;
        return 1;
    }
    for (int i = 0; i < pixels.size(); i++) {
        outFS << pixels.at(i).xPixel << '\t' << pixels.at(i).yPixel << '\t' << pixels.at(i).brightness << endl;
    }
    outFS.close(); //closes files

    RenderWindow window( VideoMode(640, 640), "Modified Stars" );

    while (window.isOpen()) {
        window.clear(Color::Black); //window color to black
        CircleShape star; //sets shape to circle
        for (int i = 0; i < pixels.size(); i++) {
            //parameters
            shadeOfGray = (255.0 * pixels.at(i).brightness)/BRIGHTEST_STAR;
            star.setRadius(2);
            star.setPosition(pixels.at(i).xPixel, pixels.at(i).yPixel);
            star.setFillColor(Color(shadeOfGray, shadeOfGray, shadeOfGray));
            window.draw(star);
        }
        window.display(); //displays
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close(); //closes
            }
        }
    }

    return 0;
}