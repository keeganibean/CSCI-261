#include <iostream>
#include <dos.h>                               // for standard input/output
using namespace std;                            // using the standard namespace

#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace

int main() {
    // display "Hello, World!" -- this still appears in our Run terminal as before
    cout << "Hello, World!" << endl;

    // create a RenderWindow object
    // specify the size to be 640x640
    // set the title to be "SFML Example Window"
    RenderWindow window( VideoMode(640, 640), "SFML Example Window" );

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING BELOW HERE
    //********************************************

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING ABOVE HERE
    //********************************************

    // while our window is open, keep it open
    // this is our draw loop
    while( window.isOpen() ) {
        window.clear( Color(59,118,219) );           // clear the contents of the old frame
                                                // by setting the window to black

        //****************************************
        //  ADD ALL OF OUR DRAWING BELOW HERE
        //****************************************
        CircleShape star;
        star.setPosition(-50, -50);
        star.setRadius(100);
        star.setFillColor(Color::Yellow);
        window.draw(star);

        RectangleShape treeTrunk;
        treeTrunk.setPosition(444, 250);
        treeTrunk.setSize(Vector2f(50, 300));
        treeTrunk.setFillColor(Color(54, 44, 12));
        window.draw(treeTrunk);

        CircleShape treeTop;
        treeTop.setPosition(320, 100);
        treeTop.setRadius(150);
        treeTop.setFillColor(Color(16,77,30));
        window.draw(treeTop);

        RectangleShape ground;
        ground.setPosition(-50, 550);
        ground.setSize(Vector2f(700, 100));
        ground.setFillColor(Color(16, 133, 12));
        window.draw(ground);

        CircleShape ball;
        ball.setPosition(100, 560);
        ball.setRadius(30);
        ball.setFillColor(Color(199,211,212));
        window.draw(ball);

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