//
// Created by amfun on 4/30/2019.
//

#ifndef L8F_DATE_H
#define L8F_DATE_H

#include <string>

using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
    bool isValidDate(int, int, int);
public:
    Date();
    Date(int, int, int);
    void setDate(int, int, int);
    int getMonth();
    int getDay();
    int getYear();
    bool isEarlier(int &, int &, int &);
};


#endif //L8F_DATE_H
