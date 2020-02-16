//
// Created by amfun on 4/30/2019.
//

#include "Event.h"
#include "Date.h"
#include <sstream>
#include <iostream>

using namespace std;

Event::Event() {
    date.setDate(12, 30, 1950);
    title = "Bjarne Stroustrup is Born";
    location = "Denmark";
}

Event::Event(Date date, string title, string location) {
    this->date = date;
    this->title = title;
    this->location = location;
}

Date Event::getDate() {
    return date;
}

void Event::setDate(Date date) {
    this->date = date;
}

string Event::getTitle() {
    return title;
}

void Event::setTitle(string title) {
    this->title = title;
}

string Event::getLocation() {
    return location;
}

void Event::setLocation(string location) {
    this->location = location;
}

void Event::Print() {
    cout << date.getMonth() << "/" << date.getDay() << "/" << date.getYear() << ": " << title << " (" << location << ")";
}