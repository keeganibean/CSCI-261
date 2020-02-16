//
// Created by Keegan Bean on 2019-04-23.
// Collaborator: Aidan Funk
//

#ifndef L8B_GODZILLACLASS_H
#define L8B_GODZILLACLASS_H

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
    void setName(string name);
    void setHealth(double xp);
    void setPower(double p);
};


#endif //L8B_GODZILLACLASS_H
