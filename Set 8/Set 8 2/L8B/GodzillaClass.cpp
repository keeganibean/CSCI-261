//
// Created by Keegan Bean on 2019-04-23.
// Collaborator: Aidan Funk
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
string Godzilla::getName(){
    return name;
}

double Godzilla::getHealth(){
    return health;
}

double Godzilla::getPower(){
    return power;
}


//setters
void Godzilla::setHealth(double h){
    health = h;
}

void Godzilla::setPower(double p){
    if(p > 0){
        power = p;
    }else{
        power = (rand() % 16) + 10;
    }

}

void Godzilla::setName(string n){
    name = n;
}

