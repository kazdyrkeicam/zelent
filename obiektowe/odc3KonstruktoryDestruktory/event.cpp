#include <iostream>
#include "event.h"

using namespace std;

Event::Event(string n, int d, int m, int y, int h, int mins){
    name = n;
    day = d;
    month = m;
    year = y;
    hour = h;
    minute = mins;
}

Event::~Event(){
    cout << endl << "to ja destruktor sie nazywam";
}

void Event::show(){
    cout << name << " " << day << "." << month << "." << year << " " << hour << ":" << minute << endl;
}
