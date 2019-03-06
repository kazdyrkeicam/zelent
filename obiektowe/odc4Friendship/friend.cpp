#include "friend.h"

using namespace std;

Punkt::Punkt(string n, float xx, float yy){
     nazwa = n;
     x = xx;
     y = yy;
}

void Punkt::load(){
    cout << "podaj x ";             cin >> x;
    cout << endl << "podaj y ";     cin >> y;
    cout << endl << "nazwa: ";      cin >> nazwa;
}

Prostokat::Prostokat(string n, float xx, float yy, float wd, float hg){
    nazwa = n;
    x = xx;
    y = yy;
    width = wd;
    higth = hg;
}

void Prostokat::load(){
    cout << "podaj x pkt ";             cin >> x;
    cout << endl << "podaj y pkt ";     cin >> y;
    cout << endl << "szerokosc ";       cin >> width;
    cout << endl << "wysokosc ";        cin >> higth;
    cout << endl << "nazwa: ";          cin >> nazwa;
}
