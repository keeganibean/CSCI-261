#include <iostream>
#include <ctime>
#include <vector>
#include "Bubble.h"                             // for standard input/output
using namespace std;                            // using the standard namespace

#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace

int main() {
    // display "Hello, World!" -- this still appears in our Run terminal as before


    // create a RenderWindow object
    // specify the size to be 640x640
    // set the title to be "SFML Example Window"
    RenderWindow window( VideoMode(640, 640), " Bouncing Bubble " ); //Title of the window

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING BELOW HERE
    //********************************************
    //Bubble Information
    srand(time(0));
    vector<Bubble> bubble(5); //Vector for the bubbles
    srand(time(0));
    //For loop for the dyamics of Bubble bobble
    for(int i = 0; i < bubble.size(); i++) { //Setting Direction
        double x = (double)rand() / (double) RAND_MAX;
        double randomX = x * 0.5;
        bubble.at(i).setHorizontalDir(randomX); //Random X direction

        double y = (double)rand() / RAND_MAX;
        double randomY = y * 0.5;
        bubble.at(i).setVerticalDir(randomY); //Random Y direction

        //Calling bubble functions
        bubble.at(i).bubbleColor();
        bubble.at(i).bubbleSize();
        bubble.at(i).movingBubble();
    }

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING ABOVE HERE
    //********************************************

    // while our window is open, keep it open
    // this is our draw loop

    while( window.isOpen() ) {
        window.clear( Color::Black );           // clear the contents of the old frame
        // by setting the window to black

        //****************************************
        //  ADD ALL OF OUR DRAWING BELOW HERE
        //****************************************
        for (int i = 0; i < bubble.size(); i++) {
            window.draw(bubble.at(i).getBubble());
            bubble.at(i).newPosition();
            if (bubble.at(i).getBubble().getPosition().y >= 640 - (bubble.at(i).bubbleRadius() * 2) || bubble.at(i).getBubble().getPosition().y <= 0) {
                bubble.at(i).setVerticalDir(bubble.at(i).getVerticalDir() * -1);
            }

            if (bubble.at(i).getBubble().getPosition().x >= 640 - (bubble.at(i).bubbleRadius() * 2) || bubble.at(i).getBubble().getPosition().x <= 0) {
                bubble.at(i).setHorizontalDir(bubble.at(i).getHorizontalDir() * -1);
            }

        }
        //****************************************
        //  ADD ALL OF OUR DRAWING ABOVE HERE
        //****************************************

        window.display();                       // display the window

        //****************************************
        // HANDLE EVENTS BELOW HERE
        //****************************************
        Event event;
        while( window.pollEvent(event) ) {      // ask the window if any events occurred
            if (event.type == Event::MouseButtonPressed) //Clicking Dynamics
            {
                if (event.mouseButton.button == Mouse::Left) //Left click
                {
                    bubble.resize(bubble.size() + 1);
                    bubble.at(bubble.size() - 1).bubbleColor();
                    bubble.at(bubble.size() - 1).bubblePosition(window);
                    bubble.at(bubble.size() - 1).bubbleColor();

                    double y = (double)rand() / RAND_MAX;
                    double randomY = y * 0.5;
                    bubble.at(bubble.size() - 1).setVerticalDir(randomY); //Y directionSer

                    double x = (double)rand() / (double) RAND_MAX;
                    double randomX = x * 0.5;
                    bubble.at(bubble.size() - 1).setHorizontalDir(randomX); //X direction


                    window.draw(bubble.at(bubble.size() - 1).getBubble()); //draw bubbles
                }
            }
            if (event.type == Event::KeyPressed) { //Delete bubbles when D is pressed
                if (event.key.code == Keyboard::D) {
                    if (bubble.size() > 0) {
                        bubble.resize(bubble.size() - 1);
                    }
                }
            }

            if( event.type == Event::Closed ) { // if event type is a closed event
                                                // i.e. they clicked the X on the window
                window.close();                 // then close our window
            }
        }
    }

    return EXIT_SUCCESS;                        // report our program exited successfully
}