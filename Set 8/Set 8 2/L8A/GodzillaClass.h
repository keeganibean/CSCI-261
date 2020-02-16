//
// Created by Keegan Bean on 2019-04-21.
//

#ifndef L8A_GODZILLACLASS_H
#define L8A_GODZILLACLASS_H

#include <string>
#include <iostream>

using namespace std;

class Godzilla{
private:
    string name;
    double health;
    double power;
public:
    Godzilla();//default constructor
    Godzilla(string, double, double);// non default constructor

    //getters
    string getName();
    double getHealth();
    double getPower();
};

#endif //L8A_GODZILLACLASS_H

