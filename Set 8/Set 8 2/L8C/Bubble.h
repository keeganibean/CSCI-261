//
// Created by amfun on 4/22/2019.
//

#ifndef SFML_TEMPLATE_BUBBLE_H
#define SFML_TEMPLATE_BUBBLE_H

#include <SFML/Graphics.hpp>
using namespace sf;

class Bubble {
private:
    CircleShape bubble;
    double xDir;
    double yDir;
public:
    Bubble();
    void updatePosition();
    CircleShape getBubble();
    void setxDir(double);
    double getxDir();
    void setyDir(double);
    double getyDir();
};

#endif //SFML_TEMPLATE_BUBBLE_H
