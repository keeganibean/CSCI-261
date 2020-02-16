//
// Created by Keegan Bean on 2019-04-16.
//

#ifndef A7_ORIGINALSTAR_H
#define A7_ORIGINALSTAR_H


#include <iostream>
#include <cctype>
#include <vector>
#include <fstream>
#include "OriginalStar.h"

using namespace std;

struct OriginalStar {
    double xPixel; //x coordinates
    double yPixel; //y coordinates
    double zPixel; //z coordinates
    double brightness; //controls brightness between 0.0 and 8.0
    int placed; //placement
    int modified; //new output
};



#endif //A7_ORIGINALSTAR_H
