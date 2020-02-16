//
// Created by keeganbean on 4/24/19
//

#ifndef SFML_TEMPLATE_BUBBLE_H
#define SFML_TEMPLATE_BUBBLE_H

#include <SFML/Graphics.hpp>
using namespace sf;

class Bubble { //Private class for the bubble
private:
    CircleShape bubble;
    double horizontalDir;
    double verticalDir;
public:
    Bubble(); //Bubble Stuff
    CircleShape getBubble();
    void movingBubble();
    void bubbleSize();
    void bubbleColor();
    int bubbleRadius();
    void newPosition(); //Position Stuff
    void bubblePosition(RenderWindow &);
    void setHorizontalDir(double); //Direction of Bubble Horizontal
    double getHorizontalDir();
    void setVerticalDir(double); //Direction of Bubble Vertical
    double getVerticalDir();
};

#endif //SFML_TEMPLATE_BUBBLE_H
