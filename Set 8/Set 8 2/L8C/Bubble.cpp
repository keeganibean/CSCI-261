//
// Created by amfun on 4/22/2019.
//

#include "Bubble.h"
#include <iostream>
using namespace std;

#include <SFML/Graphics.hpp>
using namespace sf;

Bubble::Bubble() {
    bubble.setRadius(30);
    bubble.setPosition(300, 300);
    bubble.setFillColor(Color::White);
}

void Bubble::updatePosition() {
    double x = bubble.getPosition().x;
    double y = bubble.getPosition().y;
    bubble.setPosition(x + xDir, y + yDir);
}

CircleShape Bubble::getBubble() {
    return bubble;
}

void Bubble::setxDir(double xDir) {
    this->xDir = xDir;
}

double Bubble::getxDir(){
    return xDir;
}

void Bubble::setyDir(double yDir){
    this->yDir = yDir;
}

double Bubble::getyDir(){
    return yDir;
}