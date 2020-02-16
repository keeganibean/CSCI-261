#include <iostream>
#include "Bubble.h"                             // for standard input/output
using namespace std;                            // using the standard namespace

#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace

int main() {
    // display "Hello, World!" -- this still appears in our Run terminal as before


    // create a RenderWindow object
    // specify the size to be 640x640
    // set the title to be "SFML Example Window"
    RenderWindow window( VideoMode(640, 640), "Bouncing Bubble" );

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING BELOW HERE
    //********************************************
    Bubble bubble;
    bubble.setxDir(0.1);
    bubble.setyDir(0.2);
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
        window.draw(bubble.getBubble());
        bubble.updatePosition();
        if (bubble.getBubble().getPosition().x >= 580 || bubble.getBubble().getPosition().x <= 0) {
            bubble.setxDir(bubble.getxDir() * -1);
        }
        if (bubble.getBubble().getPosition().y >= 580 || bubble.getBubble().getPosition().y <= 0) {
            bubble.setyDir(bubble.getyDir() * -1);
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
            if( event.type == Event::Closed ) { // if event type is a closed event
                                                // i.e. they clicked the X on the window
                window.close();                 // then close our window
            }
        }
    }

    return EXIT_SUCCESS;                        // report our program exited successfully
}