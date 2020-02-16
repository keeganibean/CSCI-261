//
// Created by Keegan Bean on 2019-04-30.
// Collaborators: Aidan Funk
//

#ifndef L8D_GODZILLACLASS_H
#define L8D_GODZILLACLASS_H

#include <string>
#include <iostream>

using namespace std;

class Godzilla{
private:
    string name;
    double health;
    double power;
public:
    //constructors
    Godzilla();
    Godzilla(string, double, double);
    //getters
    string getName();
    double getHealth();
    double getPower();
    //setters
    void setName(string n);
    void setHealth(double h);
    void setPower(double p);
    //attack function
    void attack(Godzilla &g);
};

#endif //L8D_GODZILLACLASS_H
