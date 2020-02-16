/* CSCI 261 A8: Bubble Bobble
 *
 * Author: Keegan Bean
 *
 * Making bubbles move and adding functions for the left click and the d key
 */

#include "Bubble.h"
#include <iostream>

using namespace std;

#include <SFML/Graphics.hpp>
using namespace sf;

Bubble::Bubble() { //Sets the dynamics of a bubble
    bubble.setRadius(30); //radius
    bubble.setPosition(300, 300); //position
    bubble.setFillColor(Color::White); //color
}

void Bubble::newPosition() { //changes position
    double x = bubble.getPosition().x;
    double y = bubble.getPosition().y;
    bubble.setPosition(x + horizontalDir, y + verticalDir);
}

CircleShape Bubble::getBubble() { //retrieves a bubble
    return bubble;
}

//Y direction
void Bubble::setVerticalDir(double yDir){
    this->verticalDir = yDir;
}

double Bubble::getVerticalDir(){
    return verticalDir;
}

//X direction
void Bubble::setHorizontalDir(double xDir) {
    this->horizontalDir = xDir;
}

double Bubble:: getHorizontalDir(){
    return horizontalDir;
}


void Bubble::movingBubble() { //Movement of bubble
    bubble.setPosition(rand() % 301 + 100, rand() % 301 + 100);
}


int Bubble::bubbleRadius() { //Radius
    return bubble.getRadius();
}

void Bubble::bubbleColor() { //Color of bubble
    bubble.setFillColor(Color(rand() % 256, rand() % 256, rand() % 256));
}

void Bubble::bubbleSize() { //Size of bubble
    bubble.setRadius(rand() % 41 + 10);
}


void Bubble::bubblePosition(RenderWindow &window) { //Position
    bubble.setPosition(Mouse::getPosition(window).x, Mouse::getPosition(window).y);
}