//
// Created by Keegan Bean on 2019-04-23.
// Collaborator: Aidan Funk
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
    const string getName();
    const double getHealth();
    const double getPower();
    //setters
    void setName(string n);
    void setHealth(double h);
    void setPower(double p);
    //attack funtion
    void attack(Godzilla &g);
    //greet function
    void greet(const Godzilla &g);
};

#endif //L8D_GODZILLACLASS_H
