//
// Created by amfun on 4/30/2019.
//

#include "Date.h"

bool Date::isValidDate(int month, int day, int year) {
    if (month >= 1 && month <= 12) {
        if (day >= 1 && day <= 31) {
            if (year <= 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

Date::Date() {
    month = 12;
    day = 30;
    year = 1950;
}

Date::Date(int month, int day, int year) {
    if (isValidDate(month, day, year)) {
        this->month = month;
        this->day = day;
        this->year = year;
    }
    else {
        this->month = 12;
        this->day = 30;
        this->year = 1950;
    }
}

void Date::setDate(int month, int day, int year) {
    if (isValidDate(month, day, year)) {
        this->month = month;
        this->day = day;
        this->year = year;
    }
    else {
        this->month = 12;
        this->day = 30;
        this->year = 1950;
    }
}

int Date::getMonth() {
    return month;
}

int Date::getDay() {
    return day;
}

int Date::getYear() {
    return year;
}

bool Date::isEarlier(int &month, int &day, int &year) {
    if (year < this->year) {
        return true;
    }
    else if(year = this->year) {
        if (month < this->month) {
            return true;
        }
        else if (month = this->month) {
            if (day < this->day) {
                return true;
            }
            else if (day >= this->day) {
                return false;
            }
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}