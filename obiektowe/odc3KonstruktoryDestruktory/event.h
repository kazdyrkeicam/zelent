#include <iostream>

using namespace std;

class Event{
  int day, month, year;
  int hour, minute;
  string name;
  
    public:
  //nizej wpisane wartosci domyslne
  Event(string = "brak", int = 1, int = 1, int = 2015, int = 0, int = 0); //gdy przy wywolaniu w main nie poda sie wartosci
  ~Event();
  void load();
  void show();
};
