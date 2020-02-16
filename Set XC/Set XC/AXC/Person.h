//
// Created by Keegan Bean on 2019-05-01.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#ifndef AXC_PERSON_H
#define AXC_PERSON_H

class Person {

private:
    int age;
    string firstName;
    string lastName;
    char gender;
    double height;
    bool likesCantaloupe;
    bool likesMonsterMovies;

public:
    Person();
    void input(istream& in); //taking the input from person.dat
    void output(ostream& out); //outputting the information
    bool validate(); //validating people function
    int personAge(); //implemented by file
    string FirstName(); //implemented by file
    string LastName(); //implemented by file
    char personGender();  //implemented by file
    double outputHeight(); //output for the persons height
    void inputHeight(double height); //taking the input for the people height
    bool likeCantaloupe(); //implemented by file
    bool likeMonster(); //implemented by file

};


#endif //AXC_PERSON_H
