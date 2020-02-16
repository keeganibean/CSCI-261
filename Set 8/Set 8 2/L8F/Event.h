//
// Created by amfun on 4/30/2019.
//

#ifndef L8F_EVENT_H
#define L8F_EVENT_H

#include <string>
#include "Date.h"

using namespace std;

class Event {
private:
    Date date;
    string title;
    string location;
public:
    Event();
    Event(Date, string, string);
    Date getDate();
    void setDate(Date);
    string getTitle();
    void setTitle(string);
    string getLocation();
    void setLocation(string);
    void Print();
};


#endif //L8F_EVENT_H
