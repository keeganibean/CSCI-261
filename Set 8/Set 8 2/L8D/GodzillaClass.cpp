//
// Created by Keegan Bean on 2019-04-30.
//

#include "GodzillaClass.h"
#include <string>
#include <iostream>
#include <ctime>

using namespace std;

Godzilla::Godzilla(){
    srand(time(0));//random seed
    name = "Godzilla"; //initializes the name to godzilla
    health = (rand() % 51) + 50; //random health
    power = (rand() % 16) + 10; //random power
}

Godzilla::Godzilla(string userName, double xp, double attack){
    cout << "Enter a name for your Godzilla: ";
    //The user can set the name
    getline(cin, userName);
    //assigns it to the user input
    name = userName;
    cout << "Enter a health for your Godzilla that is greater than 0: ";
    //health input
    cin >> xp;
    //if the health is not greater than 0 assigns it to [50,100] random
    if (xp <= 0){
        xp = (rand() % 51) + 50;
    }
    health = xp;
    cout << "Enter a power for your Godzilla greater that is than 0: ";
    cin >> attack;
    //if the power is not greater than 0 assigns it to [10,25] random
    if(attack <= 0){
        attack = (rand() % 16) + 10;
    }
    power = attack;
}

//getters
string Godzilla::getName(){ //getting original name
    return name;
}

double Godzilla::getHealth(){ //getting original health
    return health;
}

double Godzilla::getPower(){ //getting original power
    return power;
}


//setters

void Godzilla::setName(string n){ //setting the new name
    name = n;
}


void Godzilla::setHealth(double h){ //setting the new health
    health = h;
}

void Godzilla::setPower(double p){ //setting the new power
    if(p > 0){
        power = p;
    }else{
        power = (rand() % 16) + 10;
    }

}



//The function for the battle between the Godzilla
void Godzilla::attack(Godzilla &g){
    g.health = g.health - power; //removes the health from either Godzilla
    cout << name << " attacks " << g.name << endl; //Shows that they are attacking
    if(g.health <= 0){ //Shows when they die
        cout << g.name << " has been vanquished" << endl; //ouputs the name and line
    }
}
