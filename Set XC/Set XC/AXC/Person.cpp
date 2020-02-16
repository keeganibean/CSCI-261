//
// Created by Keegan Bean on 2019-05-01.
//

#include "Person.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// default person constructor
Person::Person() {
    // initializing
    age = 19;
    firstName = "Mike";
    lastName = "True";
    height = 6.1;
    gender = 'M';
    likesCantaloupe = true; // If they like cantaloupe
    likesMonsterMovies = true; // If they like monster movies
}

// Changing the values for each person using the instream
void Person::input(istream& in) {
    in >> firstName;
    in >> lastName;
    in >> gender;
    in >> age;
    in >> height;
    in >> likesMonsterMovies;
    in >> likesCantaloupe;
}

// outputs the information of a person
void Person::output(ostream& out) {
    string movies; // like or dislike movies
    string cantaloupe; // like or dislike cantaloupe
    // check if likes monster movies
    if (likesMonsterMovies) {
        movies = "does like monster movies";
    } else {
        movies = "does not like monster movies";
    }
    //check if likes cantaloupe
    if (likesCantaloupe) {
        cantaloupe = "does like cantaloupe";
    } else {
        cantaloupe = "doesnt like cantaloupe";
    }

    // output information of person in sentence format
    out << firstName << " " << lastName << " is a " << height << " foot tall, " << age << " year old " << gender << " ";
    out << "that " << movies << " and " << cantaloupe << "!" << endl;

}

bool Person::validate() { //Validates a person
    if (gender == 'F') { // if F, invalid
        return false;
    } else
    if (age < 18 || age > 40) { // Checks if person is in the age range
        return false;
    } else
    if (height > 7.5) { // checks if person is shorter than 7.5 feet
        return false;
    } else
    if (!likesMonsterMovies) { // Makes sure that they like monster movies
        return false;
    } else
    if (!likesCantaloupe) { // Makes sure they like cantaloupe
        return false;
    }else {
        return true; // If the person is valid the boolean returns true
    }
}

// returns age
int Person::personAge() {
    return age;
}
// returns first name
string Person::FirstName() {
    return firstName;
}
// returns last name
string Person::LastName() {
    return lastName;
}
// returns gender
char Person::personGender() {
    return gender;
}
// returns height
double Person::outputHeight() {
    return height;
}
// returns likesCantaloupe
bool Person::likeCantaloupe() {
    return likesCantaloupe;
}
// returns likesMonsterMovies
bool Person::likeMonster() {
    return likesMonsterMovies;
}
// sets height of person to input value
void Person::inputHeight(double height) {
    this->height = height;
}
